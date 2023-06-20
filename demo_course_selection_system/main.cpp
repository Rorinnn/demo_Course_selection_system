#include "console_list.h"
#include "course_selection_system.h"
using namespace std;

void main_menu();
void main_menu_work(int Option_selection);
void stu_menu();
void tea_menu();
void admin_menu();
void admin_stu_menu(admin& ad);
void admin_tea_menu(admin& ad);
void admin_admin_menu(admin& ad);
void admin_course_menu(admin& ad);

int main()
{
	main_menu();
	return 0;
}

//���˵�
void main_menu()
{
	List main_menu_list(4);
	while (true)
	{
		while (true)
		{
			system("cls");
			Col(1); cout << "                                                                \n"; Col(0);
			Col(1); cout << " ";
			Col(3); cout << "                      ��ӭ����ѧ��ѡ��ϵͳ                    "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << " ";
			Col(3); cout << "��ѡ�����ĵ�¼��ʽ��                                          "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << " ";
			if (main_menu_list.GetListSelection() == 1) Col(7);
			else Col(3);
			cout << "                         ѧ����¼                             "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << " ";
			Col(3); cout << "                                                              "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << " ";
			if (main_menu_list.GetListSelection() == 2) Col(7);
			else Col(3);
			cout << "                         ��ʦ��¼                             "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << " ";
			Col(3); cout << "                                                              "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << " ";
			if (main_menu_list.GetListSelection() == 3) Col(7);
			else Col(3);
			cout << "                         ����Ա��¼                           "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << " ";
			Col(3); cout << "                                                              "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << " ";
			if (main_menu_list.GetListSelection() == 4) Col(7);
			else Col(3);
			cout << "                         �˳�ϵͳ                             "; Col(0); Col(1); cout << " \n"; Col(0);
			Col(1); cout << "                                                                \n"; Col(0);
			main_menu_list.Deal_input();
			if (main_menu_list.GetBreakword())
			{
				main_menu_list.SetBreakword(0);
				break;
			}
		}
		main_menu_work(main_menu_list.GetListSelection());
	}
}
void main_menu_work(int Option_selection)
{
	switch (Option_selection)
	{
	case 1:stu_menu(); break;
	case 2:tea_menu(); break;
	case 3:admin_menu(); break;
	case 4:exit(0); break;
	}
}

//ѧ���˵�
void stu_menu()
{
	List stu_menu_list(8);
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
			while (true)
			{
				system("cls");
				Col(3); cout << "             ѧ���˵�           " << endl; cout << "  ";
				if (stu_menu_list.GetListSelection() == 1) Col(7);
				else Col(6);
				cout << "           1.�޸�����       "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (stu_menu_list.GetListSelection() == 2) Col(7);
				else Col(6);
				cout << "         2.��ʾ������Ϣ     "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (stu_menu_list.GetListSelection() == 3) Col(7);
				else Col(6);
				cout << "         3.��ѯ�γ���Ϣ     "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (stu_menu_list.GetListSelection() == 4) Col(7);
				else Col(6);
				cout << "             4.ѡ��         "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (stu_menu_list.GetListSelection() == 5) Col(7);
				else Col(6);
				cout << "             5.�˿�         "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (stu_menu_list.GetListSelection() == 6) Col(7);
				else Col(6);
				cout << "           6.��ʾ�α�       "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (stu_menu_list.GetListSelection() == 7) Col(7);
				else Col(6);
				cout << "           7.��һ�ڿ�       "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (stu_menu_list.GetListSelection() == 8) Col(7);
				else Col(6);
				cout << "           8.������ҳ       "; Col(3); cout << "  "; Col(0); cout << endl;
				Col(3); cout << "                                " << endl; Col(0);
				if (stu_menu_list.GetListSelection() == -1) { cout << "��ҳ��û����һҳ"; stu_menu_list.SetListSelection(1); }
				if (stu_menu_list.GetListSelection() == -2) { cout << "��ҳ��û����һҳ"; stu_menu_list.SetListSelection(1); }
				stu_menu_list.Deal_input();
				if (stu_menu_list.GetBreakword())
				{
					stu_menu_list.SetBreakword(0);
					break;
				}
			}
			switch (stu_menu_list.GetListSelection())
			{
				case 1: {stu.Change_password(); break; }
				case 2: {stu.Show_stu_information(); break; }
				case 3: {stu.Course_search(); break; }
				case 4: {stu.Choose_course(); break; }
				case 5: {stu.Drop_course(); break; }
				case 6: {stu.Show_course(); break; }
				case 7: {stu.Show_next_course(); break; }
				case 8: {stu_menu_list.SetBreakword(1); break; }
			}
			if (stu_menu_list.GetBreakword())
			{
				stu_menu_list.SetBreakword(0);
				break;
			}
		}
	}
}

//��ʦ�˵�
void tea_menu()
{
	List tea_menu_list(7);
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
			while (true)
			{
				system("cls");
				Col(3); cout << "                   ��ʦ�˵�                 " << endl; cout << "  ";
				if (tea_menu_list.GetListSelection() == 1) Col(7);
				else Col(6);
				cout << "                 �޸�����               "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (tea_menu_list.GetListSelection() == 2) Col(7);
				else Col(6);
				cout << "               ��ʾ������Ϣ             "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (tea_menu_list.GetListSelection() == 3) Col(7);
				else Col(6);
				cout << "               ��ѯ�γ���Ϣ             "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (tea_menu_list.GetListSelection() == 4) Col(7);
				else Col(6);
				cout << "                 ��ʾ�α�               "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (tea_menu_list.GetListSelection() == 5) Col(7);
				else Col(6);
				cout << "           ��ʾ���̿γ̵�ѧ������       "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (tea_menu_list.GetListSelection() == 6) Col(7);
				else Col(6);
				cout << "                 ��һ�ڿ�               "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (tea_menu_list.GetListSelection() == 7) Col(7);
				else Col(6);
				cout << "                 ������ҳ               "; Col(3); cout << "  "; Col(0); cout << endl;
				Col(3); cout << "                                            " << endl; Col(0);
				tea_menu_list.Deal_input();
				if (tea_menu_list.GetBreakword())
				{
					tea_menu_list.SetBreakword(0);
					break;
				}
			}
			switch (tea_menu_list.GetListSelection())
			{
			case 1: {tea.Change_password(); break; }
			case 2: {tea.Show_tea_information(); break; }
			case 3: {tea.Course_search(); break; }
			case 4: {tea.Show_course(); break; }
			case 5: {tea.Show_stu_list(); break; }
			case 6: {tea.Show_next_course(); break; }
			case 7: {tea_menu_list.SetBreakword(1); break; }
			}
			if (tea_menu_list.GetBreakword())
			{
				tea_menu_list.SetBreakword(0);
				break;
			}
		}
	}
}

//����Ա�˵�
void admin_menu()
{
	List admin_menu_list(5);
	system("cls");
	cout << "�����������˺�:" << endl;
	string account;
	cin >> account;
	cout << "��������������:" << endl;
	string password;
	cin >> password;
	admin ad(account, password, "");
	if (ad.Login())
	{
		while (true)
		{
			while (true)
			{
				system("cls");
				Col(3); cout << "             ����Ա--�˵�               " << endl; cout << "  ";
				if (admin_menu_list.GetListSelection() == 1) Col(7);
				else Col(6);
				cout << "           1.��ѧ������             "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (admin_menu_list.GetListSelection() == 2) Col(7);
				else Col(6);
				cout << "           2.�Խ�ʦ����             "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (admin_menu_list.GetListSelection() == 3) Col(7);
				else Col(6);
				cout << "           3.�Թ���Ա����           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (admin_menu_list.GetListSelection() == 4) Col(7);
				else Col(6);
				cout << "           4.�Կγ̲���             "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
				Col(3); cout << " ";
				if (admin_menu_list.GetListSelection() == 5) Col(7);
				else Col(6);
				cout << "           5.������ҳ               "; Col(3); cout << "  "; Col(0); cout << endl;
				Col(3); cout << "                                        " << endl; Col(0);
				admin_menu_list.Deal_input();
				if (admin_menu_list.GetBreakword())
				{
					admin_menu_list.SetBreakword(0);
					break;
				}
			}
			switch (admin_menu_list.GetListSelection())
			{
			case 1: {admin_stu_menu(ad); break; }
			case 2: {admin_tea_menu(ad); break; }
			case 3: {admin_admin_menu(ad); break; }
			case 4: {admin_course_menu(ad); break; }
			case 5: {admin_menu_list.SetBreakword(1); break; }
			}
			if (admin_menu_list.GetBreakword())
			{
				admin_menu_list.SetBreakword(0);
				break;
			}
		}
	}
}

//����Ա--ѧ�������˵�
void admin_stu_menu(admin& ad)
{
	List admin_stu_menu_list(8);
	while (true)
	{
		while (true)
		{
			system("cls");
			Col(3); cout << "             ����Ա--�˵�               " << endl; cout << "  ";
			if (admin_stu_menu_list.GetListSelection() == 1) Col(7);
			else Col(6);
			cout << "           1.���ѧ����Ϣ           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_stu_menu_list.GetListSelection() == 2) Col(7);
			else Col(6);
			cout << "           2.ɾ��ѧ����Ϣ           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_stu_menu_list.GetListSelection() == 3) Col(7);
			else Col(6);
			cout << "           3.�޸�ѧ������           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_stu_menu_list.GetListSelection() == 4) Col(7);
			else Col(6);
			cout << "           4.��ѯѧ����Ϣ           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_stu_menu_list.GetListSelection() == 5) Col(7);
			else Col(6);
			cout << "           5.��ѯѧ��ѡ����Ϣ       "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_stu_menu_list.GetListSelection() == 6) Col(7);
			else Col(6);
			cout << "           6.���ѧ��ѡ��           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_stu_menu_list.GetListSelection() == 7) Col(7);
			else Col(6);
			cout << "           7.ɾ��ѧ��ѡ��           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_stu_menu_list.GetListSelection() == 8) Col(7);
			else Col(6);
			cout << "           8.������һҳ             "; Col(3); cout << "  "; Col(0); cout << endl;
			Col(3); cout << "                                        " << endl; Col(0);
			admin_stu_menu_list.Deal_input();
			if (admin_stu_menu_list.GetBreakword())
			{
				admin_stu_menu_list.SetBreakword(0);
				break;
			}
		}
		switch (admin_stu_menu_list.GetListSelection())
		{
			case 1: {ad.Add_stu_information(); break; }
			case 2: {ad.Delete_stu_information(); break; }
			case 3: {ad.Change_stu_password(); break; }
			case 4: {ad.Search_stu_information(); break; }
			case 5: {ad.Search_stu_course_information(); break; }
			case 6: {ad.Add_stu_course(); break; }
			case 7: {ad.Delete_stu_course(); break; }
			case 8: {admin_stu_menu_list.SetBreakword(1); break; }
		}
		if (admin_stu_menu_list.GetBreakword())
		{
			admin_stu_menu_list.SetBreakword(0);
			break;
		}
	}
}

//����Ա--��ʦ�����˵�
void admin_tea_menu(admin& ad)
{
	List admin_tea_menu_list(8);
	while (true)
	{
		while (true)
		{
			system("cls");
			Col(3); cout << "             ����Ա--�˵�               " << endl; cout << "  ";
			if (admin_tea_menu_list.GetListSelection() == 1) Col(7);
			else Col(6);
			cout << "           1.��ӽ�ʦ��Ϣ           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_tea_menu_list.GetListSelection() == 2) Col(7);
			else Col(6);
			cout << "           2.ɾ����ʦ��Ϣ           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_tea_menu_list.GetListSelection() == 3) Col(7);
			else Col(6);
			cout << "           3.�޸Ľ�ʦ����           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_tea_menu_list.GetListSelection() == 4) Col(7);
			else Col(6);
			cout << "           4.��ѯ��ʦ��Ϣ           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_tea_menu_list.GetListSelection() == 5) Col(7);
			else Col(6);
			cout << "           5.��ѯ��ʦ�ڿ���Ϣ       "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_tea_menu_list.GetListSelection() == 6) Col(7);
			else Col(6);
			cout << "           6.��ӽ�ʦ�ڿ�           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_tea_menu_list.GetListSelection() == 7) Col(7);
			else Col(6);
			cout << "           7.ɾ����ʦ�ڿ�           "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_tea_menu_list.GetListSelection() == 8) Col(7);
			else Col(6);
			cout << "           8.������һҳ             "; Col(3); cout << "  "; Col(0); cout << endl;
			Col(3); cout << "                                        " << endl; Col(0);
			admin_tea_menu_list.Deal_input();
			if (admin_tea_menu_list.GetBreakword())
			{
				admin_tea_menu_list.SetBreakword(0);
				break;
			}
		}
		switch (admin_tea_menu_list.GetListSelection())
		{
			case 1: {ad.Add_tea_information(); break; }
			case 2: {ad.Delete_tea_information(); break; }
			case 3: {ad.Change_tea_password(); break; }
			case 4: {ad.Search_tea_information(); break; }
			case 5: {ad.Search_tea_course_information(); break; }
			case 6: {ad.Add_tea_course(); break; }
			case 7: {ad.Delete_tea_course(); break; }
			case 8: {admin_tea_menu_list.SetBreakword(1); break; }
		}
		if (admin_tea_menu_list.GetBreakword())
		{
			admin_tea_menu_list.SetBreakword(0);
			break;
		}
	}
}

//����Ա--����Ա�����˵�
void admin_admin_menu(admin &ad)
{
	List admin_admin_menu_list(3);
	while (true)
	{
		while (true)
		{
			system("cls");
			Col(3); cout << "                 ����Ա--�˵�                " << endl; cout << "  ";
			if (admin_admin_menu_list.GetListSelection() == 1) Col(7);
			else Col(6);
			cout << "               1.�޸�����                "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_admin_menu_list.GetListSelection() == 2) Col(7);
			else Col(6);
			cout << "               2.��ʾ������Ϣ            "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_admin_menu_list.GetListSelection() == 3) Col(7);
			else Col(6);
			cout << "               3.������һҳ              "; Col(3); cout << "  "; Col(0); cout << endl;
			Col(3); cout << "                                             " << endl; Col(0);
			admin_admin_menu_list.Deal_input();
			if (admin_admin_menu_list.GetBreakword())
			{
				admin_admin_menu_list.SetBreakword(0);
				break;
			}
		}
		switch (admin_admin_menu_list.GetListSelection())
		{
			case 1: {ad.Change_password(); break; }
			case 2: {ad.Show_admin_information(); break; }
			case 3: {admin_admin_menu_list.SetBreakword(1); break; }
		}
		if (admin_admin_menu_list.GetBreakword())
		{
			admin_admin_menu_list.SetBreakword(0);
			break;
		}
	}
}

//����Ա--�γ̲����˵�
void admin_course_menu(admin& ad)
{
	List admin_course_menu_list(5);
	while (true)
	{
		while (true)
		{
			system("cls");
			Col(3); cout << "                   ����Ա--�˵�                    " << endl; cout << "  ";
			if (admin_course_menu_list.GetListSelection() == 1) Col(7);
			else Col(6);
			cout << "              1.��ӿγ���Ϣ                   "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_course_menu_list.GetListSelection() == 2) Col(7);
			else Col(6);
			cout << "              2.ɾ���γ���Ϣ                   "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_course_menu_list.GetListSelection() == 3) Col(7);
			else Col(6);
			cout << "              3.��ѯ�γ���Ϣ                   "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_course_menu_list.GetListSelection() == 4) Col(7);
			else Col(6);
			cout << "              4.��ѯĳ�γ̵Ľ�ʦ��ѧ������     "; Col(3); cout << "  "; Col(0); cout << endl; Col(3); cout << " ";
			Col(3); cout << " ";
			if (admin_course_menu_list.GetListSelection() == 5) Col(7);
			else Col(6);
			cout << "              5.������һҳ                     "; Col(3); cout << "  "; Col(0); cout << endl;
			Col(3); cout << "                                                   " << endl; Col(0);
			admin_course_menu_list.Deal_input();
			if (admin_course_menu_list.GetBreakword())
			{
				admin_course_menu_list.SetBreakword(0);
				break;
			}
		}
		switch (admin_course_menu_list.GetListSelection())
		{
			case 1: {ad.Add_course_information(); break; }
			case 2: {ad.Delete_course_information(); break; }
			case 3: {ad.Search_course_information(); break; }
			case 4: {ad.Search_course_tea_stu_information(); break; }
			case 5: {admin_course_menu_list.SetBreakword(1); break; }
		}
		if (admin_course_menu_list.GetBreakword())
		{
			admin_course_menu_list.SetBreakword(0);
			break;
		}
	}
}