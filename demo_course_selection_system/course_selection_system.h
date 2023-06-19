#ifndef COURSE_SELECTION_SYSTEM
#define COURSE_SELECTION_SYSTEM
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

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
    //��������:��ѯ�γ���Ϣ
    static void Search_course_information();
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
    //����4:��ʾ��һ�ڿε�ʱ�������
    void Show_next_course();
};
//��ʦ�ڿ���Ϣ������
class tea_course :public course
{
private:
    string tea_account;//��ʦ����
    string tea_temp_course_id;//�������ڿ���Ϣ�Ŀγ̱��
    string tea_temp_course_week;//�������ڿ���Ϣ�Ŀγ�����
    string tea_temp_course_time;//�������ڿ���Ϣ�Ŀγ̽ڴ�
    //��Ԫ��
    friend class admin;
    //���ݴ������γ̱�Ż�ÿγ����ںͽڴ�
    void Get_course_week_time();
    //�ڿ��Ƿ��ͻ
    bool Isconflict();
    //�˿��Ƿ�Ϊ���ڵĿγ�
    bool Iscourse(string course_id);
    //����α�
    string Get_course(string course_week, string course_time);
    //����1������ڿ���Ϣ(ֻ�ɹ���Ա����)
    void Add_tea_course();
    //����2��ɾ���ڿ���Ϣ��ֻ�ɹ���Ա����
    void Delete_tea_course();
public:
    //���캯��
    tea_course(string course_id, string course_name, string course_grade, string course_college, string course_profession, string course_college_open, string course_type, string course_nature, string course_belong, string course_week, string course_time, string tea_account, string tea_temp_course_id, string tea_temp_course_week, string tea_temp_course_time) :course(course_id, course_name, course_grade, course_college, course_profession, course_college_open, course_type, course_nature, course_belong, course_week, course_time), tea_account(tea_account), tea_temp_course_id(tea_temp_course_id), tea_temp_course_week(tea_temp_course_week), tea_temp_course_time(tea_temp_course_time) {};
    //����3����ʾ�ڿοα�
    void Show_tea_course();
    //����4����ʾ��һ�ڿε�ʱ�������
    void Show_next_course();
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
    //����7:��һ�ڿε�ʱ�������
    void Show_next_course();
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
    //����4:��ʾ�α�
    void Show_course();
    //����5:���̿γ̵�ѧ������
    void Show_stu_list();
    //����6:��һ�ڿε�ʱ�������
    void Show_next_course();
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
    //���ʽ�ʦ�ڿ���Ϣ���˽�г�Աѡ�κ���
    inline void access_private_tea_course(tea_course& tea_course_temp);
    //���ʽ�ʦ�ڿ���Ϣ���˽�г�Ա�˿κ���
    inline void access_private_tea_course1(tea_course& tea_course_temp);
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
