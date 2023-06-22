#include <windows.h>
#include <tchar.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "course_selection_system.h"
#include "console_list.h"
using namespace std;

//�γ���Ϣ��
//��� ���� �꼶 ѧԺ רҵ ����ѧԺ �γ���� �γ����� �γ̹��� �Ͽ����� �Ͽνڴ�
//���ܺ�������
void course::Search_course_information()
{
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:"; 
    string course_id;
    Col(7); cin >> course_id;
    Col(3); cout << "����:";
    string course_name;
    Col(7); cin >> course_name;
    Col(3); cout << "�꼶:";
    string course_grade;
    Col(7); cin >> course_grade;
    Col(3); cout << "ѧԺ:(��ѡ��)"; Col(0);
    cout << endl << endl << endl;
    system("pause");
    string course_college;
    course_college = course_college_menu();
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:" << course_id << endl;
    cout << "����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl; Col(0);
    string course_profession;
    if (course_college != "0")
    {
        Col(3); cout << "רҵ:(��ѡ��)"; Col(0);
        cout << endl << endl << endl;
        system("pause");
        if (course_college == "ҩѧԺ") {
            course_profession = course1_profession_menu();
        }
        else if (course_college == "ҽѧԺ") {
            course_profession = course2_profession_menu();
        }
        else if (course_college == "��ѧԺ") {
            course_profession = course3_profession_menu();
        }
        else if (course_college == "��ѧԺ") {
            course_profession = course4_profession_menu();
        }
        else if (course_college == "�ƾ�ѧԺ") {
            course_profession = course5_profession_menu();
        }
        else if (course_college == "����ѧԺ") {
            course_profession = course6_profession_menu();
        }
        else if (course_college == "����ѧԺ") {
            course_profession = course7_profession_menu();
        }
        else if (course_college == "�����ѧԺ") {
            course_profession = course8_profession_menu();
        }
        else if (course_college == "֪ʶ��ȨѧԺ") {
            course_profession = course9_profession_menu();
        }
        else if (course_college == "��ѧ����ѧԺ") {
            course_profession = course10_profession_menu();
        }
        else if (course_college == "��е����ѧԺ") {
            course_profession = course11_profession_menu();
        }
        else if (course_college == "ũҵ����ѧԺ") {
            course_profession = course12_profession_menu();
        }
        else if (course_college == "��ʦ����ѧԺ") {
            course_profession = course13_profession_menu();
        }
        else if (course_college == "������ѧѧԺ") {
            course_profession = course14_profession_menu();
        }
        else if (course_college == "��ѧ��ѧѧԺ") {
            course_profession = course15_profession_menu();
        }
        else if (course_college == "���˼����ѧԺ") {
            course_profession = course16_profession_menu();
        }
        else if (course_college == "������Ϣ����ѧԺ") {
            course_profession = course17_profession_menu();
        }
        else if (course_college == "��Դ�붯������ѧԺ") {
            course_profession = course18_profession_menu();
        }
        else if (course_college == "�����뽻ͨ����ѧԺ") {
            course_profession = course19_profession_menu();
        }
        else if (course_college == "ʳƷ�����﹤��ѧԺ") {
            course_profession = course20_profession_menu();
        }
        else if (course_college == "��ľ��������ѧѧԺ") {
            course_profession = course21_profession_menu();
        }
        else if (course_college == "��������ӹ���ѧԺ") {
            course_profession = course22_profession_menu();
        }
        else if (course_college == "���Ͽ�ѧ�빤��ѧԺ") {
            course_profession = course23_profession_menu();
        }
        else if (course_college == "�����밲ȫ����ѧԺ") {
            course_profession = course24_profession_menu();
        }
        else if (course_college == "�������ѧ��ͨ�Ź���ѧԺ") {
            course_profession = course25_profession_menu();
        }
    }
    else {
        course_profession = "0";
    }
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:" << course_id << endl;
    cout << "����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl; Col(0);
    Col(3); cout << "����ѧԺ:(��ѡ��)"; Col(0);
    cout << endl << endl << endl;
    system("pause");
    string course_college_open;
    course_college_open = course_college_menu();
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:" << course_id << endl;
    cout << "����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl; Col(0);
    Col(3); cout << "�γ����:(��ѡ��)"; Col(0);
    cout << endl << endl << endl;
    system("pause");
    string course_type;
    course_type = course_type_menu();
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:" << course_id << endl;
    cout << "����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl; Col(0);
    Col(3); cout << "�γ�����:(��ѡ��)"; Col(0);
    cout << endl << endl << endl;
    system("pause");
    string course_nature;
    course_nature = course_nature_menu();
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:" << course_id << endl;
    cout << "����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl;
    cout << "�γ�����:" << course_nature << endl; Col(0);
    Col(3); cout << "�γ̹���:(��ѡ��)"; Col(0);
    cout << endl << endl << endl;
    system("pause");
    string course_belong;
    course_belong = course_belong_menu();
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:" << course_id << endl;
    cout << "����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl;
    cout << "�γ�����:" << course_nature << endl;
    cout << "�γ̹���:" << course_belong << endl; Col(0);
    Col(3); cout << "�γ�����:(��ѡ��)"; Col(0);
    cout << endl << endl << endl;
    system("pause");
    string course_week;
    course_week = course_week_menu();
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:" << course_id << endl;
    cout << "����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl;
    cout << "�γ�����:" << course_nature << endl;
    cout << "�γ̹���:" << course_belong << endl;
    cout << "�γ�����:" << course_week << endl; Col(0);
    Col(3); cout << "�γ̽ڴ�:(��ѡ��)"; Col(0);
    cout << endl << endl << endl;
    system("pause");
    string course_time;
    course_time = course_time_menu();
    system("cls");
    Col(3); cout << "����������ɸѡ����:" << endl << "(������ɸѡ������������0��ѡ��)" << endl;
    cout << "���:" << course_id << endl;
    cout << "����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl;
    cout << "�γ�����:" << course_nature << endl;
    cout << "�γ̹���:" << course_belong << endl;
    cout << "�γ�����:" << course_week << endl;
    cout << "�γ̽ڴ�:" << course_time << endl; Col(0);
    Col(2); cout << endl << endl << endl << "��ѯ��..." << endl; Col(0);
    Sleep(1000);
    course temp_course(course_id, course_name, course_grade, course_college, course_profession, course_college_open, course_type, course_nature, course_belong, course_week, course_time);
    //���ļ�
    fstream course_file("course.txt", ios::in);
    if (!course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    system("cls");
    Col(2); cout << "���¿γ̷���ɸѡ����:" << endl; Col(0);
    Col(3); cout << left << setw(4) << "���";
    Col(6); cout << left << setw(34) << "����";
    Col(3); cout << left << setw(4) << "�꼶";
    Col(6); cout << left << setw(24) << "ѧԺ";
    Col(3); cout << left << setw(28) << "רҵ";
    Col(6); cout << left << setw(24) << "����ѧԺ";
    Col(3); cout << left << setw(12) << "�γ����";
    Col(6); cout << left << setw(8) << "�γ�����";
    Col(3); cout << left << setw(12) << "�γ̹���";
    Col(6); cout << left << setw(6) << "����";
    Col(3); cout << left << setw(9) << "�γ̽ڴ�" << endl;
    //����ȡ��һ����Ϊ��Ϣ
    string temp;
    getline(course_file, temp);
    //��ȡ�ļ���ɸѡ
    course_file >> course_id >> course_name >> course_grade >> course_college >> course_profession >> course_college_open >> course_type >> course_nature >> course_belong >> course_week >> course_time;
    while (!course_file.eof())
    {
        if ((course_id == temp_course.course_id || temp_course.course_id == "0") && (course_name == temp_course.course_name || temp_course.course_name == "0") && (course_grade == temp_course.course_grade || temp_course.course_grade == "0") && (course_college == temp_course.course_college || temp_course.course_college == "0") && (course_profession == temp_course.course_profession || temp_course.course_profession == "0") && (course_college_open == temp_course.course_college_open || temp_course.course_college_open == "0") && (course_type == temp_course.course_type || temp_course.course_type == "0") && (course_nature == temp_course.course_nature || temp_course.course_nature == "0") && (course_belong == temp_course.course_belong || temp_course.course_belong == "0") && (course_week == temp_course.course_week || temp_course.course_week == "0") && (course_time == temp_course.course_time || temp_course.course_time == "0"))
        {
            Col(3); cout << left << setw(4) << course_id;
            Col(6); cout << left << setw(34) << course_name;
            Col(3); cout << left << setw(4) << course_grade;
            Col(6); cout << left << setw(24) << course_college;
            Col(3); cout << left << setw(28) << course_profession;
            Col(6); cout << left << setw(24) << course_college_open;
            Col(3); cout << left << setw(12) << course_type;
            Col(6); cout << left << setw(8) << course_nature;
            Col(3); cout << left << setw(12) << course_belong;
            Col(6); cout << left << setw(6) << course_week;
            Col(3); cout << left << setw(9) << course_time << endl;
            Col(0);
        }
        course_file >> course_id >> course_name >> course_grade >> course_college >> course_profession >> course_college_open >> course_type >> course_nature >> course_belong >> course_week >> course_time;
    }
    course_file.close();
}
bool course::Iscourse_exist(string temp_course_id)
{
    //���ļ�
    fstream course_file("course.txt", ios::in);
    if (!course_file)
    {
        cout << "�ļ���ʧ��" << endl;
        exit(1);
    }
    //����һ��γ���Ϣ���������ͬ�Ŀγ̱���򷵻�true
    string course_id;
    string temp;
    while (course_file >> course_id)
    {
        if (course_id == temp_course_id)
        {
            course_file.close();
            return true;
            break;
        }
        getline(course_file, temp);
    }
    course_file.close();
    return false;
}
string course::course_college_menu()
{
    List course_college_menu_list(26);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "                                                     ѧԺ�б�                                                      " << endl; cout << "  ";
        if (course_college_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(13) << "1.��ѡ��"; Col(3); cout <<setw(100)<< "  "; 
        cout << endl; cout << "  ";
        if (course_college_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(13) << "2.ҩѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(16) << "7.����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 12) Col(7);
        else Col(6);
        cout << left << setw(16) << "12.��е����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 17) Col(7);
        else Col(6);
        cout << left << setw(22) << "17.���˼����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 22) Col(7);
        else Col(6);
        cout << left << setw(28) << "22.��ľ��������ѧѧԺ"; Col(3); cout << "  ";
        cout << endl; Col(3); cout << "  ";
        if (course_college_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(13) << "3.ҽѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 8) Col(7);
        else Col(6);
        cout << left << setw(16) << "8.����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 13) Col(7);
        else Col(6);
        cout << left << setw(16) << "13.ũҵ����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 18) Col(7);
        else Col(6);
        cout << left << setw(22) << "18.������Ϣ����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 23) Col(7);
        else Col(6);
        cout << left << setw(28) << "23.��������ӹ���ѧԺ"; Col(3); cout << "  ";
        cout << endl; Col(3); cout << "  ";
        if (course_college_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(13) << "4.��ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 9) Col(7);
        else Col(6);
        cout << left << setw(16) << "9.�����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 14) Col(7);
        else Col(6);
        cout << left << setw(16) << "14.��ʦ����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 19) Col(7);
        else Col(6);
        cout << left << setw(22) << "19.��Դ�붯������ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 24) Col(7);
        else Col(6);
        cout << left << setw(28) << "24.���Ͽ�ѧ�빤��ѧԺ"; Col(3); cout << "  ";
        cout << endl; Col(3); cout << "  ";
        if (course_college_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(13) << "5.��ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 10) Col(7);
        else Col(6);
        cout << left << setw(16) << "10.֪ʶ��ȨѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 15) Col(7);
        else Col(6);
        cout << left << setw(16) << "15.������ѧѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 20) Col(7);
        else Col(6);
        cout << left << setw(22) << "20.�����뽻ͨ����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 25) Col(7);
        else Col(6);
        cout << left << setw(28) << "25.�����밲ȫ����ѧԺ"; Col(3); cout << "  ";
        cout << endl; Col(3); cout << "  ";
        if (course_college_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(13) << "6.�ƾ�ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 11) Col(7);
        else Col(6);
        cout << left << setw(16) << "11.��ѧ����ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 16) Col(7);
        else Col(6);
        cout << left << setw(16) << "16.��ѧ��ѧѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 21) Col(7);
        else Col(6);
        cout << left << setw(22) << "21.ʳƷ�����﹤��ѧԺ"; Col(3); cout << "    ";
        if (course_college_menu_list.GetListSelection() == 26) Col(7);
        else Col(6);
        cout << left << setw(28) << "26.�������ѧ��ͨ�Ź���ѧԺ"; Col(3); cout << "  ";
        cout << endl; Col(3); cout << "  ";
        cout << setw(113) <<" " << endl; Col(0);
        course_college_menu_list.Deal_input();
        if (course_college_menu_list.GetBreakword())
        {
            course_college_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course_college_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "ҩѧԺ"; break; }
    case 3: {return "ҽѧԺ"; break; }
    case 4: {return "��ѧԺ"; break; }
    case 5: {return "��ѧԺ"; break; }
    case 6: {return "�ƾ�ѧԺ"; break; }
    case 7: {return "����ѧԺ"; break; }
    case 8: {return "����ѧԺ"; break; }
    case 9: {return "�����ѧԺ"; break; }
    case 10: {return "֪ʶ��ȨѧԺ"; break; }
    case 11: {return "��ѧ����ѧԺ"; break; }
    case 12: {return "��е����ѧԺ"; break; }
    case 13: {return "ũҵ����ѧԺ"; break; }
    case 14: {return "��ʦ����ѧԺ"; break; }
    case 15: {return "������ѧѧԺ"; break; }
    case 16: {return "��ѧ��ѧѧԺ"; break; }
    case 17: {return "���˼����ѧԺ"; break; }
    case 18: {return "������Ϣ����ѧԺ"; break; }
    case 19: {return "��Դ�붯������ѧԺ"; break; }
    case 20: {return "�����뽻ͨ����ѧԺ"; break; }
    case 21: {return "ʳƷ�����﹤��ѧԺ"; break; }
    case 22: {return "��ľ��������ѧѧԺ"; break; }
    case 23: {return "��������ӹ���ѧԺ"; break; }
    case 24: {return "���Ͽ�ѧ�빤��ѧԺ"; break; }
    case 25: {return "�����밲ȫ����ѧԺ"; break; }
    case 26: {return "�������ѧ��ͨ�Ź���ѧԺ"; break; }
    }
}
string course::course1_profession_menu()
{
    List course1_profession_menu_list(5);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "         ҩѧԺ          " << endl;Col(3); cout << "   ";
        if (course1_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  ";cout << endl; cout << "   ";
        if (course1_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.ҩ���Ƽ�"; Col(3); cout << "  ";cout << endl;cout << "   ";
        if (course1_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.��ҩ����"; Col(3); cout << "  ";cout << endl;cout << "   ";
        if (course1_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.ҩѧ��"; Col(3); cout << "  ";cout << endl;cout << "   ";
        if (course1_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.ҩѧ"; Col(3); cout << "  ";cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course1_profession_menu_list.Deal_input();
        if (course1_profession_menu_list.GetBreakword())
        {
            course1_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course1_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "ҩѧ�Ƽ�"; break; }
    case 3: {return "��ҩ����"; break; }
    case 4: {return "ҩѧ��"; break; }
    case 5: {return "ҩѧ"; break; }
    }
}
string course::course2_profession_menu()
{
    List course2_profession_menu_list(7);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "         ҽѧԺ          " << endl; Col(3); cout << "   ";
        if (course2_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course2_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.�������������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course2_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.ҽѧ���鼼��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course2_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.ҽѧӰ��ѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course2_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.�ٴ�ҽѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course2_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(20) << "6.Ԥ��ҽѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course2_profession_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(20) << "7.����ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course2_profession_menu_list.Deal_input();
        if (course2_profession_menu_list.GetBreakword())
        {
            course2_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course2_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "�������������"; break; }
    case 3: {return "ҽѧ���鼼��"; break; }
    case 4: {return "ҽѧӰ��ѧ"; break; }
    case 5: {return "�ٴ�ҽѧ"; break; }
    case 6: {return "Ԥ��ҽѧ"; break; }
    case 7: {return "����ѧ"; break; }
    }
}
string course::course3_profession_menu()
{
    List course3_profession_menu_list(2);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "         ��ѧԺ          " << endl; Col(3); cout << "   ";
        if (course3_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course3_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.��ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course3_profession_menu_list.Deal_input();
        if (course3_profession_menu_list.GetBreakword())
        {
            course3_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course3_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "��ѧ"; break; }
    }
}
string course::course4_profession_menu()
{
    List course4_profession_menu_list(3);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "         ��ѧԺ          " << endl; Col(3); cout << "   ";
        if (course4_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course4_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.������ʽ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course4_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.��������ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course4_profession_menu_list.Deal_input();
        if (course4_profession_menu_list.GetBreakword())
        {
            course4_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course4_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "������ʽ���"; break; }
    case 3: {return "��������ѧ"; break; }
    }
}
string course::course5_profession_menu()
{
    List course5_profession_menu_list(8);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "        �ƾ�ѧԺ         " << endl; Col(3); cout << "   ";
        if (course5_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course5_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.���ʾ�����ó��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course5_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.�������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course5_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.��Դ����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course5_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.����ѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course5_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(20) << "6.���ѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course5_profession_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(20) << "7.����ѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course5_profession_menu_list.GetListSelection() == 8) Col(7);
        else Col(6);
        cout << left << setw(20) << "8.ͳ��ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course5_profession_menu_list.Deal_input();
        if (course5_profession_menu_list.GetBreakword())
        {
            course5_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course5_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "���ʾ�����ó��"; break; }
    case 3: {return "�������"; break; }
    case 4: {return "��Դ����"; break; }
    case 5: {return "����ѧ"; break; }
    case 6: {return "���ѧ"; break; }
    case 7: {return "����ѧ"; break; }
    case 8: {return "ͳ��ѧ"; break; }
    }
}
string course::course6_profession_menu()
{
    List course6_profession_menu_list(9);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "        ����ѧԺ         " << endl; Col(3); cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.��Ϣ��������Ϣϵͳ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.������ҵ����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.������Դ����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.��������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(20) << "6.���̹���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(20) << "7.��ҵ����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 8) Col(7);
        else Col(6);
        cout << left << setw(20) << "8.�г�Ӫ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course6_profession_menu_list.GetListSelection() == 9) Col(7);
        else Col(6);
        cout << left << setw(20) << "9.��������"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course6_profession_menu_list.Deal_input();
        if (course6_profession_menu_list.GetBreakword())
        {
            course6_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course6_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "��Ϣ��������Ϣϵͳ"; break; }
    case 3: {return "������ҵ����"; break; }
    case 4: {return "������Դ����"; break; }
    case 5: {return "��������"; break; }
    case 6: {return "���̹���"; break; }
    case 7: {return "��ҵ����"; break; }
    case 8: {return "�г�Ӫ��"; break; }
    case 9: {return "��������"; break; }
    }
}
string course::course7_profession_menu()
{
    List course7_profession_menu_list(9);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "        ����ѧԺ         " << endl; Col(3); cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.����ý������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.�Ӿ��������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.��Ʒ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.��������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(20) << "6.��ҵ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(20) << "7.�������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 8) Col(7);
        else Col(6);
        cout << left << setw(20) << "8.����ѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course7_profession_menu_list.GetListSelection() == 9) Col(7);
        else Col(6);
        cout << left << setw(20) << "9.����"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course7_profession_menu_list.Deal_input();
        if (course7_profession_menu_list.GetBreakword())
        {
            course7_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course7_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "����ý������"; break; }
    case 3: {return "�Ӿ��������"; break; }
    case 4: {return "��Ʒ���"; break; }
    case 5: {return "��������"; break; }
    case 6: {return "��ҵ���"; break; }
    case 7: {return "�������"; break; }
    case 8: {return "����ѧ"; break; }
    case 9: {return "����"; break; }
    }
}
string course::course8_profession_menu()
{
    List course8_profession_menu_list(3);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "       �����ѧԺ        " << endl; Col(3); cout << "   ";
        if (course8_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course8_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course8_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.Ӣ��"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course8_profession_menu_list.Deal_input();
        if (course8_profession_menu_list.GetBreakword())
        {
            course8_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course8_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "����"; break; }
    case 3: {return "Ӣ��"; break; }
    }
}
string course::course9_profession_menu()
{
    List course9_profession_menu_list(2);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "       ֪ʶ��ȨѧԺ      " << endl; Col(3); cout << "   ";
        if (course9_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course9_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.֪ʶ��Ȩ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course9_profession_menu_list.Deal_input();
        if (course9_profession_menu_list.GetBreakword())
        {
            course9_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course9_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "֪ʶ��Ȩ"; break; }
    }
}
string course::course10_profession_menu()
{
    List course10_profession_menu_list(5);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "       ��ѧ����ѧԺ      " << endl; Col(3); cout << "   ";
        if (course10_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course10_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.��ѧ�����빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course10_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.Ӧ�û�ѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course10_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.��ѧ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course10_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.��ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course10_profession_menu_list.Deal_input();
        if (course10_profession_menu_list.GetBreakword())
        {
            course10_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course10_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "��ѧ�����빤��"; break; }
    case 3: {return "Ӧ�û�ѧ"; break; }
    case 4: {return "��ѧ��"; break; }
    case 5: {return "��ѧ"; break; }
    }
}
string course::course11_profession_menu()
{
    List course11_profession_menu_list(6);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "        ��е����ѧԺ          " << endl; Col(3); cout << "   ";
        if (course11_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(25) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course11_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(25) << "2.��е������켰���Զ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course11_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(25) << "3.�����Ϣ��ѧ�빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course11_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(25) << "4.��ؼ���������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course11_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(25) << "5.�������칤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course11_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(25) << "6.��е���ӹ���"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(30) << " " << endl; Col(0);
        course11_profession_menu_list.Deal_input();
        if (course11_profession_menu_list.GetBreakword())
        {
            course11_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course11_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "��е������켰���Զ���"; break; }
    case 3: {return "�����Ϣ��ѧ�빤��"; break; }
    case 4: {return "��ؼ���������"; break; }
    case 5: {return "�������칤��"; break; }
    case 6: {return "��е���ӹ���"; break; }
    }
}
string course::course12_profession_menu()
{
    List course12_profession_menu_list(4);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "         ũҵ����ѧԺ         " << endl; Col(3); cout << "   ";
        if (course12_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(25) << "1.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course12_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(25) << "2.ũҵ��е�������Զ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course12_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(25) << "3.��ʩũҵ��ѧ�빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course12_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(25) << "4.ũҵ����װ������"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(30) << " " << endl; Col(0);
        course12_profession_menu_list.Deal_input();
        if (course12_profession_menu_list.GetBreakword())
        {
            course12_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course12_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "ũҵ��е�������Զ���"; break; }
    case 3: {return "��ʩũҵ��ѧ�빤��"; break; }
    case 4: {return "ũҵ����װ������"; break; }
    }
}
string course::course13_profession_menu()
{
    List course13_profession_menu_list(2);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "       ��ʦ����ѧԺ      " << endl; Col(3); cout << "   ";
        if (course13_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course13_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.��������ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course13_profession_menu_list.Deal_input();
        if (course13_profession_menu_list.GetBreakword())
        {
            course13_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course13_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "��������ѧ"; break; }
    }
}
string course::course14_profession_menu()
{
    List course14_profession_menu_list(2);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "       ������ѧѧԺ      " << endl; Col(3); cout << "   ";
        if (course14_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course14_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.�����ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course14_profession_menu_list.Deal_input();
        if (course14_profession_menu_list.GetBreakword())
        {
            course14_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course14_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "�����ѧ"; break; }
    }
}
string course::course15_profession_menu()
{
    List course15_profession_menu_list(3);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "       ��ѧ��ѧѧԺ      " << endl; Col(3); cout << "   ";
        if (course15_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course15_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.���ݼ��㼰Ӧ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course15_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.��ѧ��Ӧ����ѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course15_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.������ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course15_profession_menu_list.Deal_input();
        if (course15_profession_menu_list.GetBreakword())
        {
            course15_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course15_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "���ݼ��㼰Ӧ��"; break; }
    case 3: {return "��ѧ��Ӧ����ѧ"; break; }
    case 4: {return "������ѧ"; break; }
    }
}
string course::course16_profession_menu()
{
    List course16_profession_menu_list(2);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "       ���˼����ѧԺ    " << endl; Col(3); cout << "   ";
        if (course16_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course16_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.˼�����ν���"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course16_profession_menu_list.Deal_input();
        if (course16_profession_menu_list.GetBreakword())
        {
            course16_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course16_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "˼�����ν���"; break; }
    }
}
string course::course17_profession_menu()
{
    List course17_profession_menu_list(7);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "     ������Ϣ����ѧԺ    " << endl; Col(3); cout << "   ";
        if (course17_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course17_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.�������̼����Զ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course17_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.������Ϣ����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course17_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.����ҽѧ����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course17_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.�����˹���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course17_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(20) << "6.ũҵ������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course17_profession_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(20) << "7.�Զ���"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course17_profession_menu_list.Deal_input();
        if (course17_profession_menu_list.GetBreakword())
        {
            course17_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course17_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "�������̼����Զ���"; break; }
    case 3: {return "������Ϣ����"; break; }
    case 4: {return "����ҽѧ����"; break; }
    case 5: {return "�����˹���"; break; }
    case 6: {return "ũҵ������"; break; }
    case 7: {return "�Զ���"; break; }
    }
}
string course::course18_profession_menu()
{
    List course18_profession_menu_list(5);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "       ��Դ�붯������ѧԺ     " << endl; Col(3); cout << "   ";
        if (course18_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(25) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course18_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(25) << "2.������������ԴӦ�ù���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course18_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(25) << "3.����Դ��ѧ�빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course18_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(25) << "4.���ܿ�ѧ�빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course18_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(25) << "5.��Դ�붯������"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(30) << " " << endl; Col(0);
        course18_profession_menu_list.Deal_input();
        if (course18_profession_menu_list.GetBreakword())
        {
            course18_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course18_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "������������ԴӦ�ù���"; break; }
    case 3: {return "����Դ��ѧ�빤��"; break; }
    case 4: {return "���ܿ�ѧ�빤��"; break; }
    case 5: {return "��Դ�붯������"; break; }
    }
}
string course::course19_profession_menu()
{
    List course19_profession_menu_list(6);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "   �����뽻ͨ����ѧԺ    " << endl; Col(3); cout << "   ";
        if (course19_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course19_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.��Դ�붯������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course19_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.����Դ��������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course19_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.��������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course19_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.��ͨ����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course19_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(20) << "6.��ͨ����"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course19_profession_menu_list.Deal_input();
        if (course19_profession_menu_list.GetBreakword())
        {
            course19_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course19_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "��Դ�붯������"; break; }
    case 3: {return "����Դ��������"; break; }
    case 4: {return "��������"; break; }
    case 5: {return "��ͨ����"; break; }
    case 6: {return "��ͨ����"; break; }
    }
}
string course::course20_profession_menu()
{
    List course20_profession_menu_list(7);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "   ʳƷ�����﹤��ѧԺ    " << endl; Col(3); cout << "   ";
        if (course20_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course20_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.ʳƷ��ѧ�빤����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course20_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.ʳƷ��ѧ�빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course20_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.ʳƷӪ���뽡��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course20_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.ʳƷ�����밲ȫ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course20_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(20) << "6.���﹤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course20_profession_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(20) << "7.���＼��"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course20_profession_menu_list.Deal_input();
        if (course20_profession_menu_list.GetBreakword())
        {
            course20_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course20_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "ʳƷ��ѧ�빤����"; break; }
    case 3: {return "ʳƷ��ѧ�빤��"; break; }
    case 4: {return "ʳƷӪ���뽡��"; break; }
    case 5: {return "ʳƷ�����밲ȫ"; break; }
    case 6: {return "���﹤��"; break; }
    case 7: {return "���＼��"; break; }
    }
}
string course::course21_profession_menu()
{
    List course21_profession_menu_list(4);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "   ��ľ��������ѧѧԺ    " << endl; Col(3); cout << "   ";
        if (course21_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course21_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.���̹���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course21_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.������ѧ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course21_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.��ľ����"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course21_profession_menu_list.Deal_input();
        if (course21_profession_menu_list.GetBreakword())
        {
            course21_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course21_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "���̹���"; break; }
    case 3: {return "������ѧ"; break; }
    case 4: {return "��ľ����"; break; }
    }
}
string course::course22_profession_menu()
{
    List course22_profession_menu_list(3);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "   ��������ӹ���ѧԺ    " << endl; Col(3); cout << "   ";
        if (course22_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course22_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.΢���ӿ�ѧ�빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course22_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.����ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course22_profession_menu_list.Deal_input();
        if (course22_profession_menu_list.GetBreakword())
        {
            course22_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course22_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "΢���ӿ�ѧ�빤��"; break; }
    case 3: {return "����ѧ"; break; }
    }
}
string course::course23_profession_menu()
{
    List course23_profession_menu_list(9);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "      ���Ͽ�ѧ�빤��ѧԺ      " << endl; Col(3); cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(25) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(25) << "2.���ϳ��ͼ����ƹ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(25) << "3.�޻��ǽ������Ϲ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(25) << "4.�߷��Ӳ����빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(25) << "5.���Ͽ�ѧ�빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(25) << "6.���ϲ����빤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(25) << "7.�������Ϲ���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 8) Col(7);
        else Col(6);
        cout << left << setw(25) << "8.ұ�𹤳�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course23_profession_menu_list.GetListSelection() == 9) Col(7);
        else Col(6);
        cout << left << setw(25) << "9.������"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(30) << " " << endl; Col(0);
        course23_profession_menu_list.Deal_input();
        if (course23_profession_menu_list.GetBreakword())
        {
            course23_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course23_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "���ϳ��ͼ����ƹ���"; break; }
    case 3: {return "�޻��ǽ������Ϲ���"; break; }
    case 4: {return "�߷��Ӳ����빤��"; break; }
    case 5: {return "���Ͽ�ѧ�빤��"; break; }
    case 6: {return "���ϲ����빤��"; break; }
    case 7: {return "�������Ϲ���"; break; }
    case 8: {return "ұ�𹤳�"; break; }
    case 9: {return "������"; break; }
    }
}
string course::course24_profession_menu()
{
    List course24_profession_menu_list(5);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "      �����밲ȫ����ѧԺ      " << endl; Col(3); cout << "   ";
        if (course24_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(25) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course24_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(25) << "2.Ӧ�����������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course24_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(25) << "3.�����豸����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course24_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(25) << "4.��ȫ����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course24_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(25) << "5.��������"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(30) << " " << endl; Col(0);
        course24_profession_menu_list.Deal_input();
        if (course24_profession_menu_list.GetBreakword())
        {
            course24_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course24_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "Ӧ�����������"; break; }
    case 3: {return "�����豸����"; break; }
    case 4: {return "��ȫ����"; break; }
    case 5: {return "��������"; break; }
    }
}
string course::course25_profession_menu()
{
    List course25_profession_menu_list(8);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "   �������ѧ��ͨ�Ź���ѧԺ   " << endl; Col(3); cout << "   ";
        if (course25_profession_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(25) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course25_profession_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(25) << "2.�������ѧ�뼼��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course25_profession_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(25) << "3.���ܿ�ѧ�뼼��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course25_profession_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(25) << "4.����������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course25_profession_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(25) << "5.�������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course25_profession_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(25) << "6.ͨ�Ź���"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course25_profession_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(25) << "7.���繤��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course25_profession_menu_list.GetListSelection() == 8) Col(7);
        else Col(6);
        cout << left << setw(25) << "8.��Ϣ��ȫ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(30) << " " << endl; Col(0);
        course25_profession_menu_list.Deal_input();
        if (course25_profession_menu_list.GetBreakword())
        {
            course25_profession_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course25_profession_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "�������ѧ�뼼��"; break; }
    case 3: {return "���ܿ�ѧ�뼼��"; break; }
    case 4: {return "����������"; break; }
    case 5: {return "�������"; break; }
    case 6: {return "ͨ�Ź���"; break; }
    case 7: {return "���繤��"; break; }
    case 8: {return "��Ϣ��ȫ"; break; }
    }
}
string course::course_type_menu()
{
    List course_type_menu_list(9);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "         �γ����        " << endl; Col(3); cout << "   ";
        if (course_type_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_type_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.ͨʶ��������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_type_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.ͨʶ����ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_type_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.רҵ��������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_type_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.רҵ����ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_type_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(20) << "6.רҵ�������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_type_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(20) << "7.רҵ����ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_type_menu_list.GetListSelection() == 8) Col(7);
        else Col(6);
        cout << left << setw(20) << "8.ʵ������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_type_menu_list.GetListSelection() == 9) Col(7);
        else Col(6);
        cout << left << setw(20) << "9.������ѧ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course_type_menu_list.Deal_input();
        if (course_type_menu_list.GetBreakword())
        {
            course_type_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course_type_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "ͨʶ��������"; break; }
    case 3: {return "ͨʶ����ѡ��"; break; }
    case 4: {return "רҵ��������"; break; }
    case 5: {return "רҵ����ѡ��"; break; }
    case 6: {return "רҵ�������"; break; }
    case 7: {return "רҵ����ѡ��"; break; }
    case 8: {return "ʵ������"; break; }
    case 9: {return "������ѧ"; break; }
    }
}
string course::course_nature_menu()
{
    List course_nature_menu_list(5);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "         �γ�����        " << endl; Col(3); cout << "   ";
        if (course_nature_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(20) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_nature_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(20) << "2.���޿�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_nature_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(20) << "3.ѡ�޿�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_nature_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(20) << "4.��ѡ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_nature_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(20) << "5.Уѡ�޿�"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(25) << " " << endl; Col(0);
        course_nature_menu_list.Deal_input();
        if (course_nature_menu_list.GetBreakword())
        {
            course_nature_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course_nature_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "���޿�"; break; }
    case 3: {return "ѡ�޿�"; break; }
    case 4: {return "��ѡ��"; break; }
    case 5: {return "Уѡ�޿�"; break; }
    }
}
string course::course_belong_menu()
{
    List course_belong_menu_list(10);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "           �γ̹���           " << endl; Col(3); cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(25) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(25) << "2.���ù�����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(25) << "3.����������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(25) << "4.��Ȼ��ѧ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(25) << "5.�ۺϽ�����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(25) << "6.���̼�����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 7) Col(7);
        else Col(6);
        cout << left << setw(25) << "7.���´�ҵ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 8) Col(7);
        else Col(6);
        cout << left << setw(25) << "8.�����ũ��"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 9) Col(7);
        else Col(6);
        cout << left << setw(25) << "9.������ѧ�γ�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_belong_menu_list.GetListSelection() == 10) Col(7);
        else Col(6);
        cout << left << setw(25) << "10.�Ͷ�������ʵ��"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(30) << " " << endl; Col(0);
        course_belong_menu_list.Deal_input();
        if (course_belong_menu_list.GetBreakword())
        {
            course_belong_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course_belong_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "���ù�����"; break; }
    case 3: {return "����������"; break; }
    case 4: {return "��Ȼ��ѧ��"; break; }
    case 5: {return "�ۺϽ�����"; break; }
    case 6: {return "���̼�����"; break; }
    case 7: {return "���´�ҵ��"; break; }
    case 8: {return "�����ũ��"; break; }
    case 9: {return "������ѧ�γ�"; break; }
    case 10: {return "�Ͷ�������ʵ��"; break; }
    }
}
string course::course_week_menu()
{
    List course_week_menu_list(6);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "   �Ͽ�����    " << endl; Col(3); cout << "   ";
        if (course_week_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(10) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(10) << "2.����һ"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(10) << "3.���ڶ�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(10) << "4.������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(10) << "5.������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(10) << "6.������"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(15) << " " << endl; Col(0);
        course_week_menu_list.Deal_input();
        if (course_week_menu_list.GetBreakword())
        {
            course_week_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course_week_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "����һ"; break; }
    case 3: {return "���ڶ�"; break; }
    case 4: {return "������"; break; }
    case 5: {return "������"; break; }
    case 6: {return "������"; break; }
    }
}
string course::course_week2_menu()
{
    List course_week2_menu_list(5);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "   �Ͽ�����    " << endl; Col(3); cout << "   ";
        if (course_week2_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(10) << "1.����һ";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week2_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(10) << "2.���ڶ�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week2_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(10) << "3.������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week2_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(10) << "4.������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_week2_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(10) << "5.������"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(15) << " " << endl; Col(0);
        course_week2_menu_list.Deal_input();
        if (course_week2_menu_list.GetBreakword())
        {
            course_week2_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course_week2_menu_list.GetListSelection())
    {
    case 1: {return "����һ"; break; }
    case 2: {return "���ڶ�"; break; }
    case 3: {return "������"; break; }
    case 4: {return "������"; break; }
    case 5: {return "������"; break; }
    }
}
string course::course_time_menu()
{
    List course_time_menu_list(6);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "      �Ͽνڴ�     " << endl; Col(3); cout << "   ";
        if (course_time_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(14) << "1.��ѡ��";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(14) << "2.һ�Ͷ�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(14) << "3.������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(14) << "4.�����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(14) << "5.�ߺͰ�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time_menu_list.GetListSelection() == 6) Col(7);
        else Col(6);
        cout << left << setw(14) << "6.�ź�ʮ��ʮһ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(19) << " " << endl; Col(0);
        course_time_menu_list.Deal_input();
        if (course_time_menu_list.GetBreakword())
        {
            course_time_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course_time_menu_list.GetListSelection())
    {
    case 1: {return "0"; break; }
    case 2: {return "1��2"; break; }
    case 3: {return "3��4"; break; }
    case 4: {return "5��6"; break; }
    case 5: {return "7��8"; break; }
    case 6: {return "9��10��11"; break; }
    }
}
string course::course_time2_menu()
{
    List course_time2_menu_list(5);
    system("cls");
    while (true)
    {
        system("cls");
        Col(3); cout << "     �Ͽνڴ�      " << endl; Col(3); cout << "   ";
        if (course_time2_menu_list.GetListSelection() == 1) Col(7);
        else Col(2);
        cout << left << setw(14) << "1.һ�Ͷ�";
        Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time2_menu_list.GetListSelection() == 2) Col(7);
        else Col(6);
        cout << left << setw(14) << "2.������"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time2_menu_list.GetListSelection() == 3) Col(7);
        else Col(6);
        cout << left << setw(14) << "3.�����"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time2_menu_list.GetListSelection() == 4) Col(7);
        else Col(6);
        cout << left << setw(14) << "4.�ߺͰ�"; Col(3); cout << "  "; cout << endl; cout << "   ";
        if (course_time2_menu_list.GetListSelection() == 5) Col(7);
        else Col(6);
        cout << left << setw(14) << "5.�ź�ʮ��ʮһ"; Col(3); cout << "  "; cout << endl;
        Col(3); cout << setw(19) << " " << endl; Col(0);
        course_time2_menu_list.Deal_input();
        if (course_time2_menu_list.GetBreakword())
        {
            course_time2_menu_list.SetBreakword(0);
            break;
        }
    }
    switch (course_time2_menu_list.GetListSelection())
    {
    case 1: {return "1��2"; break; }
    case 2: {return "3��4"; break; }
    case 3: {return "5��6"; break; }
    case 4: {return "7��8"; break; }
    case 5: {return "9��10��11"; break; }
    }
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
    //�ж�stu_course�ļ����Ƿ��Ѿ�����
    fstream test1("./stu_course/test.txt", ios::out);
    if (!test1)
    {
        CreateDirectory(_T("./stu_course"), NULL);
    }
    else {
        test1.close();
        remove("./stu_course/test.txt");
    }
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
    system("cls");
    Col(3); cout << "������Ҫѡ�Ŀγ̱��:" << endl; Col(0);
    Col(7); cin >> stu_temp_course_id; Col(0);
    //�жϿγ��Ƿ����
    if (!Iscourse_exist(stu_temp_course_id))
    {
        system("cls");
        Col(3); cout << "ѡ��ʧ�ܣ��ÿγ̲�����" << endl; Col(0);
        Sleep(1000);
        return;
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
        Col(3); cout << "ѡ�γɹ�" << endl; Col(0);
        Sleep(1000);
        //�ж�course_student_list�ļ����Ƿ��Ѿ�����
        fstream test2("./course_student_list/test.txt", ios::out);
        if (!test2)
        {
            CreateDirectory(_T("./course_student_list"), NULL);
        }
        else {
            test2.close();
            remove("./course_student_list/test.txt");
        }
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
        Col(3); cout << "ѡ��ʧ�ܣ�����ԭ��Ϊѡ���ظ���ʱ���ͻ" << endl; Col(0);
        Sleep(1000);
    }
}
void stu_course::Drop_course()
{
    //�ж�stu_course�ļ����Ƿ��Ѿ�����
    fstream test1("./stu_course/test.txt", ios::out);
    if (!test1)
    {
        CreateDirectory(_T("./stu_course"), NULL);
    }
    else {
        test1.close();
        remove("./stu_course/test.txt");
    }
    system("cls");
    Col(3); cout << "������Ҫ�˵Ŀγ̱��:" << endl; Col(0);
    Col(7); cin >> stu_temp_course_id; Col(0);
    //�Ƿ�Ϊ��ѡ�Ŀγ̣���ͬ������в�ͬ����
    if (!Iscourse(stu_temp_course_id))
    {
        system("cls");
        Col(3); cout << "�˿�ʧ�ܣ�����ԭ��Ϊδѡ�ÿγ�" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "�˿γɹ�" << endl; Col(0);
    Sleep(1000);
    //�ж�course_student_list�ļ����Ƿ��Ѿ�����
    fstream test2("./course_student_list/test.txt", ios::out);
    if (!test2)
    {
        CreateDirectory(_T("./course_student_list"), NULL);
    }
    else {
        test2.close();
        remove("./course_student_list/test.txt");
    }
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
    Col(3); cout << left << setw(12) << " ";
    Col(7); cout << left << setw(30) << "����һ";
    Col(3); cout << left << setw(30) << "���ڶ�";
    Col(7); cout << left << setw(30) << "������";
    Col(3); cout << left << setw(30) << "������";
    Col(7); cout << left << setw(30) << "������";
    cout << endl;
    Col(7); cout << left << setw(12) << "һ.����";
    Col(3); cout << left << setw(30) << Get_course("����һ", "1��2");
    Col(7); cout << left << setw(30) << Get_course("���ڶ�", "1��2");
    Col(3); cout << left << setw(30) << Get_course("������", "1��2");
    Col(7); cout << left << setw(30) << Get_course("������", "1��2");
    Col(3); cout << left << setw(30) << Get_course("������", "1��2");
    cout << endl;
    Col(3); cout << left << setw(12) << "��.�Ľ�";
    Col(7); cout << left << setw(30) << Get_course("����һ", "3��4");
    Col(3); cout << left << setw(30) << Get_course("���ڶ�", "3��4");
    Col(7); cout << left << setw(30) << Get_course("������", "3��4");
    Col(3); cout << left << setw(30) << Get_course("������", "3��4");
    Col(7); cout << left << setw(30) << Get_course("������", "3��4");
    cout << endl;
    Col(7); cout << left << setw(12) << "��.����";
    Col(3); cout << left << setw(30) << Get_course("����һ", "5��6");
    Col(7); cout << left << setw(30) << Get_course("���ڶ�", "5��6");
    Col(3); cout << left << setw(30) << Get_course("������", "5��6");
    Col(7); cout << left << setw(30) << Get_course("������", "5��6");
    Col(3); cout << left << setw(30) << Get_course("������", "5��6");
    cout << endl;
    Col(3); cout << left << setw(12) << "��.�˽�";
    Col(7); cout << left << setw(30) << Get_course("����һ", "7��8");
    Col(3); cout << left << setw(30) << Get_course("���ڶ�", "7��8");
    Col(7); cout << left << setw(30) << Get_course("������", "7��8");
    Col(3); cout << left << setw(30) << Get_course("������", "7��8");
    Col(7); cout << left << setw(30) << Get_course("������", "7��8");
    cout << endl;
    Col(7); cout << left << setw(12) << "��.ʮ.ʮһ��";
    Col(3); cout << left << setw(30) << Get_course("����һ", "9��10��11");
    Col(7); cout << left << setw(30) << Get_course("���ڶ�", "9��10��11");
    Col(3); cout << left << setw(30) << Get_course("������", "9��10��11");
    Col(7); cout << left << setw(30) << Get_course("������", "9��10��11");
    Col(3); cout << left << setw(30) << Get_course("������", "9��10��11");
    Col(0); cout << endl;
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
        Col(3); cout << "�����Ѿ�û�п��ˣ�˯���þ���" << endl; Col(0);
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
    system("cls");
    if (name != "")
    {
        Col(3); cout << "��һ�ڿ�Ϊ:" << name << endl; Col(0);
        Col(3); cout << "ʱ��Ϊ:"; Col(0);
        if (time == "1��2")
        {
            Col(3); cout << "8:00-9:40" << endl; Col(0);
        }
        else if (time == "3��4")
        {
            Col(3); cout << "10:00-11:40" << endl; Col(0);
        }
        else if (time == "5��6")
        {
            Col(3); cout << "14:00-15:40" << endl; Col(0);
        }
        else if (time == "7��8")
        {
            Col(3); cout << "16:00-17:40" << endl; Col(0);
        }
        else if (time == "9��10��11")
        {
            Col(3); cout << "19:00-21:35" << endl; Col(0);
        }
    }
    else {
        Col(3); cout << "����Ϣ100������������һ�ڿΰ�" << endl; Col(0);
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
    //�ж�tea_course�ļ����Ƿ��Ѿ�����
    fstream test1("./tea_course/test.txt", ios::out);
    if (!test1)
    {
        CreateDirectory(_T("./tea_course"), NULL);
    }
    else {
        test1.close();
        remove("./tea_course/test.txt");
    }
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
    Col(3); cout << "������Ҫ����ڿεĿγ̱��:" << endl; Col(0);
    Col(7); cin >> tea_temp_course_id; Col(0);
    //�жϿγ��Ƿ����
    if (!Iscourse_exist(tea_temp_course_id))
    {
        system("cls");
        Col(3); cout << "��ӿγ�ʧ�ܣ��ÿγ̲�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    //�Ƿ��ͻ����ͬ������в�ͬ����
    if (!Isconflict())
    {
        //�жϿγ��Ƿ��Ѿ�����

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
        Col(3); cout << "��ӿγ̳ɹ�" << endl; Col(0);
        Sleep(1000);
        //�ж�course_teacher_list�ļ����Ƿ��Ѿ�����
        fstream test2("./course_teacher_list/test.txt", ios::out);
        if (!test2)
        {
            CreateDirectory(_T("./course_teacher_list"), NULL);
        }
        else {
            test2.close();
            remove("./course_teacher_list/test.txt");
        }
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
        Col(3); cout << "��ӿγ�ʧ�ܣ�����ԭ��Ϊ�γ��ظ���ʱ���ͻ" << endl; Col(0);
        Sleep(1000);
    }
}
void tea_course::Delete_tea_course()
{
    //�ж�tea_course�ļ����Ƿ��Ѿ�����
    fstream test1("./tea_course/test.txt", ios::out);
    if (!test1)
    {
        CreateDirectory(_T("./tea_course"), NULL);
    }
    else {
        test1.close();
        remove("./tea_course/test.txt");
    }
    Col(3); cout << "������Ҫ�˵Ŀγ̱��:" << endl; Col(0);
    Col(7); cin >> tea_temp_course_id; Col(0);
    //�Ƿ�Ϊ���ڵĿγ̣���ͬ������в�ͬ����
    if (!Iscourse(tea_temp_course_id))
    {
        system("cls");
        Col(3); cout << "�˿�ʧ�ܣ�����ԭ��Ϊδѡ�ÿγ�" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "�˿γɹ�" << endl; Col(0);
    Sleep(1000);
    //�ж�course_teacher_list�ļ����Ƿ��Ѿ�����
    fstream test2("./course_teacher_list/test.txt", ios::out);
    if (!test2)
    {
        CreateDirectory(_T("./course_teacher_list"), NULL);
    }
    else {
        test2.close();
        remove("./course_teacher_list/test.txt");
    }
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
    Col(3); cout << left << setw(12) << " ";
    Col(7); cout << left << setw(30) << "����һ";
    Col(3); cout << left << setw(30) << "���ڶ�";
    Col(7); cout << left << setw(30) << "������";
    Col(3); cout << left << setw(30) << "������";
    Col(7); cout << left << setw(30) << "������";
    cout << endl;
    Col(7); cout << left << setw(12) << "һ.����";
    Col(3); cout << left << setw(30) << Get_course("����һ", "1��2");
    Col(7); cout << left << setw(30) << Get_course("���ڶ�", "1��2");
    Col(3); cout << left << setw(30) << Get_course("������", "1��2");
    Col(7); cout << left << setw(30) << Get_course("������", "1��2");
    Col(3); cout << left << setw(30) << Get_course("������", "1��2");
    cout << endl;
    Col(3); cout << left << setw(12) << "��.�Ľ�";
    Col(7); cout << left << setw(30) << Get_course("����һ", "3��4");
    Col(3); cout << left << setw(30) << Get_course("���ڶ�", "3��4");
    Col(7); cout << left << setw(30) << Get_course("������", "3��4");
    Col(3); cout << left << setw(30) << Get_course("������", "3��4");
    Col(7); cout << left << setw(30) << Get_course("������", "3��4");
    cout << endl;
    Col(7); cout << left << setw(12) << "��.����";
    Col(3); cout << left << setw(30) << Get_course("����һ", "5��6");
    Col(7); cout << left << setw(30) << Get_course("���ڶ�", "5��6");
    Col(3); cout << left << setw(30) << Get_course("������", "5��6");
    Col(7); cout << left << setw(30) << Get_course("������", "5��6");
    Col(3); cout << left << setw(30) << Get_course("������", "5��6");
    cout << endl;
    Col(3); cout << left << setw(12) << "��.�˽�";
    Col(7); cout << left << setw(30) << Get_course("����һ", "7��8");
    Col(3); cout << left << setw(30) << Get_course("���ڶ�", "7��8");
    Col(7); cout << left << setw(30) << Get_course("������", "7��8");
    Col(3); cout << left << setw(30) << Get_course("������", "7��8");
    Col(7); cout << left << setw(30) << Get_course("������", "7��8");
    cout << endl;
    Col(7); cout << left << setw(12) << "��.ʮ.ʮһ��";
    Col(3); cout << left << setw(30) << Get_course("����һ", "9��10��11");
    Col(7); cout << left << setw(30) << Get_course("���ڶ�", "9��10��11");
    Col(3); cout << left << setw(30) << Get_course("������", "9��10��11");
    Col(7); cout << left << setw(30) << Get_course("������", "9��10��11");
    Col(3); cout << left << setw(30) << Get_course("������", "9��10��11");
    Col(0); cout << endl;
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
        Col(3); cout << "�����Ѿ�û�п��ˣ�˯���þ���" << endl; Col(0);
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
    Col(3); cout << "��һ�ڿ�Ϊ:" << name << endl; Col(0);
    Col(3); cout << "ʱ��Ϊ:"; Col(0);
    if (name != "")
    {
        if (time == "1��2")
        {
            Col(3); cout << "8:00-9:40" << endl; Col(0);
        }
        else if (time == "3��4")
        {
            Col(3); cout << "10:00-11:40" << endl; Col(0);
        }
        else if (time == "5��6")
        {
            Col(3); cout << "14:00-15:40" << endl; Col(0);
        }
        else if (time == "7��8")
        {
            Col(3); cout << "16:00-17:40" << endl; Col(0);
        }
        else if (time == "9��10��11")
        {
            Col(3); cout << "19:00-21:35" << endl; Col(0);
        }
    }
    else {
        Col(3); cout << "����Ϣ100������������һ�ڿΰ�" << endl; Col(0);
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
        Col(3); cout << "��¼�ɹ�" << endl; Col(0);
        this->Read_stu_information();
        Sleep(1000);
        return true;
    }
    else
    {
        system("cls");
        Col(3); cout << "�˺Ż������������������" << endl; Col(0);
        Sleep(1000);
        return false;
    }
}
//���ܺ�������
void student::Change_password()
{
    system("cls");
    Col(3); cout << "������������:" << endl; Col(0);
    string new_password;
    Col(7); cin >> new_password; Col(0);
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
    Col(3); cout << "�޸ĳɹ�" << endl; Col(0);
    Sleep(1000);
}
void student::Show_stu_information()
{
    system("cls");
    Col(3); cout << "ѧ��:" << this->account << endl; Col(0);//ѧ�Ų����޸�
    Col(3); cout << "����:" << this->name << endl; Col(0);
    Col(3); cout << "�꼶:" << this->stu_grade << endl; Col(0);
    Col(3); cout << "ѧԺ:" << this->stu_college << endl; Col(0);
    Col(3); cout << "רҵ:" << this->stu_profession << endl; Col(0);
    Col(3); cout << "�༶:" << this->stu_class << endl; Col(0);
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
    system("pause");
}
void student::Course_search()
{
    course::Search_course_information();
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
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
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
    system("pause");
}
void student::Show_next_course()
{
    //����һ����ʱ����������ʾ��һ�ڿε�ʱ�������
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", account, "", "", "");
    stu_course_temp.Show_next_course();
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
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
        Col(3); cout << "��¼�ɹ�" << endl; Col(0);
        this->Read_tea_information();
        Sleep(1000);
        return true;
    }
    else
    {
        system("cls");
        Col(3); cout << "�˺Ż������������������" << endl; Col(0);
        Sleep(1000);
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
    system("cls");
    Col(3); cout << "������������:" << endl; Col(0);
    string new_password;
    Col(7); cin >> new_password; Col(0);
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
    Col(3); cout << "�޸ĳɹ�" << endl; Col(0);
    Sleep(1000);
}
void teacher::Show_tea_information()
{
    system("cls");
    Col(3); cout << "����:" << this->account << endl; Col(0);//���Ų����޸�
    Col(3); cout << "����:" << this->name << endl; Col(0);
    Col(3); cout << "ѧԺ:" << this->tea_college << endl; Col(0);
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
    system("pause");
}
void teacher::Course_search()
{
    course::Search_course_information();
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
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
        Col(3); cout << "�γ̱��:" << temp_course_id << "\t"; Col(0);
        Col(3); cout << "�γ�����:" << temp_course_name << endl; Col(0);
        //��ʾѧ������
        while (getline(course_student_list_file, temp))
        {
            Col(3); cout << "ѧ��ѧ��:" << temp << "\t"; Col(0);
            Col(3); cout << "ѧ������:" << Get_stu_name(temp) << endl; Col(0);
        }
        course_student_list_file.close();
    }
    tea_course_file.close();
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
    system("pause");
}
void teacher::Show_next_course()
{
    //����һ����ʱ����������ʾ��һ�ڿε�ʱ�������
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", account, "", "", "");
    tea_course_temp.Show_next_course();
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
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
        Col(3); cout << "��¼�ɹ�" << endl; Col(0);
        this->Read_admin_information();
        Sleep(1000);
        return true;
    }
    else
    {
        system("cls");
        Col(3); cout << "�˺Ż������������������" << endl; Col(0);
        Sleep(1000);
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
    system("cls");
    Col(3); cout << "����������������:" << endl; Col(0);
    string new_password;
    Col(7); cin >> new_password; Col(0);
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
    Col(3); cout << "�޸ĳɹ�" << endl; Col(0);
    Sleep(1000);
}
void admin::Show_admin_information()
{
    system("cls");
    Col(3); cout << "�˺�:" << this->account << endl; Col(0);//�˺Ų����޸�
    Col(3); cout << "����:" << this->name << endl; Col(0);
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
    system("pause");
}
void admin::Add_stu_information()
{
    system("cls");
    Col(3); 
    cout << "������ѧ����Ϣ:" << endl;
    cout << "(Ĭ������Ϊ123456)" << endl;
    cout << "ѧ��:";
    Col(7); cin >> temp_accountORcourseid_class; 
    Col(0);
    //�ж�ѧ���Ƿ��Ѿ��ظ�
    if (Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "���ʧ�ܣ�ѧ���ظ�" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "����:";
    string name;
    Col(7); cin >> name;
    Col(3); cout << "�꼶:";
    string stu_grade;
    Col(7); cin >> stu_grade;
    Col(3); cout << "ѧԺ:(��ѡ��)"; Col(0);
    string stu_college;
    cout << endl << endl << endl;
    system("pause");
    stu_college = course::course_college_menu();
    system("cls");
    Col(3);
    cout << "������ѧ����Ϣ:" << endl;
    cout << "(Ĭ������Ϊ123456)" << endl;
    cout << "ѧ��:" << temp_accountORcourseid_class << endl;
    cout << "����:" << name << endl;
    cout << "�꼶:" << stu_grade << endl;
    cout << "ѧԺ:" << stu_college << endl;
    Col(0);
    string stu_profession;
    if (stu_college != "0")
    {
        Col(3); cout << "רҵ:(��ѡ��)"; Col(0);
        cout << endl << endl << endl;
        system("pause");
        if (stu_college == "ҩѧԺ") {
            stu_profession = course::course1_profession_menu();
        }
        else if (stu_college == "ҽѧԺ") {
            stu_profession = course::course2_profession_menu();
        }
        else if (stu_college == "��ѧԺ") {
            stu_profession = course::course3_profession_menu();
        }
        else if (stu_college == "��ѧԺ") {
            stu_profession = course::course4_profession_menu();
        }
        else if (stu_college == "�ƾ�ѧԺ") {
            stu_profession = course::course5_profession_menu();
        }
        else if (stu_college == "����ѧԺ") {
            stu_profession = course::course6_profession_menu();
        }
        else if (stu_college == "����ѧԺ") {
            stu_profession = course::course7_profession_menu();
        }
        else if (stu_college == "�����ѧԺ") {
            stu_profession = course::course8_profession_menu();
        }
        else if (stu_college == "֪ʶ��ȨѧԺ") {
            stu_profession = course::course9_profession_menu();
        }
        else if (stu_college == "��ѧ����ѧԺ") {
            stu_profession = course::course10_profession_menu();
        }
        else if (stu_college == "��е����ѧԺ") {
            stu_profession = course::course11_profession_menu();
        }
        else if (stu_college == "ũҵ����ѧԺ") {
            stu_profession = course::course12_profession_menu();
        }
        else if (stu_college == "��ʦ����ѧԺ") {
            stu_profession = course::course13_profession_menu();
        }
        else if (stu_college == "������ѧѧԺ") {
            stu_profession = course::course14_profession_menu();
        }
        else if (stu_college == "��ѧ��ѧѧԺ") {
            stu_profession = course::course15_profession_menu();
        }
        else if (stu_college == "���˼����ѧԺ") {
            stu_profession = course::course16_profession_menu();
        }
        else if (stu_college == "������Ϣ����ѧԺ") {
            stu_profession = course::course17_profession_menu();
        }
        else if (stu_college == "��Դ�붯������ѧԺ") {
            stu_profession = course::course18_profession_menu();
        }
        else if (stu_college == "�����뽻ͨ����ѧԺ") {
            stu_profession = course::course19_profession_menu();
        }
        else if (stu_college == "ʳƷ�����﹤��ѧԺ") {
            stu_profession = course::course20_profession_menu();
        }
        else if (stu_college == "��ľ��������ѧѧԺ") {
            stu_profession = course::course21_profession_menu();
        }
        else if (stu_college == "��������ӹ���ѧԺ") {
            stu_profession = course::course22_profession_menu();
        }
        else if (stu_college == "���Ͽ�ѧ�빤��ѧԺ") {
            stu_profession = course::course23_profession_menu();
        }
        else if (stu_college == "�����밲ȫ����ѧԺ") {
            stu_profession = course::course24_profession_menu();
        }
        else if (stu_college == "�������ѧ��ͨ�Ź���ѧԺ") {
            stu_profession = course::course25_profession_menu();
        }
    }
    else {
        stu_profession = "0";
    }
    system("cls");
    Col(3); cout << "������ѧ����Ϣ:" << endl;
    cout << "(Ĭ������Ϊ123456)" << endl;
    cout << "ѧ��:" << temp_accountORcourseid_class << endl;
    cout << "����:" << name << endl;
    cout << "�꼶:" << stu_grade << endl;
    cout << "ѧԺ:" << stu_college << endl;
    cout << "רҵ:" << stu_profession << endl;
    Col(0);
    Col(3); cout << "�༶:";
    string stu_class;
    Col(7); cin >> stu_grade; Col(0);
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
    Col(3); cout << "��ӳɹ�" << endl; Col(0);
    Sleep(1000);
}
void admin::Delete_stu_information()
{
    system("cls");
    Col(3); cout << "������Ҫɾ����ѧ��ѧ��:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "ɾ��ʧ�ܣ���ѧ�Ų�����" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "ɾ���ɹ�" << endl; Col(0);
    Sleep(1000);
}
void admin::Change_stu_password()
{
    system("cls");
    Col(3); cout << "������Ҫ�޸������ѧ��ѧ��:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "�޸�ʧ�ܣ���ѧ�Ų�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    student stu(temp_accountORcourseid_class, "", "", "", "", "", "");
    stu.Change_password();
}
void admin::Add_tea_information()
{
    system("cls");
    Col(3);
    cout << "�������ʦ��Ϣ:" << endl;
    cout << "(Ĭ������Ϊ123456)" << endl;
    cout << "����:";
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϹ����Ƿ��Ѿ��ظ�
    if (Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "���ʧ�ܣ������ظ�" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "����:";
    string name;
    Col(7); cin >> name; Col(0);
    Col(3); cout << "ѧԺ:(��ѡ��)"; Col(0);
    string tea_college;
    cout << endl << endl << endl;
    system("pause");
    tea_college = course::course_college_menu();
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
    Col(3); cout << "��ӳɹ�" << endl; Col(0);
    Sleep(1000);
}
void admin::Delete_tea_information()
{
    system("cls");
    Col(3); cout << "������Ҫɾ���Ľ�ʦ����:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "ɾ��ʧ�ܣ��ù��Ų�����" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "ɾ���ɹ�" << endl; Col(0);
    Sleep(1000);
}
void admin::Change_tea_password()
{
    system("cls");
    Col(3); cout << "������Ҫ�޸�����Ľ�ʦ����:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "�޸�ʧ�ܣ��ù��Ų�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    teacher tea(temp_accountORcourseid_class, "", "", "");
    tea.Change_password();
}
void admin::Add_course_information()
{
    system("cls");
    Col(3); cout << "������γ���Ϣ:" << endl; Col(0);
    Col(3); cout << "�γ̱��:"; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϿγ��Ƿ��Ѿ��ظ�
    if (Is_course_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "���ʧ�ܣ��γ̱���ظ�" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "�γ�����:"; Col(0);
    string course_name;
    Col(7); cin >> course_name; Col(0);
    Col(3); cout << "�꼶:"; Col(0);
    string course_grade;
    Col(7); cin >> course_grade; Col(0);
    Col(3); cout << "ѧԺ:(��ѡ��)"; Col(0);
    string course_college;
    cout << endl << endl << endl;
    system("pause");
    course_college = course::course_college_menu();
    system("cls");
    Col(3); cout << "������γ���Ϣ:" << endl;
    cout << "�γ̱��:" << temp_accountORcourseid_class << endl;
    cout << "�γ�����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    Col(0);
    string course_profession;
    if (course_college != "0")
    {
        Col(3); cout << "רҵ:(��ѡ��)"; Col(0);
        cout << endl << endl << endl;
        system("pause");
        if (course_college == "ҩѧԺ") {
            course_profession = course::course1_profession_menu();
        }
        else if (course_college == "ҽѧԺ") {
            course_profession = course::course2_profession_menu();
        }
        else if (course_college == "��ѧԺ") {
            course_profession = course::course3_profession_menu();
        }
        else if (course_college == "��ѧԺ") {
            course_profession = course::course4_profession_menu();
        }
        else if (course_college == "�ƾ�ѧԺ") {
            course_profession = course::course5_profession_menu();
        }
        else if (course_college == "����ѧԺ") {
            course_profession = course::course6_profession_menu();
        }
        else if (course_college == "����ѧԺ") {
            course_profession = course::course7_profession_menu();
        }
        else if (course_college == "�����ѧԺ") {
            course_profession = course::course8_profession_menu();
        }
        else if (course_college == "֪ʶ��ȨѧԺ") {
            course_profession = course::course9_profession_menu();
        }
        else if (course_college == "��ѧ����ѧԺ") {
            course_profession = course::course10_profession_menu();
        }
        else if (course_college == "��е����ѧԺ") {
            course_profession = course::course11_profession_menu();
        }
        else if (course_college == "ũҵ����ѧԺ") {
            course_profession = course::course12_profession_menu();
        }
        else if (course_college == "��ʦ����ѧԺ") {
            course_profession = course::course13_profession_menu();
        }
        else if (course_college == "������ѧѧԺ") {
            course_profession = course::course14_profession_menu();
        }
        else if (course_college == "��ѧ��ѧѧԺ") {
            course_profession = course::course15_profession_menu();
        }
        else if (course_college == "���˼����ѧԺ") {
            course_profession = course::course16_profession_menu();
        }
        else if (course_college == "������Ϣ����ѧԺ") {
            course_profession = course::course17_profession_menu();
        }
        else if (course_college == "��Դ�붯������ѧԺ") {
            course_profession = course::course18_profession_menu();
        }
        else if (course_college == "�����뽻ͨ����ѧԺ") {
            course_profession = course::course19_profession_menu();
        }
        else if (course_college == "ʳƷ�����﹤��ѧԺ") {
            course_profession = course::course20_profession_menu();
        }
        else if (course_college == "��ľ��������ѧѧԺ") {
            course_profession = course::course21_profession_menu();
        }
        else if (course_college == "��������ӹ���ѧԺ") {
            course_profession = course::course22_profession_menu();
        }
        else if (course_college == "���Ͽ�ѧ�빤��ѧԺ") {
            course_profession = course::course23_profession_menu();
        }
        else if (course_college == "�����밲ȫ����ѧԺ") {
            course_profession = course::course24_profession_menu();
        }
        else if (course_college == "�������ѧ��ͨ�Ź���ѧԺ") {
            course_profession = course::course25_profession_menu();
        }
    }
    else {
        course_profession = "0";
    }
    system("cls");
    Col(3); cout << "������γ���Ϣ:" << endl;
    cout << "�γ̱��:" << temp_accountORcourseid_class << endl;
    cout << "�γ�����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    Col(0);
    Col(3); cout << "����ѧԺ:(��ѡ��)"; Col(0);
    string course_college_open;
    cout << endl << endl << endl;
    system("pause");
    course_college_open = course::course_college_menu();
    system("cls");
    Col(3); cout << "������γ���Ϣ:" << endl;
    cout << "�γ̱��:" << temp_accountORcourseid_class << endl;
    cout << "�γ�����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    Col(0);
    Col(3); cout << "�γ����:(��ѡ��)"; Col(0);
    string course_type;
    cout << endl << endl << endl;
    system("pause");
    course_type = course::course_type_menu();
    system("cls");
    Col(3); cout << "������γ���Ϣ:" << endl;
    cout << "�γ̱��:" << temp_accountORcourseid_class << endl;
    cout << "�γ�����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl;
    Col(0);
    Col(3); cout << "�γ�����:(��ѡ��)"; Col(0);
    string course_nature;
    cout << endl << endl << endl;
    system("pause");
    course_nature = course::course_nature_menu();
    system("cls");
    Col(3); cout << "������γ���Ϣ:" << endl;
    cout << "�γ̱��:" << temp_accountORcourseid_class << endl;
    cout << "�γ�����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl;
    cout << "�γ�����:" << course_nature << endl;
    Col(0);
    Col(3); cout << "�γ̹���:(��ѡ��)"; Col(0);
    string course_belong;
    cout << endl << endl << endl;
    system("pause");
    course_belong = course::course_belong_menu();
    system("cls");
    Col(3); cout << "������γ���Ϣ:" << endl;
    cout << "�γ̱��:" << temp_accountORcourseid_class << endl;
    cout << "�γ�����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl;
    cout << "�γ�����:" << course_nature << endl;
    cout << "�γ̹���:" << course_belong << endl;
    Col(0);
    Col(3); cout << "�Ͽ�����:(��ѡ��)"; Col(0);
    string course_week;
    cout << endl << endl << endl;
    system("pause");
    course_week = course::course_week2_menu();
    system("cls");
    Col(3); cout << "������γ���Ϣ:" << endl;
    cout << "�γ̱��:" << temp_accountORcourseid_class << endl;
    cout << "�γ�����:" << course_name << endl;
    cout << "�꼶:" << course_grade << endl;
    cout << "ѧԺ:" << course_college << endl;
    cout << "רҵ:" << course_profession << endl;
    cout << "����ѧԺ:" << course_college_open << endl;
    cout << "�γ����:" << course_type << endl;
    cout << "�γ�����:" << course_nature << endl;
    cout << "�γ̹���:" << course_belong << endl;
    cout << "�Ͽ�����:" << course_week << endl;
    Col(0);
    Col(3); cout << "�Ͽνڴ�:(��ѡ��)"; Col(0);
    string course_time;
    cout << endl << endl << endl;
    system("pause");
    course_time = course::course_time2_menu();
    system("cls");
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
    Col(3); cout << "��ӳɹ�" << endl; Col(0);
    Sleep(1000);
}
void admin::Delete_course_information()
{
    system("cls");
    Col(3); cout << "������Ҫɾ���Ŀγ̱��:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϿγ��Ƿ����
    if (!Is_course_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "ɾ��ʧ�ܣ��ÿγ̱�Ų�����" << endl; Col(0);
        Sleep(1000);
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
    //ɾ��course_student_list�ļ�����ѧ��ѡ����Ϣ
    remove(("course_student_list\\" + temp_accountORcourseid_class + ".txt").c_str());
    //ɾ��course_teacher_list�ļ����½�ʦѡ����Ϣ
    remove(("course_teacher_list\\" + temp_accountORcourseid_class + ".txt").c_str());
    system("cls");
    Col(3); cout << "ɾ���ɹ�" << endl; Col(0);
    Sleep(1000);
}
void admin::Search_course_information()
{
    course::Search_course_information();
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
    system("pause");
}
void admin::Search_stu_information()
{
    system("cls");
    Col(3); cout << "������Ҫ��ѯ��ѧ��ѧ��:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "��ѯʧ�ܣ���ѧ�Ų�����" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "��ѯ�ɹ�:" << endl; Col(0);
    //����һ����ʱ����������ʾѧ����Ϣ
    student stu(temp_accountORcourseid_class, password, name, stu_class, stu_grade, stu_college, stu_profession);
    stu.Show_stu_information();
}
void admin::Search_tea_information()
{
    system("cls");
    Col(3); cout << "������Ҫ��ѯ�Ľ�ʦ����:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "��ѯʧ�ܣ��ù��Ų�����" << endl; Col(0);
        Sleep(1000);
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
    Col(3); cout << "��ѯ�ɹ�:" << endl; Col(0);
    //����һ����ʱ����������ʾ��ʦ��Ϣ
    teacher tea(temp_accountORcourseid_class, password, name, tea_college);
    tea.Show_tea_information();
}
void admin::Search_stu_course_information()
{
    system("cls");
    Col(3); cout << "������Ҫ��ѯ��ѧ��ѧ��:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "��ѯʧ�ܣ���ѧ�Ų�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    system("cls");
    Col(3); cout << "��ѯ�ɹ�:" << endl; Col(0);
    //����һ����ʱ����������ʾ�α�
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    stu_course_temp.Show_course();
}
void admin::Search_tea_course_information()
{
    system("cls");
    Col(3); cout << "������Ҫ��ѯ�Ľ�ʦ����:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(7); cout << "��ѯʧ�ܣ��ù��Ų�����" << endl; Col(0);
        Sleep(1000);
    }
    system("cls");
    Col(3); cout << "��ѯ�ɹ�:" << endl; Col(0);
    //����һ����ʱ����������ʾ�α�
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    tea_course_temp.Show_tea_course();
}
void admin::Add_stu_course()
{
    system("cls");
    Col(3); cout << "������Ҫ��ӿγ̵�ѧ��ѧ��:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "���ʧ�ܣ���ѧ�Ų�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    //����һ����ʱ��������ѡ��
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    stu_course_temp.Choose_course();
}
void admin::Delete_stu_course()
{
    system("cls");
    Col(3); cout << "������Ҫɾ���γ̵�ѧ��ѧ��:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�ж�ѧ���Ƿ����
    if (!Is_stu_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "ɾ��ʧ�ܣ���ѧ�Ų�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    //����һ����ʱ���������˿�
    stu_course stu_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    stu_course_temp.Drop_course();
}
void admin::Add_tea_course()
{
    system("cls");
    Col(3); cout << "������Ҫ��ӿγ̵Ľ�ʦ����:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "���ʧ�ܣ��ù��Ų�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    //����һ����ʱ����������ӿγ�
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    access_private_tea_course(tea_course_temp);
}
void admin::Delete_tea_course()
{
    system("cls");
    Col(3); cout << "������Ҫɾ���γ̵Ľ�ʦ����:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    //�жϽ�ʦ�Ƿ����
    if (!Is_tea_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "ɾ��ʧ�ܣ��ù��Ų�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    //����һ����ʱ��������ɾ���γ�
    tea_course tea_course_temp("", "", "", "", "", "", "", "", "", "", "", temp_accountORcourseid_class, "", "", "");
    access_private_tea_course1(tea_course_temp);
}
void admin::Search_course_tea_stu_information()
{
    system("cls");
    Col(3); cout << "������Ҫ��ѯ�Ŀγ̱��:" << endl; Col(0);
    Col(7); cin >> temp_accountORcourseid_class; Col(0);
    if (!Is_course_exist(temp_accountORcourseid_class))
    {
        system("cls");
        Col(3); cout << "��ѯʧ�ܣ��ÿγ̱�Ų�����" << endl; Col(0);
        Sleep(1000);
        return;
    }
    //��course_teacher_list�ļ����µĿγ��ļ�
    fstream course_tea_list_file("./course_teacher_list/" + temp_accountORcourseid_class + ".txt", ios::in);
    //��course_student_list�ļ����µĿγ��ļ�
    fstream course_stu_list_file("./course_student_list/" + temp_accountORcourseid_class + ".txt", ios::in);
    string temp;
    //��ȡ��ʦ����
    Col(2); cout << "��ʦ����:" << endl; Col(0);
    while (getline(course_tea_list_file, temp))
    {
        Col(3); cout << "����:" << temp << "\t"; Col(0);
        Col(3); cout << "����:" << Get_tea_name(temp) << endl; Col(0);
    }
    //��ȡѧ������
    Col(2); cout << "ѧ������:" << endl; Col(0);
    while (getline(course_stu_list_file, temp))
    {
        Col(3); cout << "ѧ��:" << temp << "\t"; Col(0);
        Col(3); cout << "����:" << Get_stu_name(temp) << endl; Col(0);
    }
    course_tea_list_file.close();
    course_stu_list_file.close();
    Col(3); cout << endl << endl << endl << "���������������һ�˵�..." << endl; Col(0);
    system("pause");
}
