#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

class QueuePriority
{
	// �������
	int* Wait;
	// ���������
	int* Pri;
	// ������������ ������ �������
	int MaxQueueLength;
	// ������� ������ �������
	int QueueLength;

public:
	// �����������
	QueuePriority(int m);

	//����������
	~QueuePriority();

	// ���������� ��������
	void Add(int c, int p);

	// ���������� ��������
	int Extract();

	// ������� �������
	void Clear();

	// �������� ������������� ��������� � �������
	bool IsEmpty();

	// �������� �� ������������ �������
	bool IsFull();

	// ���������� ��������� � �������
	int GetCount();

	//������������ �������
	void Show();
};

void QueuePriority::Show() {
	cout << "\n-------------------------------------\n";
	//������������ �������
	for (int i = 0; i < QueueLength; i++) {
		cout << Wait[i] << " - " << Pri[i] << "\n\n";
	}
	cout << "\n-------------------------------------\n";
}

QueuePriority::~QueuePriority()
{
	//�������� �������
	delete[]Wait;
	delete[]Pri;
}

QueuePriority::QueuePriority(int m)
{
	//�������� ������
	MaxQueueLength = m;
	//������� �������
	Wait = new int[MaxQueueLength];
	Pri = new int[MaxQueueLength];
	// ���������� ������� �����
	QueueLength = 0;
}

void QueuePriority::Clear()
{
	// ����������� "�������" ������� 
	QueueLength = 0;
}

bool QueuePriority::IsEmpty()
{
	// ����?
	return QueueLength == 0;
}

bool QueuePriority::IsFull()
{
	// �����?
	return QueueLength == MaxQueueLength;
}

int QueuePriority::GetCount()
{
	// ���������� �������������� � ������� ���������
	return QueueLength;
}

void QueuePriority::Add(int c, int p)
{
	// ���� � ������� ���� ��������� �����, �� ����������� ����������
	// �������� � ��������� ����� �������
	if (!IsFull()) {
		Wait[QueueLength] = c;
		Pri[QueueLength] = p;
		QueueLength++;
	}
}

int QueuePriority::Extract()
{
	// ���� � ������� ���� ��������, �� ���������� ���, 
	// � �������� ��������� ��������� � �������� �������	
	if (!IsEmpty()) {


		//����� ������������ ������� - �������
		int max_pri = Pri[0];
		//� ������������ ������ = 0
		int pos_max_pri = 0;

		//���� ���������
		for (int i = 1; i < QueueLength; i++)
			//���� �������� ����� ������������ �������
			if (max_pri < Pri[i]) {
				max_pri = Pri[i];
				pos_max_pri = i;
			}

		//����������� ������������ �������
		int temp1 = Wait[pos_max_pri];
		int temp2 = Pri[pos_max_pri];

		//�������� ��� ��������
		for (int i = pos_max_pri; i < QueueLength - 1; i++) {
			Wait[i] = Wait[i + 1];
			Pri[i] = Pri[i + 1];
		}
		//��������� ����������
		QueueLength--;
		// ������� ������������ ��������	
		return temp1;

	}
	else return -1;
}

void main()
{
	srand(time(0));

	//�������� �������
	QueuePriority QUP(25);

	//���������� ����� ���������
	for (int i = 0; i < 5; i++) {

		// �������� �� 0 �� 99 (������������)
		// � ��������� �� 0 �� 11 (������������)
		QUP.Add(rand() % 100, rand() % 12+1);
	}
	//����� �������
	QUP.Show();

	//���������� ��������
	QUP.Extract();

	//����� �������
	QUP.Show();
}

