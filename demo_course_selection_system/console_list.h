#ifndef CONSOLE_LIST
#define CONSOLE_LIST
#ifndef CONIO
#define CONIO
#include <conio.h>
#endif
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif
using namespace std;

inline void Col(int ColN);//�����Զ����еı�����ɫ

class List
{
private:
	bool Breakword;//�����ж��Ƿ�����ѭ��
	int List_max;//���ڼ�¼���ѡ����
	int List_selection;//���ڼ�¼��ǰѡ��
public:
	//���캯��
	List(int List_max) :List_max(List_max), List_selection(1), Breakword(0) {}
	//��������
	inline bool GetBreakword();//��ȡ�Ƿ�����ѭ��
	inline void SetBreakword(bool Breakword);//�����Ƿ�����ѭ��
	inline int GetListSelection();//��ȡ��ǰѡ��
	inline void SetListSelection(int List_selection);//���õ�ǰѡ��
	inline int NumberCheck(int Number);//���ѭ�������Ƿ񳬳����ޣ�����Ƿ������ֵ
	void Deal_input();//�����û�����
};

inline void Col(int ColN)//�����Զ����еı�����ɫ
{
	if (ColN == 0)cout << "\033[0m";//�����ɫ
	else
	{
		cout << "\033[04m\033[1m\033[7m";
		if (ColN == 1)cout << "\033[31m";//��ɫ
		else if (ColN == 2)cout << "\033[32m";//��ɫ
		else if (ColN == 3)cout << "\033[33m";//��ɫ
		else if (ColN == 4)cout << "\033[34m";//��ɫ
		else if (ColN == 5)cout << "\033[35m";//��ɫ
		else if (ColN == 6)cout << "\033[36m";//����
		else if (ColN == 7)cout << "\033[37m";//��ɫ
	}
}

//List��
//��������
inline bool List::GetBreakword()
{
	return Breakword;
}
inline void List::SetBreakword(bool Breakword)
{
	this->Breakword = Breakword;
}
inline int List::GetListSelection()
{
	return List_selection;
}
inline void List::SetListSelection(int List_selection)
{
	this->List_selection = List_selection;
}
inline int List::NumberCheck(int Number)
{
	if (Number > List_max)
	{
		Number = List_max;
		return Number;
	}
	else return Number;
}
inline void List::Deal_input()
{
	char CHOICE = _getch();
	switch (CHOICE)
	{
	case '1': List_selection = NumberCheck(1); Breakword = 1; break;
	case '2': List_selection = NumberCheck(2); Breakword = 1; break;
	case '3': List_selection = NumberCheck(3); Breakword = 1; break;
	case '4': List_selection = NumberCheck(4); Breakword = 1; break;
	case '5': List_selection = NumberCheck(5); Breakword = 1; break;
	case '6': List_selection = NumberCheck(6); Breakword = 1; break;
	case '7': List_selection = NumberCheck(7); Breakword = 1; break;
	case '8': List_selection = NumberCheck(8); Breakword = 1; break;
	case '9': List_selection = NumberCheck(9); Breakword = 1; break;
	case 72://��ʾС���̵����ϼ�ͷ
	case 'W':
	case 'w':
		if (List_selection == 1)
		{
			List_selection = List_max;
			break;
		}
		List_selection--;
		break;
	case 80://��ʾС���̵����¼�ͷ
	case 'S':
	case 's':
		if (List_selection == List_max)
		{
			List_selection = 1;
			break;
		}
		List_selection++;
		break;
	case '\r':
		Breakword = 1;
		break;
	}
}

#endif