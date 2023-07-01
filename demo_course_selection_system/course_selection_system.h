#ifndef COURSE_SELECTION_SYSTEM
#define COURSE_SELECTION_SYSTEM
#ifndef STRING
#define STRING
#include <string>
#endif
using namespace std;

//ά��
void maintenance();

//�γ̽ڵ�
class course_node
{
private:
    string course_id;//�γ̱��
    string course_name;//�γ�����
    string course_grade;//�꼶
    string course_college;//ѧԺ
    string course_profession;//רҵ
    string course_college_open;//����ѧԺ
    string course_type;//�γ����
    string course_nature;//�γ�����
    string course_belong;//�γ̹���
    string course_week;//�Ͽ�����
    string course_time;//�Ͽνڴ�
    course_node* next;//ָ����һ���ڵ��ָ��
public:
    //���캯��
    course_node(string course_id, string course_name, string course_grade, string course_college, string course_profession, string course_college_open, string course_type, string course_nature, string course_belong, string course_week, string course_time) :course_id(course_id), course_name(course_name), course_grade(course_grade), course_college(course_college), course_profession(course_profession), course_college_open(course_college_open), course_type(course_type), course_nature(course_nature), course_belong(course_belong), course_week(course_week), course_time(course_time), next(NULL) {};
    //��������
    ~course_node() {};
    //��ȡ�γ̱��
    string Get_course_id(){ return course_id;}
    //��ȡ�γ�����
    string Get_course_name(){ return course_name;}
    //��ȡ�꼶
    string Get_course_grade(){ return course_grade;}
    //��ȡѧԺ
    string Get_course_college(){ return course_college;}
    //��ȡרҵ
    string Get_course_profession(){ return course_profession;}
    //��ȡ����ѧԺ
    string Get_course_college_open(){ return course_college_open;}
    //��ȡ�γ����
    string Get_course_type(){ return course_type;}
    //��ȡ�γ�����
    string Get_course_nature(){ return course_nature;}
    //��ȡ�γ̹���
    string Get_course_belong(){ return course_belong;}
    //��ȡ�Ͽ�����
    string Get_course_week(){ return course_week;}
    //��ȡ�Ͽνڴ�
    string Get_course_time(){ return course_time;}
    //��ȡ��һ���ڵ��ָ��
    course_node* Get_next(){ return next;}
    //���ÿγ̱��
    void Set_course_id(string course_id){ this->course_id = course_id;}
    //���ÿγ�����
    void Set_course_name(string course_name){ this->course_name = course_name;}
    //�����꼶
    void Set_course_grade(string course_grade){ this->course_grade = course_grade;}
    //����ѧԺ
    void Set_course_college(string course_college){ this->course_college = course_college;}
    //����רҵ
    void Set_course_profession(string course_profession){ this->course_profession = course_profession;}
    //���ÿ���ѧԺ
    void Set_course_college_open(string course_college_open){ this->course_college_open = course_college_open;}
    //���ÿγ����
    void Set_course_type(string course_type){ this->course_type = course_type;}
    //���ÿγ�����
    void Set_course_nature(string course_nature){ this->course_nature = course_nature;}
    //���ÿγ̹���
    void Set_course_belong(string course_belong){ this->course_belong = course_belong;}
    //�����Ͽ�����
    void Set_course_week(string course_week){ this->course_week = course_week;}
    //�����Ͽνڴ�
    void Set_course_time(string course_time){ this->course_time = course_time;}
    //������һ���ڵ��ָ��
    void Set_next(course_node* next){ this->next = next;}
};
//�γ�����
class course_list
{
private:
    course_node* head;//ͷ�ڵ�
public:
    //���캯��
    course_list() :head(NULL) {};
    //��������
    ~course_list()
    {
        course_node* temp = head;
        while (temp != NULL)
        {
            head = temp->Get_next();
            delete temp;
            temp = head;
        }
    }
    //��course.txt�ļ��ж�ȡ�γ���Ϣ
    void Read_course_information();
    //���ݹؼ��ʴ�course.txt�ļ��ж�ȡ�γ���Ϣ
    void Read_course_information_by_keyword(string keyword);
    //��stu_course.txt�ļ��ж�ȡѧ��ѡ����Ϣ
    void Read_stu_course_information(string account);
    //��tea_course.txt�ļ��ж�ȡ��ʦ�ڿ���Ϣ
    void Read_tea_course_information(string account);
    //���ݿγ̱�Ŵ�С�����½ڵ�
    void Insert_course_node(string course_id, string course_name, string course_grade, string course_college, string course_profession, string course_college_open, string course_type, string course_nature, string course_belong, string course_week, string course_time);
    //�����½ڵ�
    void Insert_course_node(course_node* node);
    //���ݿγ̱��ɾ���ڵ�
    void Delete_course_node(string course_id);
    //���ݿγ̱�Ų��ҽڵ�
    course_node* Search_course_node(string course_id);
    //���ݹؼ��ֲ��ҽڵ�
    course_node* Search_course_node_by_keyword(string keyword);
    //�������нڵ㣬����γ���Ϣ��course.txt�ļ�
    void Write_course_information();
    //�������нڵ㣬���ѧ��ѡ����Ϣ��stu_course�ļ����µ�txt�ļ�
    void Write_stu_course_information(string account);
    //�������нڵ㣬�����ʦ�ڿ���Ϣ��tea_course�ļ����µ�txt�ļ�
    void Write_tea_course_information(string account);
    //��Ԫ��
    friend class student;
    friend class teacher;
    friend class admin;
};

//�γ���Ϣ��
//��� ���� �꼶 ѧԺ רҵ ����ѧԺ �γ���� �γ����� �γ̹��� �Ͽ����� �Ͽνڴ�
class course
{
protected:
    //������Ϣ
    string course_id;//�γ̱��
    string course_name;//�γ�����
    //ɸѡ��Ϣ
    string course_grade;//�꼶
    string course_college;//ѧԺ
    string course_profession;//רҵ
    string course_college_open;//����ѧԺ
    string course_type;//�γ����
    string course_nature;//�γ�����
    string course_belong;//�γ̹���
    //�γ�ʱ��
    string course_week;//�Ͽ�����
    string course_time;//�Ͽνڴ�
public:
    //���캯��
    course(string course_id, string course_name, string course_grade, string course_college, string course_profession, string course_college_open, string course_type, string course_nature, string course_belong, string course_week, string course_time) :course_id(course_id), course_name(course_name), course_grade(course_grade), course_college(course_college), course_profession(course_profession), course_college_open(course_college_open), course_type(course_type), course_nature(course_nature), course_belong(course_belong), course_week(course_week), course_time(course_time) {};
    //��������:
    //��ѯ�γ���Ϣ
    static void Search_course_information();
    //��ѯ�γ��Ƿ����
    static bool Iscourse_exist(string temp_course_id);
    //ѡѧԺ�˵�
    static string course_college_menu();
    //ѧԺ1-רҵ�˵�
    static string course1_profession_menu();
    //ѧԺ2-רҵ�˵�
    static string course2_profession_menu();
    //ѧԺ3-רҵ�˵�
    static string course3_profession_menu();
    //ѧԺ4-רҵ�˵�
    static string course4_profession_menu();
    //ѧԺ5-רҵ�˵�
    static string course5_profession_menu();
    //ѧԺ6-רҵ�˵�
    static string course6_profession_menu();
    //ѧԺ7-רҵ�˵�
    static string course7_profession_menu();
    //ѧԺ8-רҵ�˵�
    static string course8_profession_menu();
    //ѧԺ9-רҵ�˵�
    static string course9_profession_menu();
    //ѧԺ10-רҵ�˵�
    static string course10_profession_menu();
    //ѧԺ11-רҵ�˵�
    static string course11_profession_menu();
    //ѧԺ12-רҵ�˵�
    static string course12_profession_menu();
    //ѧԺ13-רҵ�˵�
    static string course13_profession_menu();
    //ѧԺ14-רҵ�˵�
    static string course14_profession_menu();
    //ѧԺ15-רҵ�˵�
    static string course15_profession_menu();
    //ѧԺ16-רҵ�˵�
    static string course16_profession_menu();
    //ѧԺ17-רҵ�˵�
    static string course17_profession_menu();
    //ѧԺ18-רҵ�˵�
    static string course18_profession_menu();
    //ѧԺ19-רҵ�˵�
    static string course19_profession_menu();
    //ѧԺ20-רҵ�˵�
    static string course20_profession_menu();
    //ѧԺ21-רҵ�˵�
    static string course21_profession_menu();
    //ѧԺ22-רҵ�˵�
    static string course22_profession_menu();
    //ѧԺ23-רҵ�˵�
    static string course23_profession_menu();
    //ѧԺ24-רҵ�˵�
    static string course24_profession_menu();
    //ѧԺ25-רҵ�˵�
    static string course25_profession_menu();
    //�γ����˵�
    static string course_type_menu();
    //�γ����ʲ˵�
    static string course_nature_menu();
    //�γ̹����˵�
    static string course_belong_menu();
    //�γ�ʱ��˵�
    static string course_week_menu();
    //����ѡ��һ����week�˵�
    static string course_week2_menu();
    //�γ̽ڴβ˵�
    static string course_time_menu();
    //����ѡ��һ����time�˵�
    static string course_time2_menu();
};

//ѧ��ѡ����Ϣ������
class stu_course :public course
{
private:
    string stu_account;//ѧ��ѧ��
    string stu_temp_course_id;//������ѡ����Ϣ�Ŀγ̱��
    string stu_temp_course_week;//������ѡ����Ϣ�Ŀγ�����
    string stu_temp_course_time;//������ѡ����Ϣ�Ŀγ̽ڴ�
public:
    //���캯��
    stu_course(string course_id, string course_name, string course_grade, string course_college, string course_profession, string course_college_open, string course_type, string course_nature, string course_belong, string course_week, string course_time, string stu_account, string stu_temp_course_id, string stu_temp_course_week, string stu_temp_course_time) :course(course_id, course_name, course_grade, course_college, course_profession, course_college_open, course_type, course_nature, course_belong, course_week, course_time), stu_account(stu_account), stu_temp_course_id(stu_temp_course_id), stu_temp_course_week(stu_temp_course_week), stu_temp_course_time(stu_temp_course_time) {};
    //���ݴ������γ̱�Ż�ÿγ����ںͽڴ�
    void Get_course_week_time();
    //ѡ���Ƿ��ͻ
    bool Isconflict();
    //�˿��Ƿ�Ϊ���ڵĿγ�
    bool Iscourse(string course_id);
    //����α�
    string Get_course(string course_week, string course_time);
    //����1:ѡ��
    void Choose_course();
    //����2:�˿�
    void Drop_course();
    //����3:��ʾ��ѡ�γ�(�α���ʽ)
    void Show_course();
    // //����:��ʾ��һ�ڿε�ʱ�������
    // void Show_next_course();
};

//��ʦ�ڿ���Ϣ������
class tea_course :public course
{
private:
    string tea_account;//��ʦ����
    string tea_temp_course_id;//�������ڿ���Ϣ�Ŀγ̱��
    string tea_temp_course_week;//�������ڿ���Ϣ�Ŀγ�����
    string tea_temp_course_time;//�������ڿ���Ϣ�Ŀγ̽ڴ�
public:
    //���캯��
    tea_course(string course_id, string course_name, string course_grade, string course_college, string course_profession, string course_college_open, string course_type, string course_nature, string course_belong, string course_week, string course_time, string tea_account, string tea_temp_course_id, string tea_temp_course_week, string tea_temp_course_time) :course(course_id, course_name, course_grade, course_college, course_profession, course_college_open, course_type, course_nature, course_belong, course_week, course_time), tea_account(tea_account), tea_temp_course_id(tea_temp_course_id), tea_temp_course_week(tea_temp_course_week), tea_temp_course_time(tea_temp_course_time) {};
    //���ݴ������γ̱�Ż�ÿγ����ںͽڴ�
    void Get_course_week_time();
    //�ڿ��Ƿ��ͻ
    bool Isconflict();
    //�˿��Ƿ�Ϊ���ڵĿγ�
    bool Iscourse(string course_id);
    //����α�
    string Get_course(string course_week, string course_time);
    //����1������ڿ���Ϣ
    void Add_tea_course();
    //����2��ɾ���ڿ���Ϣ
    void Delete_tea_course();
    //����3����ʾ�ڿοα�
    void Show_tea_course();
    // //���ܣ���ʾ��һ�ڿε�ʱ�������
    // void Show_next_course();
};

//�˺�������
class account_password
{
protected:
    string account;//�˺�
    string password;//����
    string name;//����
public:
    //���캯��
    account_password(string account, string password, string name) :account(account), password(password), name(name) {};
};
//ѧ��������
//ѧ�ţ��˺ţ� ���� ���� �꼶 ѧԺ רҵ �༶
class student :public account_password
{
private:
    string stu_class;//ѧ���༶
    string stu_grade;//ѧ���꼶
    string stu_college;//ѧ��ѧԺ
    string stu_profession;//ѧ��רҵ
    bool stu_isoneclick=0;//�Ƿ�һ��ѡ��
public:
    //���캯��
    student(string account, string password, string name, string stu_class, string stu_grade, string stu_college, string stu_profession) :account_password(account, password, name), stu_class(stu_class), stu_grade(stu_grade), stu_college(stu_college), stu_profession(stu_profession) {};
    //�ж��˺������Ƿ���ȷ
    bool Isright();
    //���ļ��ж�ȡѧ����Ϣ
    void Read_stu_information();
    //��¼�ɹ�����ȡѧ����Ϣ���ߵ�¼ʧ��
    bool Login();
    //����1:�޸�����
    void Change_password();
    //����2:��ʾѧ����Ϣ
    void Show_stu_information();
    //����3:�γ���Ϣ��ѯ
    void Course_search();
    //����4:ѡ��
    void Choose_course();
    //����5:�˿�
    void Drop_course();
    //����6:��ʾ�α�
    void Show_course();
    //����7:����רҵ���꼶һ��ѡ��
    void one_click_choose_course();
    //����8:ѡ�Σ��°棩
    void Choose_course_new();
    //����9:�˿Σ��°棩
    void Drop_course_new();
    // //����:��һ�ڿε�ʱ�������
    // void Show_next_course();
};

//��ʦ������
//���ţ��˺ţ� ���� ���� ѧԺ
class teacher :public account_password
{
private:
    string tea_college;//ѧԺ
public:
    //���캯��
    teacher(string account, string password, string name, string tea_college) :account_password(account, password, name), tea_college(tea_college) {};
    //�ж��˺������Ƿ���ȷ
    bool Isright();
    //���ļ��ж�ȡ��ʦ��Ϣ
    void Read_tea_information();
    //��¼�ɹ�����ȡ��ʦ��Ϣ���ߵ�¼ʧ��
    bool Login();
    //����ѧ�Ż�ȡѧ������
    string Get_stu_name(string stu_account);
    //����1:�޸�����
    void Change_password();
    //����2:��ʾ��ʦ��Ϣ
    void Show_tea_information();
    //����3:�γ���Ϣ��ѯ
    void Course_search();
    //����4:����ڿ���Ϣ
    void Choose_course();
    //����5:ɾ���ڿ���Ϣ
    void Drop_course();
    //����6:��ʾ�α�
    void Show_course();
    //����7:���̿γ̵�ѧ������
    void Show_stu_list();
    // //����:��һ�ڿε�ʱ�������
    // void Show_next_course();
};

//����Ա������
//�˺� ���� ����
class admin :public account_password
{
private:
    string temp_accountORcourseid_class;//������ѧ�����ʦ���˺Ż�γ̱��
public:
    //���캯��
    admin(string account, string password, string name) :account_password(account, password, name) {};
    //�ж��˺������Ƿ���ȷ
    bool Isright();
    //���ļ��ж�ȡ����Ա��Ϣ
    void Read_admin_information();
    //��¼�ɹ�����ȡ����Ա��Ϣ���ߵ�¼ʧ��
    bool Login();
    //��student.txt�ļ����ж��Ƿ���ڸ�ѧ��
    bool Is_stu_exist(string stu_account);
    //��teacher.txt�ļ����ж��Ƿ���ڸý�ʦ
    bool Is_tea_exist(string tea_account);
    //��course.txt�ļ����ж��Ƿ���ڸÿγ�
    bool Is_course_exist(string course_id);
    //����ѧ�ŷ���ѧ������
    string Get_stu_name(string stu_account);
    //���ݹ��ŷ��ؽ�ʦ����
    string Get_tea_name(string tea_account);
    //����1:�޸�����
    void Change_password();
    //����2:��ʾ����Ա��Ϣ
    void Show_admin_information();
    //����3:���ѧ����Ϣ(����ѧ�Ŵ�С����)
    void Add_stu_information();
    //����4:ɾ��ѧ����Ϣ
    void Delete_stu_information();
    //����5:�޸�ѧ������
    void Change_stu_password();
    //����6:��ӽ�ʦ��Ϣ
    void Add_tea_information();
    //����7:ɾ����ʦ��Ϣ
    void Delete_tea_information();
    //����8:�޸Ľ�ʦ����
    void Change_tea_password();
    //����9:��ӿγ���Ϣ
    void Add_course_information();
    //����10:ɾ���γ���Ϣ
    void Delete_course_information();
    //����11:��ѯ�γ���Ϣ
    void Search_course_information();
    //����12:��ѯѧ����Ϣ
    void Search_stu_information();
    //����13:��ѯ��ʦ��Ϣ
    void Search_tea_information();
    //����14:��ѯѧ��ѡ����Ϣ
    void Search_stu_course_information();
    //����15:��ѯ��ʦ�ڿ���Ϣ
    void Search_tea_course_information();
    //����16:���ѧ��ѡ��
    void Add_stu_course();
    //����17:ɾ��ѧ��ѡ��
    void Delete_stu_course();
    //����18:��ӽ�ʦ�ڿ�
    void Add_tea_course();
    //����19:ɾ����ʦ�ڿ�
    void Delete_tea_course();
    //����20:��ѯĳ�γ̵Ľ�ʦ��ѧ������
    void Search_course_tea_stu_information();
};

#endif
