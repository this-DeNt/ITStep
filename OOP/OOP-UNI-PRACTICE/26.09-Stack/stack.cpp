#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

class Stack
{
	// Нижняя и верхняя границы стека
	enum { EMPTY = -1, FULL = 5 };

	// Массив для хранения данных
	//изначально выделяется память
	char st[FULL + 1];

	// Указатель на вершину стека
	int top;

public:
	// Конструктор
	//добавляет елемент в конец
	Stack();

	// Добавление элемента
	void Push(char c);

	// Извлечение элемента
	char Pop();

	// Очистка стека
	void Clear();

	// Проверка существования элементов в стеке
	bool IsEmpty();

	// Проверка на переполнение стека
	bool IsFull();

	// Количество элементов в стеке
	int GetCount();


	void Print()
	{
		for(int i = 0; i <= top; ++i)
		{
			if (st[i] == ';') {

				std::cout << st[i] << std::endl;
				break;
			}
			std::cout << st[i] << std::endl;
		}
	}

	void initStack() {

    	char temp;
		while(!IsFull()) {
			std::cin >> temp;
			Push(temp);
		}
	}

	char getTopElem() {

		return st[top];
	}

	bool isValidString() {

		size_t _SquCount;
		size_t _CirCount;
		size_t _Braces;

		for (int i = 0; i <= top; ++i) {

			if (st[i] == '[' && st[i] == ']') { ++_SquCount; }

			if (st[i] == '(' && st[i] == ')') { ++_CirCount; }

			if (st[i] == '{' && st[i] == '}') { ++_Braces; }
		}

		if (_SquCount % 2 == 0 && _CirCount % 2 == 0 && _Braces % 2 == 0) {

			return true;
		}

		return false;
	}
};


Stack::Stack()
{
	// Изначально стек пуст
	top = EMPTY;
}

void Stack::Clear()
{
	// Эффективная "очистка" стека 
	// (данные в массиве все еще существуют, 
	// но функции класса, ориентированные на работу с вершиной стека,
	// будут их игнорировать)
	top = EMPTY;
}

bool Stack::IsEmpty()
{
	// Пуст?
	return top == EMPTY;
}

bool Stack::IsFull()
{
	// Полон?
	return top == FULL;
}

int Stack::GetCount()
{
	// Количество присутствующих в стеке элементов
	return top + 1;
}

void Stack::Push(char c)
{
	// Если в стеке есть место, то увеличиваем указатель
	// на вершину стека и вставляем новый элемент
	if (!IsFull())
		st[++top] = c;
}

char Stack::Pop()
{
	// Если в стеке есть элементы, то возвращаем верхний и
	// уменьшаем указатель на вершину стека
	if (!IsEmpty())
		return st[top--];
	else // Если в стеке элементов нет
		return 0;
}

int main()
{
	srand(time(0));
	Stack ST;

	ST.initStack();
	std::cout << "=========" << std::endl;
	ST.Print();

	std::cout << ST.getTopElem();

/*	char c;
	// пока стек не заполнится
	while (!ST.IsFull()) 
	{
		c = rand() % 100;
		ST.Push(c);
	}

	// пока стек не освободится
	while (c = ST.Pop()) 
	{
		cout << c << " ";
	}
	cout << "\n\n";
*/


}

