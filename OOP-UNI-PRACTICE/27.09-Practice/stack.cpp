#include <iostream>
#include <time.h>
using namespace std;

class Stack // LIFO
{
	// ������ � ������� ������� �����
	enum { EMPTY = -1, FULL = 20 };  // const int EMPTY=-1, FULL=20;
	// ������ ��� �������� ������
	char st[FULL + 1];
	// ��������� �� ������� �����
	int top;
public:
	// �����������
	Stack();
	// ���������� ��������
	void Push(char c);
	// ���������� ��������
	char Pop();
	// ������� �����
	void Clear();
	// �������� ������������� ��������� � �����
	bool IsEmpty();
	// �������� �� ������������ �����
	bool IsFull();
	// ���������� ��������� � �����
	int GetCount();
	void Print()
	{
		for (int i = 0; i <= top; i++)
		{
			cout << st[i] << "\t";
		}
		cout << endl;
	}
};


Stack::Stack()
{
	// ���������� ���� ����
	top = EMPTY;
}

void Stack::Clear()
{
	// ����������� "�������" ����� 
	// (������ � ������� ��� ��� ����������, 
	// �� ������� ������, ��������������� �� ������ � �������� �����,
	// ����� �� ������������)
	top = EMPTY;
}

bool Stack::IsEmpty()
{
	// ����?
	return top == EMPTY;
}

bool Stack::IsFull()
{
	// �����?
	return top == FULL;
}

int Stack::GetCount()
{
	// ���������� �������������� � ����� ���������
	return top + 1;
}

void Stack::Push(char c)
{
	// ���� � ����� ���� �����, �� ����������� ���������
	// �� ������� ����� � ��������� ����� �������
	if (!IsFull())
		st[++top] = c;
}

char Stack::Pop()
{
	// ���� � ����� ���� ��������, �� ���������� ������� �
	// ��������� ��������� �� ������� �����
	if (!IsEmpty())
		return st[top--];
	else // ���� � ����� ��������� ���
		return 0;
}

void main()
{
	srand(time(0));

	Stack ST;

	ST.Push('A');
	ST.Push('B');
	ST.Push('C');
	ST.Push('D');
	ST.Print();

char r = ST.Pop();
cout << r << endl;
	ST.Print();
	ST.Clear();
	ST.Print();	
}

