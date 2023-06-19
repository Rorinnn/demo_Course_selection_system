#include "course_selection_system.h"
using namespace std;

//�γ���Ϣ��
//��� ���� �꼶 ѧԺ רҵ ����ѧԺ �γ���� �γ����� �γ̹��� �Ͽ����� �Ͽνڴ�
//���ܺ�������
void course::Search_course_information()
{
    cout << "����������ɸѡ����:" << endl << "(�ϸ������¸�ʽ����,������ɸѡ������������0)" << endl;
    cout << "(��� ���� �꼶 ѧԺ רҵ ����ѧԺ �γ���� �γ����� �γ̹��� �Ͽ����� �Ͽνڴ�)" << endl;
    string course_id;
    string course_name;
    string course_grade;
    string course_college;
    string course_profession;
    string course_college_open;
    string course_type;
    string course_nature;
    string course_belong;
    string course_week;
    string course_time;
    cin >> course_id >> course_name >> course_grade >> course_college >> course_profession >> course_college_open >> course_type >> course_nature >> course_belong >> course_week >> course_time;
    course temp_course(course_id, course_name, course_grade, course_college, course_profession, course_college_open, course_type, course_nature, course_belong, course_week, course_time);
    //���ļ�
    fstream course_file("course.txt", ios::in);
    if (!course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    system("cls");
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(course_file, temp);
    //��ȡ�ļ���ɸѡ
    course_file >> course_id >> course_name >> course_grade >> course_college >> course_profession >> course_college_open >> course_type >> course_nature >> course_belong >> course_week >> course_time;
    while (!course_file.eof())
    {
        if ((course_id == temp_course.course_id || temp_course.course_id == "0") && (course_name == temp_course.course_name || temp_course.course_name == "0") && (course_grade == temp_course.course_grade || temp_course.course_grade == "0") && (course_college == temp_course.course_college || temp_course.course_college == "0") && (course_profession == temp_course.course_profession || temp_course.course_profession == "0") && (course_college_open == temp_course.course_college_open || temp_course.course_college_open == "0") && (course_type == temp_course.course_type || temp_course.course_type == "0") && (course_nature == temp_course.course_nature || temp_course.course_nature == "0") && (course_belong == temp_course.course_belong || temp_course.course_belong == "0") && (course_week == temp_course.course_week || temp_course.course_week == "0") && (course_time == temp_course.course_time || temp_course.course_time == "0"))
        {
            cout << "���¿γ̷���ɸѡ����:" << endl;
            cout << course_id << " " << course_name << " " << course_grade << " " << course_college << " " << course_profession << " " << course_college_open << " " << course_type << " " << course_nature << " " << course_belong << " " << course_week << " " << course_time << endl;
        }
        course_file >> course_id >> course_name >> course_grade >> course_college >> course_profession >> course_college_open >> course_type >> course_nature >> course_belong >> course_week >> course_time;
    }
    course_file.close();
    cout << "��ѯ���" << endl;
}
//ѧ��ѡ����Ϣ������
//��������
void stu_course::Get_course_week_time()
{
    //��course.txt�ļ�����λ���ÿγ�
    fstream course_file("course.txt", ios::in);
    if (!course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string temp_course_id;
    string temp;
    while (course_file >> temp_course_id)
    {
        if (temp_course_id == stu_temp_course_id)
        {
            break;
        }
        getline(course_file, temp);
    }
    //��ȡ�γ����ںͽڴ�
    course_file >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> stu_temp_course_week >> stu_temp_course_time;
    course_file.close();
}
bool stu_course::Isconflict()
{
    cout << "������Ҫѡ�Ŀγ̱��:" << endl;
    cin >> stu_temp_course_id;
    //��ô������γ����ںͽڴ�
    Get_course_week_time();
    //���ļ����ж��Ƿ��ͻ
    fstream stu_course_file("./stu_course/" + stu_account + ".txt", ios::in);
    if (!stu_course_file)
    {
        //����ļ����������½��ļ�
        stu_course_file.open("./stu_course/" + stu_account + ".txt", ios::out);
        stu_course_file.close();
        stu_course_file.open("./stu_course/" + stu_account + ".txt", ios::in);
        if (!stu_course_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
    }
    string temp_course_id;
    string temp;
    string temp_course_week;
    string temp_course_time;
    while (stu_course_file >> temp_course_id >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp_course_week >> temp_course_time)
    {
        if (temp_course_id == stu_temp_course_id || (temp_course_week == stu_temp_course_week && temp_course_time == stu_temp_course_time))
        {
            stu_course_file.close();
            return true;
        }
    }
    stu_course_file.close();
    return false;
}
bool stu_course::Iscourse(string course_id)
{
    //���ļ�
    fstream stu_course_file("./stu_course/" + stu_account + ".txt", ios::in);
    if (!stu_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����һ��ѧ��ѡ����Ϣ���������ͬ�Ŀγ̱���򷵻�true
    string temp_course_id;
    string temp;
    while (stu_course_file >> temp_course_id)
    {
        if (temp_course_id == course_id)
        {
            stu_course_file.close();
            return true;
            break;
        }
        getline(stu_course_file, temp);
    }
    stu_course_file.close();
    return false;
}
string stu_course::Get_course(string course_week, string course_time)
{
    //���ļ�
    fstream stu_course_file("./stu_course/" + stu_account + ".txt", ios::in);
    if (!stu_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����һ��ѧ��ѡ����Ϣ���������ͬ�����ںͽڴ���return�γ�����
    string temp_course_week;
    string temp_course_time;
    string temp_course_name;
    string temp;
    while (stu_course_file >> temp >> temp_course_name >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp_course_week >> temp_course_time)
    {
        if (temp_course_week == course_week && temp_course_time == course_time)
        {
            return temp_course_name;
            break;
        }
    }
    stu_course_file.close();
    return "";
}
//���ܺ�������
void stu_course::Choose_course()
{
    //��stu_course�ļ����µ���ѧ��Ϊ������ѡ������ļ�
    fstream stu_course_file("./stu_course/" + stu_account + ".txt", ios::in | ios::out | ios::app);
    if (!stu_course_file)
    {
        //����ļ����������½��ļ�
        stu_course_file.open("./stu_course/" + stu_account + ".txt", ios::out);
        stu_course_file.close();
        stu_course_file.open("./stu_course/" + stu_account + ".txt", ios::in | ios::out | ios::app);
        if (!stu_course_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
    }
    //�Ƿ��ͻ����ͬ������в�ͬ����
    if (!Isconflict())
    {
        //����ͻ���course.txtƥ���Ӧ�γ̲�д���ļ�
        //��course.txt
        fstream course_file("course.txt", ios::in);
        if (!course_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
        //��λ���ÿγ�
        string temp_course_id;
        string temp;
        while (course_file >> temp_course_id)
        {
            if (temp_course_id == stu_temp_course_id)
            {
                break;
            }
            getline(course_file, temp);
        }
        //д���ļ�
        getline(course_file, temp);
        stu_course_file << temp_course_id << temp << endl;
        course_file.close();
        system("cls");
        cout << "ѡ�γɹ�" << endl;
        //��course_student_list�ļ����µĿγ�ѧ��������д��ѧ��
        //���ļ�
        fstream course_student_list_file("./course_student_list/" + stu_temp_course_id + ".txt", ios::out | ios::app);
        if (!course_student_list_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
        //д��ѧ��
        course_student_list_file << stu_account << endl;
        course_student_list_file.close();
    }
    else {
        system("cls");
        cout << "ѡ��ʧ�ܣ�����ԭ��Ϊѡ���ظ���ʱ���ͻ" << endl;
    }
}
void stu_course::Drop_course()
{
    cout << "������Ҫ�˵Ŀγ̱��:" << endl;
    cin >> stu_temp_course_id;
    //�Ƿ�Ϊ��ѡ�Ŀγ̣���ͬ������в�ͬ����
    if (!Iscourse(stu_temp_course_id))
    {
        system("cls");
        cout << "�˿�ʧ�ܣ�����ԭ��Ϊδѡ�ÿγ�" << endl;
        return;
    }
    //���ļ�
    fstream stu_course_file("./stu_course/" + stu_account + ".txt", ios::in | ios::out);
    if (!stu_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //�½�һ��stu_course_temp.txt������ʱ��������
    fstream stu_course_temp_file("./stu_course/" + stu_account + "_temp.txt", ios::out);
    if (!stu_course_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��λ���ÿγ̲���stu_course_temp.txt�г���д������,����д��ÿγ�����
    string temp_course_id;
    string temp;
    while (stu_course_file >> temp_course_id)
    {
        if (temp_course_id != stu_temp_course_id)
        {
            stu_course_temp_file << temp_course_id;
            getline(stu_course_file, temp);
            stu_course_temp_file << temp << endl;
        }
        else
        {
            getline(stu_course_file, temp);
        }
    }
    stu_course_file.close();
    stu_course_temp_file.close();
    //ɾ��ԭ�ļ�
    remove(("./stu_course/" + stu_account + ".txt").c_str());
    //�������ļ�
    rename(("./stu_course/" + stu_account + "_temp.txt").c_str(), ("./stu_course/" + stu_account + ".txt").c_str());
    system("cls");
    cout << "�˿γɹ�" << endl;
    //ɾ��course_student_list�ļ����µĿγ�ѧ�������е�ѧ��
    //���ļ�
    fstream course_student_list_file("./course_student_list/" + stu_temp_course_id + ".txt", ios::in);
    if (!course_student_list_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //�½�һ��temp�ı�������ʱ��������
    fstream course_student_list_temp_file("./course_student_list/" + stu_temp_course_id + "_temp.txt", ios::out);
    if (!course_student_list_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��λ���ÿγ̲���course_student_list_temp.txt�г���д������,����д���ѧ������
    string temp_stu_account;
    while (course_student_list_file >> temp_stu_account)
    {
        if (temp_stu_account != stu_account)
        {
            course_student_list_temp_file << temp_stu_account << endl;
        }
    }
    course_student_list_file.close();
    course_student_list_temp_file.close();
    //ɾ��ԭ�ļ�
    remove(("./course_student_list/" + stu_temp_course_id + ".txt").c_str());
    //�������ļ�
    rename(("./course_student_list/" + stu_temp_course_id + "_temp.txt").c_str(), ("./course_student_list/" + stu_temp_course_id + ".txt").c_str());
}
void stu_course::Show_course()
{
    //���ļ�
    fstream stu_course_file("./stu_course/" + stu_account + ".txt", ios::in);
    if (!stu_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //��ʾ�α�

    stu_course_file.close();
}
void stu_course::Show_next_course()
{
    //��ȡ��ǰʱ��
    time_t now_time = time(NULL);
    //ת��Ϊ����ʱ��
    tm local_time;
    localtime_s(&local_time, &now_time);
    //string���ʹ洢��ǰʱ��
    string week;
    string time;
    if (local_time.tm_hour < 8)
    {
        time = "1��2";
    }
    else if (local_time.tm_hour < 10)
    {
        time = "3��4";
    }
    else if (local_time.tm_hour < 14)
    {
        time = "5��6";
    }
    else if (local_time.tm_hour < 16)
    {
        time = "7��8";
    }
    else if (local_time.tm_hour < 19)
    {
        time = "9��10��11";
    }
    else
    {
        cout << "�����Ѿ�û�п��ˣ�˯���þ���" << endl;
        return;
    }
    switch (local_time.tm_wday)
    {
    case 0:
        week = "������";
        break;
    case 1:
        week = "����һ";
        break;
    case 2:
        week = "���ڶ�";
        break;
    case 3:
        week = "������";
        break;
    case 4:
        week = "������";
        break;
    case 5:
        week = "������";
        break;
    case 6:
        week = "������";
        break;
    }
    //���ú�����ÿγ�����
    string name = Get_course(week, time);
    //�����һ�ڿε�ʱ�������
    cout << "��һ�ڿ�Ϊ:" << name << endl;
    cout << "ʱ��Ϊ:";
    if (time == "1��2")
    {
        cout << "8:00-9:40" << endl;
    }
    else if (time == "3��4")
    {
        cout << "10:00-11:40" << endl;
    }
    else if (time == "5��6")
    {
        cout << "14:00-15:40" << endl;
    }
    else if (time == "7��8")
    {
        cout << "16:00-17:40" << endl;
    }
    else if (time == "9��10��11")
    {
        cout << "19:00-21:35" << endl;
    }
}
//��ʦ�ڿ���Ϣ������
//��������
void tea_course::Get_course_week_time()
{
    //��course.txt�ļ�����λ���ÿγ�
    fstream course_file("course.txt", ios::in);
    if (!course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string temp_course_id;
    string temp;
    while (course_file >> temp_course_id)
    {
        if (temp_course_id == tea_temp_course_id)
        {
            break;
        }
        getline(course_file, temp);
    }
    //��ȡ�γ����ںͽڴ�
    course_file >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> tea_temp_course_week >> tea_temp_course_time;
    course_file.close();
}
bool tea_course::Isconflict()
{
    cout << "������Ҫ����ڿεĿγ̱��:" << endl;
    cin >> tea_temp_course_id;
    //��ô������γ����ںͽڴ�
    Get_course_week_time();
    //���ļ����ж��Ƿ��ͻ
    fstream tea_course_file("./tea_course/" + tea_account + ".txt", ios::in);
    if (!tea_course_file)
    {
        //����ļ����������½��ļ�
        tea_course_file.open("./tea_course/" + tea_account + ".txt", ios::out);
        tea_course_file.close();
        tea_course_file.open("./tea_course/" + tea_account + ".txt", ios::in);
        if (!tea_course_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
    }
    string temp_course_id;
    string temp;
    string temp_course_week;
    string temp_course_time;
    while (tea_course_file >> temp_course_id >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp_course_week >> temp_course_time)
    {
        if (temp_course_id == tea_temp_course_id || (temp_course_week == tea_temp_course_week && temp_course_time == tea_temp_course_time))
        {
            tea_course_file.close();
            return true;
        }
    }
    tea_course_file.close();
    return false;
}
bool tea_course::Iscourse(string course_id)
{
    //���ļ�
    fstream tea_course_file("./tea_course/" + tea_account + ".txt", ios::in);
    if (!tea_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����һ���ʦ�ڿ���Ϣ���������ͬ�Ŀγ̱���򷵻�true
    string temp_course_id;
    string temp;
    while (tea_course_file >> temp_course_id)
    {
        if (temp_course_id == course_id)
        {
            tea_course_file.close();
            return true;
            break;
        }
        getline(tea_course_file, temp);
    }
    tea_course_file.close();
    return false;
}
string tea_course::Get_course(string course_week, string course_time)
{
    //���ļ�
    fstream tea_course_file("./tea_course/" + tea_account + ".txt", ios::in);
    if (!tea_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����һ���ʦ�ڿ���Ϣ���������ͬ�����ںͽڴ���return�γ�����
    string temp_course_week;
    string temp_course_time;
    string temp_course_name;
    string temp;
    while (tea_course_file >> temp >> temp_course_name >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp_course_week >> temp_course_time)
    {
        if (temp_course_week == course_week && temp_course_time == course_time)
        {
            return temp_course_name;
            break;
        }
    }
    tea_course_file.close();
    return "";
}
//���ܺ�������
void tea_course::Add_tea_course()
{
    //��tea_course�ļ����µ���ѧ��Ϊ������ѡ������ļ�
    fstream tea_course_file("./tea_course/" + tea_account + ".txt", ios::in | ios::out | ios::app);
    if (!tea_course_file)
    {
        //����ļ����������½��ļ�
        tea_course_file.open("./tea_course/" + tea_account + ".txt", ios::out);
        tea_course_file.close();
        tea_course_file.open("./tea_course/" + tea_account + ".txt", ios::in | ios::out | ios::app);
        if (!tea_course_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
    }
    //�Ƿ��ͻ����ͬ������в�ͬ����
    if (!Isconflict())
    {
        //����ͻ���course.txtƥ���Ӧ�γ̲�д���ļ�
        //��course.txt
        fstream course_file("course.txt", ios::in);
        if (!course_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
        //��λ���ÿγ�
        string temp_course_id;
        string temp;
        while (course_file >> temp_course_id)
        {
            if (temp_course_id == tea_temp_course_id)
            {
                break;
            }
            getline(course_file, temp);
        }
        //д���ļ�
        getline(course_file, temp);
        tea_course_file << temp_course_id << temp << endl;
        course_file.close();
        system("cls");
        cout << "��ӿγ̳ɹ�" << endl;
        //��course_teacher_list�ļ����µĿγ�ѧ��������д�빤��
        //���ļ�
        fstream course_teacher_list_file("./course_teacher_list/" + tea_temp_course_id + ".txt", ios::out | ios::app);
        if (!course_teacher_list_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
        //д�빤��
        course_teacher_list_file << tea_account << endl;
        course_teacher_list_file.close();
    }
    else {
        system("cls");
        cout << "��ӿγ�ʧ�ܣ�����ԭ��Ϊ�γ��ظ���ʱ���ͻ" << endl;
    }
}
void tea_course::Delete_tea_course()
{
    cout << "������Ҫ�˵Ŀγ̱��:" << endl;
    cin >> tea_temp_course_id;
    //�Ƿ�Ϊ���ڵĿγ̣���ͬ������в�ͬ����
    if (!Iscourse(tea_temp_course_id))
    {
        system("cls");
        cout << "�˿�ʧ�ܣ�����ԭ��Ϊδѡ�ÿγ�" << endl;
        return;
    }
    //���ļ�
    fstream tea_course_file("./tea_course/" + tea_account + ".txt", ios::in | ios::out);
    if (!tea_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //�½�һ��tea_course_temp.txt������ʱ��������
    fstream tea_course_temp_file("./tea_course/" + tea_account + "_temp.txt", ios::out);
    if (!tea_course_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��λ���ÿγ̲���tea_course_temp.txt�г���д������,����д��ÿγ�����
    string temp_course_id;
    string temp;
    while (tea_course_file >> temp_course_id)
    {
        if (temp_course_id != tea_temp_course_id)
        {
            tea_course_temp_file << temp_course_id;
            getline(tea_course_file, temp);
            tea_course_temp_file << temp << endl;
        }
        else
        {
            getline(tea_course_file, temp);
        }
    }
    tea_course_file.close();
    tea_course_temp_file.close();
    //ɾ��ԭ�ļ�
    remove(("./tea_course/" + tea_account + ".txt").c_str());
    //�������ļ�
    rename(("./tea_course/" + tea_account + "_temp.txt").c_str(), ("./tea_course/" + tea_account + ".txt").c_str());
    system("cls");
    cout << "�˿γɹ�" << endl;
    //ɾ��course_teacher_list�ļ����µĿγ�ѧ�������еĹ���
    //���ļ�
    fstream course_teacher_list_file("./course_teacher_list/" + tea_temp_course_id + ".txt", ios::in);
    if (!course_teacher_list_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //�½�һ��temp�ı�������ʱ��������
    fstream course_teacher_list_temp_file("./course_teacher_list/" + tea_temp_course_id + "_temp.txt", ios::out);
    if (!course_teacher_list_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��λ���ÿγ̲���course_teacher_list_temp.txt�г���д������,����д��ù�������
    string temp_tea_account;
    while (course_teacher_list_file >> temp_tea_account)
    {
        if (temp_tea_account != tea_account)
        {
            course_teacher_list_temp_file << temp_tea_account << endl;
        }
    }
    course_teacher_list_file.close();
    course_teacher_list_temp_file.close();
    //ɾ��ԭ�ļ�
    remove(("./course_teacher_list/" + tea_temp_course_id + ".txt").c_str());
    //�������ļ�
    rename(("./course_teacher_list/" + tea_temp_course_id + "_temp.txt").c_str(), ("./course_teacher_list/" + tea_temp_course_id + ".txt").c_str());
}
void tea_course::Show_tea_course()
{
    //���ļ�
    fstream tea_course_file("./tea_course/" + tea_account + ".txt", ios::in);
    if (!tea_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //��ʾ�α�

    tea_course_file.close();
}
void tea_course::Show_next_course()
{
    //��ȡ��ǰʱ��
    time_t now_time = time(NULL);
    //ת��Ϊ����ʱ��
    tm local_time;
    localtime_s(&local_time, &now_time);
    //string���ʹ洢��ǰʱ��
    string week;
    string time;
    if (local_time.tm_hour < 8)
    {
        time = "1��2";
    }
    else if (local_time.tm_hour < 10)
    {
        time = "3��4";
    }
    else if (local_time.tm_hour < 14)
    {
        time = "5��6";
    }
    else if (local_time.tm_hour < 16)
    {
        time = "7��8";
    }
    else if (local_time.tm_hour < 19)
    {
        time = "9��10��11";
    }
    else
    {
        cout << "�����Ѿ�û�п��ˣ�˯���þ���" << endl;
        return;
    }
    switch (local_time.tm_wday)
    {
    case 0:
        week = "������";
        break;
    case 1:
        week = "����һ";
        break;
    case 2:
        week = "���ڶ�";
        break;
    case 3:
        week = "������";
        break;
    case 4:
        week = "������";
        break;
    case 5:
        week = "������";
        break;
    case 6:
        week = "������";
        break;
    }
    //���ú�����ÿγ�����
    string name = Get_course(week, time);
    //�����һ�ڿε�ʱ�������
    cout << "��һ�ڿ�Ϊ:" << name << endl;
    cout << "ʱ��Ϊ:";
    if (time == "1��2")
    {
        cout << "8:00-9:40" << endl;
    }
    else if (time == "3��4")
    {
        cout << "10:00-11:40" << endl;
    }
    else if (time == "5��6")
    {
        cout << "14:00-15:40" << endl;
    }
    else if (time == "7��8")
    {
        cout << "16:00-17:40" << endl;
    }
    else if (time == "9��10��11")
    {
        cout << "19:00-21:35" << endl;
    }
}

//ѧ��������
//ѧ�ţ��˺ţ� ���� ���� �꼶 ѧԺ רҵ �༶
//��������
bool student::Isright()
{
    //���ļ�
    fstream stu_file("student.txt", ios::in);
    if (!stu_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string account;
    string password;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(stu_file, temp);
    //��ȡ�˺����벢�ж�
    while (stu_file >> account >> password)
    {
        getline(stu_file, temp);//�����˺ź������������Ϣ��ȥ��
        if (account == this->account && password == this->password)
        {
            stu_file.close();
            return true;
        }
    }
    stu_file.close();
    return false;
}
void student::Read_stu_information()
{
    //���ļ�
    fstream stu_file("student.txt", ios::in);
    if (!stu_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(stu_file, temp);
    //��λ����ѧ��
    string account;
    while (stu_file >> account)
    {
        if (account == this->account)
        {
            break;
        }
        getline(stu_file, temp);
    }
    //���ı��ж�ȡ��Ϣ��������
    stu_file >> this->password >> this->name >> this->stu_class >> this->stu_grade >> this->stu_college >> this->stu_profession;
    stu_file.close();
}
bool student::Login()
{
    if (this->Isright())
    {
        system("cls");
        cout << "��¼�ɹ�" << endl;
        this->Read_stu_information();
        return true;
    }
    else
    {
        system("cls");
        cout << "�˺Ż������������������" << endl;
        return false;
    }
}
//���ܺ�������
void student::Change_password()
{
    cout << "������������:" << endl;
    string new_password;
    cin >> new_password;
    //���ļ�
    fstream stu_file("student.txt", ios::in | ios::out);
    if (!stu_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(stu_file, temp);
    //�½�һ��stu_temp.txt������ʱ��������
    fstream stu_temp_file("stu_temp.txt", ios::out);
    if (!stu_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡ��һ�е�stu_temp.txt��
    stu_temp_file << temp << endl;
    //��λ����ѧ������stu_temp.txt�г���д������,��д��ѧ��������
    string temp_account;
    while (stu_file >> temp_account)
    {
        if (temp_account != account)
        {
            stu_temp_file << temp_account;
            getline(stu_file, temp);
            stu_temp_file << temp << endl;
        }
        else
        {
            //��д����
            stu_temp_file << temp_account << " " << new_password << " ";
            getline(stu_file, temp, ' ');
            getline(stu_file, temp, ' ');
            getline(stu_file, temp);
            stu_temp_file << temp << endl;
        }
    }
    stu_file.close();
    stu_temp_file.close();
    //ɾ��ԭ�ļ�
    remove("student.txt");
    //�������ļ�
    rename("stu_temp.txt", "student.txt");
    system("cls");
    cout << "�޸ĳɹ�" << endl;
}
void student::Show_stu_information()
{
    cout << "ѧ��:" << this->account << endl;//ѧ�Ų����޸�
    cout << "����:" << this->name << endl;
    cout << "�꼶:" << this->stu_grade << endl;
    cout << "ѧԺ:" << this->stu_college << endl;
    cout << "רҵ:" << this->stu_profession << endl;
    cout << "�༶:" << this->stu_class << endl;
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void student::Course_search()
{
    course::Search_course_information();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void student::Choose_course()
{
    //����һ����ʱ��������ѡ��
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", account, "", "", "");
    stu_course_temp.Choose_course();
}
void student::Drop_course()
{
    //����һ����ʱ���������˿�
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", account, "", "", "");
    stu_course_temp.Drop_course();
}
void student::Show_course()
{
    //����һ����ʱ����������ʾ�α�
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", account, "", "", "");
    stu_course_temp.Show_course();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void student::Show_next_course()
{
    //����һ����ʱ����������ʾ��һ�ڿε�ʱ�������
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", account, "", "", "");
    stu_course_temp.Show_next_course();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
//��ʦ������
//���ţ��˺ţ� ���� ���� ѧԺ
//��������
bool teacher::Isright()
{
    //���ļ�
    fstream tea_file("teacher.txt", ios::in);
    if (!tea_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string account;
    string password;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(tea_file, temp);
    //��ȡ�˺����벢�ж�
    while (tea_file >> account >> password)
    {
        getline(tea_file, temp);//�����˺ź������������Ϣ��ȥ��
        if (account == this->account && password == this->password)
        {
            tea_file.close();
            return true;
        }
    }
    tea_file.close();
    return false;
}
void teacher::Read_tea_information()
{
    //���ļ�
    fstream tea_file("teacher.txt", ios::in);
    if (!tea_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(tea_file, temp);
    //��λ���ý�ʦ
    string account;
    while (tea_file >> account)
    {
        if (account == this->account)
        {
            break;
        }
        getline(tea_file, temp);
    }
    //���ı��ж�ȡ��Ϣ��������
    tea_file >> this->password >> this->name >> this->tea_college;
    tea_file.close();
}
bool teacher::Login()
{
    if (this->Isright())
    {
        system("cls");
        cout << "��¼�ɹ�" << endl;
        this->Read_tea_information();
        return true;
    }
    else
    {
        system("cls");
        cout << "�˺Ż�������������µ�¼" << endl;
        return false;
    }
}
string teacher::Get_stu_name(string stu_account)
{
    //���ļ�
    fstream stu_file("student.txt", ios::in);
    if (!stu_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //��λ����ѧ��
    string account;
    string name;
    while (stu_file >> account >> name)
    {
        if (account == stu_account)
        {
            break;
        }
        getline(stu_file, name);
    }
    stu_file.close();
    return name;
}
//���ܺ�������
void teacher::Change_password()
{
    cout << "������������:" << endl;
    string new_password;
    cin >> new_password;
    //���ļ�
    fstream tea_file("teacher.txt", ios::in | ios::out);
    if (!tea_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(tea_file, temp);
    //�½�һ��tea_temp.txt������ʱ��������
    fstream tea_temp_file("tea_temp.txt", ios::out);
    if (!tea_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡ��һ�е�tea_temp.txt��
    tea_temp_file << temp << endl;
    //��λ���ý�ʦ����tea_temp.txt�г���д������,��д�ý�ʦ������
    string temp_account;
    while (tea_file >> temp_account)
    {
        if (temp_account != account)
        {
            tea_temp_file << temp_account;
            getline(tea_file, temp);
            tea_temp_file << temp << endl;
        }
        else
        {
            //��д����
            tea_temp_file << temp_account << " " << new_password << " ";
            getline(tea_file, temp, ' ');
            getline(tea_file, temp, ' ');
            getline(tea_file, temp);
            tea_temp_file << temp << endl;
        }
    }
    tea_file.close();
    tea_temp_file.close();
    //ɾ��ԭ�ļ�
    remove("teacher.txt");
    //�������ļ�
    rename("tea_temp.txt", "teacher.txt");
    system("cls");
    cout << "�޸ĳɹ�" << endl;
}
void teacher::Show_tea_information()
{
    cout << "����:" << this->account << endl;//���Ų����޸�
    cout << "����:" << this->name << endl;
    cout << "ѧԺ:" << this->tea_college << endl;
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void teacher::Course_search()
{
    course::Search_course_information();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void teacher::Show_course()
{
    //����һ����ʱ����������ʾ�α�
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", account, "", "", "");
    tea_course_temp.Show_tea_course();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void teacher::Show_stu_list()
{
    //��tea_course�ļ����µ��Թ���Ϊ������ѡ������ļ�
    fstream tea_course_file("./tea_course/" + account + ".txt", ios::in);
    if (!tea_course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //��ʾ���ڿογ̺�ѧ������
    string temp_course_id;
    string temp_course_name;
    string temp;
    while (tea_course_file >> temp_course_id >> temp_course_name)
    {
        //ɾ��������Ϣ
        getline(tea_course_file, temp);
        //��course_student_list�ļ����µĿγ�ѧ������
        fstream course_student_list_file("./course_student_list/" + temp_course_id + ".txt", ios::in);
        if (!course_student_list_file)
        {
            cout << "�ļ���ʧ��" << endl;
            exit(1);
        }
        //��ʾ�γ̱�ź�����
        cout << "�γ̱��:" << temp_course_id << "\t";
        cout << "�γ�����:" << temp_course_name << endl;
        //��ʾѧ������
        while (getline(course_student_list_file, temp))
        {
            cout << "ѧ��ѧ��:" << temp << "\t";
            cout << "ѧ������:" << Get_stu_name(temp) << endl;
        }
        course_student_list_file.close();
    }
    tea_course_file.close();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void teacher::Show_next_course()
{
    //����һ����ʱ����������ʾ��һ�ڿε�ʱ�������
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", account, "", "", "");
    tea_course_temp.Show_next_course();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
//����Ա������
//�˺� ���� ����
//��������
bool admin::Isright()
{
    //���ļ�
    fstream admin_file("admin.txt", ios::in);
    if (!admin_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string account;
    string password;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(admin_file, temp);
    //��ȡ�˺����벢�ж�
    while (admin_file >> account >> password)
    {
        getline(admin_file, temp);//�����˺ź������������Ϣ��ȥ��
        if (account == this->account && password == this->password)
        {
            admin_file.close();
            return true;
        }
    }
    admin_file.close();
    return false;
}
void admin::Read_admin_information()
{
    //���ļ�
    fstream admin_file("admin.txt", ios::in);
    if (!admin_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(admin_file, temp);
    //��λ���ù���Ա
    string account;
    while (admin_file >> account)
    {
        if (account == this->account)
        {
            break;
        }
        getline(admin_file, temp);
    }
    //���ı��ж�ȡ��Ϣ��������
    admin_file >> this->password >> this->name;
    admin_file.close();
}
bool admin::Login()
{
    if (this->Isright())
    {
        system("cls");
        cout << "��¼�ɹ�" << endl;
        this->Read_admin_information();
        return true;
    }
    else
    {
        system("cls");
        cout << "�˺Ż��������" << endl;
        return false;
    }
}
void admin::access_private_tea_course(tea_course& tea_course_temp)
{
    tea_course_temp.Add_tea_course();
}
void admin::access_private_tea_course1(tea_course& tea_course_temp)
{
    tea_course_temp.Delete_tea_course();
}
bool admin::Is_stu_exist(string stu_account)
{
    //���ļ�
    fstream stu_file("student.txt", ios::in);
    if (!stu_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string account;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(stu_file, temp);
    //��ȡ�˺Ų��ж�
    while (stu_file >> account)
    {
        getline(stu_file, temp);//�����˺��������Ϣ��ȥ��
        if (account == stu_account)
        {
            stu_file.close();
            return true;
        }
    }
    stu_file.close();
    return false;
}
bool admin::Is_tea_exist(string tea_account)
{
    //���ļ�
    fstream tea_file("teacher.txt", ios::in);
    if (!tea_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string account;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(tea_file, temp);
    //��ȡ�˺Ų��ж�
    while (tea_file >> account)
    {
        getline(tea_file, temp);//�����˺��������Ϣ��ȥ��
        if (account == tea_account)
        {
            tea_file.close();
            return true;
        }
    }
    tea_file.close();
    return false;
}
bool admin::Is_course_exist(string course_id)
{
    //���ļ�
    fstream course_file("course.txt", ios::in);
    if (!course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string temp_course_id;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(course_file, temp);
    //��ȡ�γ̱�Ų��ж�
    while (course_file >> temp_course_id)
    {
        getline(course_file, temp);//���˿γ̱���������Ϣ��ȥ��
        if (temp_course_id == course_id)
        {
            course_file.close();
            return true;
        }
    }
    course_file.close();
    return false;
}
string admin::Get_stu_name(string stu_account)
{
    //���ļ�
    fstream stu_file("student.txt", ios::in);
    if (!stu_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string account;
    string name;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(stu_file, temp);
    //��ȡ�˺Ų��ж�
    while (stu_file >> account >> temp >> name)
    {
        getline(stu_file, temp);//�����˺ź������������Ϣ��ȥ��
        if (account == stu_account)
        {
            stu_file.close();
            return name;
        }
    }
    stu_file.close();
    return "";
}
string admin::Get_tea_name(string tea_account)
{
    //���ļ�
    fstream tea_file("teacher.txt", ios::in);
    if (!tea_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    string account;
    string name;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(tea_file, temp);
    //��ȡ�˺Ų��ж�
    while (tea_file >> account >> temp >> name)
    {
        getline(tea_file, temp);//�����˺ź������������Ϣ��ȥ��
        if (account == tea_account)
        {
            tea_file.close();
            return name;
        }
    }
    tea_file.close();
    return "";
}
//���ܺ�������
void admin::Change_password()
{
    cout << "����������������:" << endl;
    string new_password;
    cin >> new_password;
    //���ļ�
    fstream admin_file("admin.txt", ios::in | ios::out);
    if (!admin_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(admin_file, temp);
    //�½�һ��admin_temp.txt������ʱ��������
    fstream admin_temp_file("admin_temp.txt", ios::out);
    if (!admin_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡ��һ�е�admin_temp.txt��
    admin_temp_file << temp << endl;
    //��λ���ù���Ա����admin_temp.txt�г���д������,��д�ù���Ա������
    string temp_account;
    while (admin_file >> temp_account)
    {
        if (temp_account != account)
        {
            admin_temp_file << temp_account;
            getline(admin_file, temp);
            admin_temp_file << temp << endl;
        }
        else
        {
            //��д����
            admin_temp_file << temp_account << " " << new_password << " ";
            getline(admin_file, temp, ' ');
            getline(admin_file, temp, ' ');
            getline(admin_file, temp);
            admin_temp_file << temp << endl;
        }
    }
    admin_file.close();
    admin_temp_file.close();
    //ɾ��ԭ�ļ�
    remove("admin.txt");
    //�������ļ�
    rename("admin_temp.txt", "admin.txt");
    system("cls");
    cout << "�޸ĳɹ�" << endl;
}
void admin::Show_admin_information()
{
    cout << "�˺�:" << this->account << endl;//�˺Ų����޸�
    cout << "����:" << this->name << endl;
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void admin::Add_stu_information()
{
    cout << "������ѧ����Ϣ:" << endl;
    cout << "(Ĭ������Ϊ123456)" << endl;
    cout << "ѧ��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�ж�ѧ���Ƿ��Ѿ��ظ�
    if (Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "���ʧ�ܣ�ѧ���ظ�" << endl;
        return;
    }
    //������student.txtΪstu_temp.txt
    rename("student.txt", "stu_temp.txt");
    //�½�һ��student.txt���ڱ�������
    fstream stu_file("student.txt", ios::out);
    if (!stu_file)
    {
        cout << "�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡstu_temp.txt�е�����
    fstream stu_temp_file("stu_temp.txt", ios::in);
    if (!stu_temp_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(stu_temp_file, temp);
    //д���һ�е�student.txt��
    stu_file << temp << endl;
    //������ȡstu_temp.txt���������ѧ��С��temp_account_class��ֱ��д��student.txt��
    string temp_account;
    while (stu_temp_file >> temp_account)
    {
        if (temp_account < temp_accountORcourseid_class)
        {
            stu_file << temp_account;
            getline(stu_temp_file, temp);
            stu_file << temp << endl;
        }
        else
        {
            stu_temp_file.seekg(-static_cast<int>(temp_account.length()), ios::cur);
            break;
        }
    }
    //д������ӵ�ѧ����Ϣ
    cout << "����:" << endl;
    string name;
    cin >> name;
    cout << "�꼶:" << endl;
    string stu_grade;
    cin >> stu_grade;
    cout << "ѧԺ:" << endl;
    string stu_college;
    cin >> stu_college;
    cout << "רҵ:" << endl;
    string stu_profession;
    cin >> stu_profession;
    cout << "�༶:" << endl;
    string stu_class;
    cin >> stu_class;
    //д���ļ�
    stu_file << temp_accountORcourseid_class << " 123456 " << name << " " << stu_class << " " << stu_grade << " " << stu_college << " " << stu_profession << endl;
    //�������ʣ���ѧ����Ϣ
    while (stu_temp_file >> temp_account)
    {
        stu_file << temp_account;
        getline(stu_temp_file, temp);
        stu_file << temp << endl;
    }
    stu_file.close();
    stu_temp_file.close();
    //ɾ��stu_temp.txt
    remove("stu_temp.txt");
    system("cls");
    cout << "��ӳɹ�" << endl;
}
void admin::Delete_stu_information()
{
    cout << "������Ҫɾ����ѧ��ѧ��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "ɾ��ʧ�ܣ���ѧ�Ų�����" << endl;
        return;
    }
    //���ļ�
    fstream stu_file("student.txt", ios::in | ios::out);
    if (!stu_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(stu_file, temp);
    //�½�һ��stu_temp.txt������ʱ��������
    fstream stu_temp_file("stu_temp.txt", ios::out);
    if (!stu_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡ��һ�е�stu_temp.txt��
    stu_temp_file << temp << endl;
    //��λ����ѧ������stu_temp.txt�г���д������,����д���ѧ������
    string temp_account;
    while (stu_file >> temp_account)
    {
        if (temp_account != temp_accountORcourseid_class)
        {
            stu_temp_file << temp_account;
            getline(stu_file, temp);
            stu_temp_file << temp << endl;
        }
        else
        {
            getline(stu_file, temp);
        }
    }
    stu_file.close();
    stu_temp_file.close();
    //ɾ��ԭ�ļ�
    remove("student.txt");
    //�������ļ�
    rename("stu_temp.txt", "student.txt");
    system("cls");
    cout << "ɾ���ɹ�" << endl;
}
void admin::Change_stu_password()
{
    cout << "������Ҫ�޸������ѧ��ѧ��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "�޸�ʧ�ܣ���ѧ�Ų�����" << endl;
        return;
    }
    student stu(temp_accountORcourseid_class, "", "", "", "", "", "");
    stu.Change_password();
}
void admin::Add_tea_information()
{
    cout << "�������ʦ��Ϣ:" << endl;
    cout << "(Ĭ������Ϊ123456)" << endl;
    cout << "����:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϹ����Ƿ��Ѿ��ظ�
    if (Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "���ʧ�ܣ������ظ�" << endl;
        return;
    }
    //������teacher.txtΪtea_temp.txt
    rename("teacher.txt", "tea_temp.txt");
    //�½�һ��teacher.txt���ڱ�������
    fstream tea_file("teacher.txt", ios::out);
    if (!tea_file)
    {
        cout << "�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡtea_temp.txt�е�����
    fstream tea_temp_file("tea_temp.txt", ios::in);
    if (!tea_temp_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(tea_temp_file, temp);
    //д���һ�е�teacher.txt��
    tea_file << temp << endl;
    //������ȡtea_temp.txt�������������С��temp_account_class��ֱ��д��teacher.txt��
    string temp_account;
    while (tea_temp_file >> temp_account)
    {
        if (temp_account < temp_accountORcourseid_class)
        {
            tea_file << temp_account;
            getline(tea_temp_file, temp);
            tea_file << temp << endl;
        }
        else
        {
            tea_temp_file.seekg(-static_cast<int>(temp_account.length()), ios::cur);
            break;
        }
    }
    //д������ӵĽ�ʦ��Ϣ
    cout << "����:" << endl;
    string name;
    cin >> name;
    cout << "ѧԺ:" << endl;
    string tea_college;
    cin >> tea_college;
    //д���ļ�
    tea_file << temp_accountORcourseid_class << " 123456 " << name << " " << tea_college << endl;
    //�������ʣ��Ľ�ʦ��Ϣ
    while (tea_temp_file >> temp_account)
    {
        tea_file << temp_account;
        getline(tea_temp_file, temp);
        tea_file << temp << endl;
    }
    tea_file.close();
    tea_temp_file.close();
    //ɾ��tea_temp.txt
    remove("tea_temp.txt");
    system("cls");
    cout << "��ӳɹ�" << endl;
}
void admin::Delete_tea_information()
{
    cout << "������Ҫɾ���Ľ�ʦ����:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "ɾ��ʧ�ܣ��ù��Ų�����" << endl;
        return;
    }
    //���ļ�
    fstream tea_file("teacher.txt", ios::in | ios::out);
    if (!tea_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(tea_file, temp);
    //�½�һ��tea_temp.txt������ʱ��������
    fstream tea_temp_file("tea_temp.txt", ios::out);
    if (!tea_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡ��һ�е�tea_temp.txt��
    tea_temp_file << temp << endl;
    //��λ���ý�ʦ����tea_temp.txt�г���д������,����д��ý�ʦ����
    string temp_account;
    while (tea_file >> temp_account)
    {
        if (temp_account != temp_accountORcourseid_class)
        {
            tea_temp_file << temp_account;
            getline(tea_file, temp);
            tea_temp_file << temp << endl;
        }
        else
        {
            getline(tea_file, temp);
        }
    }
    tea_file.close();
    tea_temp_file.close();
    //ɾ��ԭ�ļ�
    remove("teacher.txt");
    //�������ļ�
    rename("tea_temp.txt", "teacher.txt");
    system("cls");
    cout << "ɾ���ɹ�" << endl;
}
void admin::Change_tea_password()
{
    cout << "������Ҫ�޸�����Ľ�ʦ����:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "�޸�ʧ�ܣ��ù��Ų�����" << endl;
        return;
    }
    teacher tea(temp_accountORcourseid_class, "", "", "");
    tea.Change_password();
}
void admin::Add_course_information()
{
    cout << "������γ���Ϣ:" << endl;
    cout << "�γ̱��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϿγ��Ƿ��Ѿ��ظ�
    if (Is_course_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "���ʧ�ܣ��γ̱���ظ�" << endl;
        return;
    }
    //������course.txtΪcourse_temp.txt
    rename("course.txt", "course_temp.txt");
    //�½�һ��course.txt���ڱ�������
    fstream course_file("course.txt", ios::out);
    if (!course_file)
    {
        cout << "�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡcourse_temp.txt�е�����
    fstream course_temp_file("course_temp.txt", ios::in);
    if (!course_temp_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(course_temp_file, temp);
    //д���һ�е�course.txt��
    course_file << temp << endl;
    //������ȡcourse_temp.txt����������γ̱��С��temp_account_class��ֱ��д��course.txt��
    string temp_course_id;
    while (course_temp_file >> temp_course_id)
    {
        if (temp_course_id < temp_accountORcourseid_class)
        {
            course_file << temp_course_id;
            getline(course_temp_file, temp);
            course_file << temp << endl;
        }
        else
        {
            course_temp_file.seekg(-static_cast<int>(temp_course_id.length()), ios::cur);
            break;
        }
    }
    //д������ӵĿγ���Ϣ
    cout << "�γ�����:" << endl;
    string course_name;
    cin >> course_name;
    cout << "�꼶:" << endl;
    string course_grade;
    cin >> course_grade;
    cout << "ѧԺ:" << endl;
    string course_college;
    cin >> course_college;
    cout << "רҵ:" << endl;
    string course_profession;
    cin >> course_profession;
    cout << "����ѧԺ:" << endl;
    string course_college_open;
    cin >> course_college_open;
    cout << "�γ����:" << endl;
    string course_type;
    cin >> course_type;
    cout << "�γ�����:" << endl;
    string course_nature;
    cin >> course_nature;
    cout << "�γ̹���:" << endl;
    string course_belong;
    cin >> course_belong;
    cout << "�Ͽ�����:" << endl;
    string course_week;
    cin >> course_week;
    cout << "�Ͽνڴ�:" << endl;
    string course_time;
    cin >> course_time;
    //д���ļ�
    course_file << temp_accountORcourseid_class << " " << course_name << " " << course_grade << " " << course_college << " " << course_profession << " " << course_college_open << " " << course_type << " " << course_nature << " " << course_belong << " " << course_week << " " << course_time << endl;
    //�������ʣ��Ŀγ���Ϣ
    while (course_temp_file >> temp_course_id)
    {
        course_file << temp_course_id;
        getline(course_temp_file, temp);
        course_file << temp << endl;
    }
    course_file.close();
    course_temp_file.close();
    //ɾ��course_temp.txt
    remove("course_temp.txt");
    system("cls");
    cout << "��ӳɹ�" << endl;
}
void admin::Delete_course_information()
{
    cout << "������Ҫɾ���Ŀγ̱��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϿγ��Ƿ����
    if (!Is_course_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "ɾ��ʧ�ܣ��ÿγ̱�Ų�����" << endl;
        return;
    }
    //���ļ�
    fstream course_file("course.txt", ios::in | ios::out);
    if (!course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(course_file, temp);
    //�½�һ��course_temp.txt������ʱ��������
    fstream course_temp_file("course_temp.txt", ios::out);
    if (!course_temp_file)
    {
        cout << "��ʱ�ļ�����ʧ��" << endl;
        exit(1);
    }
    //��ȡ��һ�е�course_temp.txt��
    course_temp_file << temp << endl;
    //��λ���ÿγ̲���course_temp.txt�г���д������,����д��ÿγ�����
    string temp_course_id;
    while (course_file >> temp_course_id)
    {
        if (temp_course_id != temp_accountORcourseid_class)
        {
            course_temp_file << temp_course_id;
            getline(course_file, temp);
            course_temp_file << temp << endl;
        }
        else
        {
            getline(course_file, temp);
        }
    }
    course_file.close();
    course_temp_file.close();
    //ɾ��ԭ�ļ�
    remove("course.txt");
    //�������ļ�
    rename("course_temp.txt", "course.txt");
    system("cls");
    cout << "ɾ���ɹ�" << endl;
}
void admin::Search_course_information()
{
    course::Search_course_information();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
void admin::Search_stu_information()
{
    cout << "������Ҫ��ѯ��ѧ��ѧ��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "��ѯʧ�ܣ���ѧ�Ų�����" << endl;
        return;
    }
    //���ļ�
    fstream stu_file("student.txt", ios::in);
    if (!stu_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(stu_file, temp);
    //��λ����ѧ��
    string temp_account;
    while (stu_file >> temp_account)
    {
        if (temp_account == temp_accountORcourseid_class)
        {
            break;
        }
        getline(stu_file, temp);
    }
    //���ı��ж�ȡ��Ϣ��������
    string password;
    string name;
    string stu_class;
    string stu_grade;
    string stu_college;
    string stu_profession;
    stu_file >> password >> name >> stu_class >> stu_grade >> stu_college >> stu_profession;
    stu_file.close();
    system("cls");
    cout << "��ѯ�ɹ�:" << endl;
    //����һ����ʱ����������ʾѧ����Ϣ
    student stu(temp_accountORcourseid_class, password, name, stu_class, stu_grade, stu_college, stu_profession);
    stu.Show_stu_information();
}
void admin::Search_tea_information()
{
    cout << "������Ҫ��ѯ�Ľ�ʦ����:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "��ѯʧ�ܣ��ù��Ų�����" << endl;
        return;
    }
    //���ļ�
    fstream tea_file("teacher.txt", ios::in);
    if (!tea_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(tea_file, temp);
    //��λ���ý�ʦ
    string temp_account;
    while (tea_file >> temp_account)
    {
        if (temp_account == temp_accountORcourseid_class)
        {
            break;
        }
        getline(tea_file, temp);
    }
    //���ı��ж�ȡ��Ϣ��������
    string password;
    string name;
    string tea_college;
    tea_file >> password >> name >> tea_college;
    tea_file.close();
    system("cls");
    cout << "��ѯ�ɹ�:" << endl;
    //����һ����ʱ����������ʾ��ʦ��Ϣ
    teacher tea(temp_accountORcourseid_class, password, name, tea_college);
    tea.Show_tea_information();
}
void admin::Search_stu_course_information()
{
    cout << "������Ҫ��ѯ��ѧ��ѧ��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "��ѯʧ�ܣ���ѧ�Ų�����" << endl;
        return;
    }
    system("cls");
    cout << "��ѯ�ɹ�:" << endl;
    //����һ����ʱ����������ʾ�α�
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    stu_course_temp.Show_course();
}
void admin::Search_tea_course_information()
{
    cout << "������Ҫ��ѯ�Ľ�ʦ����:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "��ѯʧ�ܣ��ù��Ų�����" << endl;
        return;
    }
    system("cls");
    cout << "��ѯ�ɹ�:" << endl;
    //����һ����ʱ����������ʾ�α�
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    tea_course_temp.Show_tea_course();
}
void admin::Add_stu_course()
{
    cout << "������Ҫ��ӿγ̵�ѧ��ѧ��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "���ʧ�ܣ���ѧ�Ų�����" << endl;
        return;
    }
    //����һ����ʱ��������ѡ��
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    stu_course_temp.Choose_course();
}
void admin::Delete_stu_course()
{
    cout << "������Ҫɾ���γ̵�ѧ��ѧ��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "ɾ��ʧ�ܣ���ѧ�Ų�����" << endl;
        return;
    }
    //����һ����ʱ���������˿�
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    stu_course_temp.Drop_course();
}
void admin::Add_tea_course()
{
    cout << "������Ҫ��ӿγ̵Ľ�ʦ����:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "���ʧ�ܣ��ù��Ų�����" << endl;
        return;
    }
    //����һ����ʱ����������ӿγ�
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    access_private_tea_course(tea_course_temp);
}
void admin::Delete_tea_course()
{
    cout << "������Ҫɾ���γ̵Ľ�ʦ����:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "ɾ��ʧ�ܣ��ù��Ų�����" << endl;
        return;
    }
    //����һ����ʱ��������ɾ���γ�
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    access_private_tea_course1(tea_course_temp);
}
void admin::Search_course_tea_stu_information()
{
    cout << "������Ҫ��ѯ�Ŀγ̱��:" << endl;
    cin >> temp_accountORcourseid_class;
    //�жϿγ��Ƿ����
    if (!Is_course_exist(temp_accountORcourseid_class))
    {
        system("cls");
        cout << "��ѯʧ�ܣ��ÿγ̱�Ų�����" << endl;
        return;
    }
    //��course_teacher_list�ļ����µĿγ��ļ�
    fstream course_tea_list_file("./course_teacher_list/" + temp_accountORcourseid_class + ".txt", ios::in);
    //��course_student_list�ļ����µĿγ��ļ�
    fstream course_stu_list_file("./course_student_list/" + temp_accountORcourseid_class + ".txt", ios::in);
    string temp;
    //��ȡ��ʦ����
    cout << "��ʦ����:" << endl;
    while (getline(course_tea_list_file, temp))
    {
        cout << "����:" << temp << "\t";
        cout << "����:" << Get_tea_name(temp) << endl;
    }
    //��ȡѧ������
    cout << "ѧ������:" << endl;
    while (getline(course_stu_list_file, temp))
    {
        cout << "ѧ��:" << temp << "\t";
        cout << "����:" << Get_stu_name(temp) << endl;
    }
    course_tea_list_file.close();
    course_stu_list_file.close();
    cout << endl << endl << endl << "���������������һ�˵�..." << endl;
    system("pause");
}
