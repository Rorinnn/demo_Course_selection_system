#include "course_selection_system.h"
using namespace std;

//ѧ��ҳ��
void stu_menu()
{
    while (true)
    {
        system("cls");
        cout << "�����������˺�:" << endl;
        string account;
        cin >> account;
        cout << "��������������:" << endl;
        string password;
        cin >> password;
        student stu(account, password, "", "", "", "", "");
        if (stu.Login())
        {
            while (true)
            {
                Sleep(1000);
                system("cls");
                cout << "��ѡ�����Ĳ���:" << endl;
                cout << "1.�޸�����" << endl;
                cout << "2.��ʾ������Ϣ" << endl;
                cout << "3.��ѯ�γ���Ϣ" << endl;
                cout << "4.ѡ��" << endl;
                cout << "5.�˿�" << endl;
                cout << "6.��ʾ�α�" << endl;
                cout << "7.��һ�ڿ�" << endl;
                cout << "0.�˳���¼" << endl;
                int choose;
                cin >> choose;
                system("cls");
                switch (choose)
                {
                case 1: {stu.Change_password(); break; }
                case 2: {stu.Show_stu_information(); break; }
                case 3: {stu.Course_search(); break; }
                case 4: {stu.Choose_course(); break; }
                case 5: {stu.Drop_course(); break; }
                case 6: {stu.Show_course(); break; }
                case 7: {stu.Show_next_course(); break; }
                case 0: {return; }
                }
            }
        }
        Sleep(1000);
    }
}

//��ʦҳ��
void tea_menu()
{
    while (true)
    {
        system("cls");
        cout << "�����������˺�:" << endl;
        string account;
        cin >> account;
        cout << "��������������:" << endl;
        string password;
        cin >> password;
        teacher tea(account, password, "", "");
        if (tea.Login())
        {
            while (true)
            {
                Sleep(1000);
                system("cls");
                cout << "��ѡ�����Ĳ���:" << endl;
                cout << "1.�޸�����" << endl;
                cout << "2.��ʾ������Ϣ" << endl;
                cout << "3.��ѯ�γ���Ϣ" << endl;
                cout << "4.��ʾ�α�" << endl;
                cout << "5.��ʾ���̿γ̵�ѧ������" << endl;
                cout << "6.��һ�ڿ�" << endl;
                cout << "0.�˳���¼" << endl;
                int choose;
                cin >> choose;
                system("cls");
                switch (choose)
                {
                case 1: {tea.Change_password(); break; }
                case 2: {tea.Show_tea_information(); break; }
                case 3: {tea.Course_search(); break; }
                case 4: {tea.Show_course(); break; }
                case 5: {tea.Show_stu_list(); break; }
                case 6: {tea.Show_next_course(); break; }
                case 0: {return; break; }
                }
            }
        }
        Sleep(1000);
    }
}

//����Աҳ��
void admin_menu()
{
    while (true)
    {
        system("cls");
        cout << "�����������˺�:" << endl;
        string account;
        cin >> account;
        cout << "��������������:" << endl;
        string password;
        cin >> password;
        admin admin(account, password, "");
        if (admin.Login())
        {
            while (true)
            {
                Sleep(1000);
                system("cls");
                cout << "��ѡ�����Ĳ���:" << endl;
                cout << "1.�޸�����" << endl;
                cout << "2.��ʾ������Ϣ" << endl;
                cout << "3.���ѧ����Ϣ" << endl;
                cout << "4.ɾ��ѧ����Ϣ" << endl;
                cout << "5.�޸�ѧ������" << endl;
                cout << "6.��ӽ�ʦ��Ϣ" << endl;
                cout << "7.ɾ����ʦ��Ϣ" << endl;
                cout << "8.�޸Ľ�ʦ����" << endl;
                cout << "9.��ӿγ���Ϣ" << endl;
                cout << "10.ɾ���γ���Ϣ" << endl;
                cout << "11.��ѯ�γ���Ϣ" << endl;
                cout << "12.��ѯѧ����Ϣ" << endl;
                cout << "13.��ѯ��ʦ��Ϣ" << endl;
                cout << "14.��ѯѧ��ѡ����Ϣ" << endl;
                cout << "15.��ѯ��ʦ�ڿ���Ϣ" << endl;
                cout << "16.���ѧ��ѡ��" << endl;
                cout << "17.ɾ��ѧ��ѡ��" << endl;
                cout << "18.��ӽ�ʦ�ڿ�" << endl;
                cout << "19.ɾ����ʦ�ڿ�" << endl;
                cout << "20.��ѯĳ�γ̵Ľ�ʦ��ѧ������" << endl;
                cout << "0.�˳���¼" << endl;
                int choose;
                cin >> choose;
                system("cls");
                switch (choose)
                {
                case 1: {admin.Change_password(); break; }
                case 2: {admin.Show_admin_information(); break; }
                case 3: {admin.Add_stu_information(); break; }
                case 4: {admin.Delete_stu_information(); break; }
                case 5: {admin.Change_stu_password(); break; }
                case 6: {admin.Add_tea_information(); break; }
                case 7: {admin.Delete_tea_information(); break; }
                case 8: {admin.Change_tea_password(); break; }
                case 9: {admin.Add_course_information(); break; }
                case 10: {admin.Delete_course_information(); break; }
                case 11: {admin.Search_course_information(); break; }
                case 12: {admin.Search_stu_information(); break; }
                case 13: {admin.Search_tea_information(); break; }
                case 14: {admin.Search_stu_course_information(); break; }
                case 15: {admin.Search_tea_course_information(); break; }
                case 16: {admin.Add_stu_course(); break; }
                case 17: {admin.Delete_stu_course(); break; }
                case 18: {admin.Add_tea_course(); break; }
                case 19: {admin.Delete_tea_course(); break; }
                case 20: {admin.Search_course_tea_stu_information(); break; }
                case 0: {return; break; }
                }
            }
        }
        Sleep(1000);
    }
}

//��ҳ��
void menu()
{
    while (true)
    {
        cout << "��ӭ������ѧ��ѡ��ϵͳ" << endl;
        cout << "��ѡ���������:" << endl;
        cout << "1.ѧ��" << endl;
        cout << "2.��ʦ" << endl;
        cout << "3.����Ա" << endl;
        int identity;
        cin >> identity;
        system("cls");
        switch (identity)
        {
        case 1: {stu_menu(); break; }
        case 2: {tea_menu(); break; }
        case 3: {admin_menu(); break; }
        }
    }
}

int main() {
    menu();
    return 0;
}