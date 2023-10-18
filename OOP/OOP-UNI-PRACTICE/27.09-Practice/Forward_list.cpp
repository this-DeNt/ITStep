#include <iostream>
#include <cstring>
using namespace std;


struct Element
{
	// 
	char data;
	//    
	Element* Next;
};

//  
class List
{
	//    
	Element* Head;
	//    
	Element* Tail;
	//   
	int Count;

public:
	// 
	List();
	// 
	~List();

	//    
	// (   )
	void Add(char data);

	void addSpec(char data, int pos);
	void delSpec(int pos);

	//   
	// (  )
	void Del();
	//   
	void DelAll();

	//   
	// (    )
	void Print();

	//   ,   
	int GetCount();
};

List::List()
{
	//   
	Head = Tail = NULL;
	Count = 0;
}

List::~List()
{
	//   
	DelAll();
}

int List::GetCount()
{
	//   
	return Count;
}

void List::Add(char data)
{
	//   
	Element* temp = new Element;

	//  
	temp->data = data;
	//   
	temp->Next = NULL;
	//      
	//     
	if (Head != NULL) {
		Tail->Next = temp;
		Tail = temp;
	}
	//    
	//    
	else {
		Head = Tail = temp;
	}
}

void List::addSpec(char data, int pos)
{
	Element* temp = Head;

	while (pos - 1 > 0) {

		temp = temp->Next;
		--pos;
	}

	Element* addData;
	addData->data = data;
	addData->Next = temp->Next;

	temp->Next = addData;
}

void List::delSpec(int pos)
{
	Element* temp = Head;

	while (pos - 1 > 0) {

		temp = temp->Next;
		--pos;
	}

	Element* del = temp->Next;
	temp->Next = del->Next;

	delete del;
}

void List::Del()
{
	//    
	Element* temp = Head;
	//     
	Head = Head->Next;
	//    
	delete temp;
}

void List::DelAll()
{
	//    
	while (Head != 0)
		//    
		Del();
}

void List::Print()
{
	//    
	Element* temp = Head;
	//    
	while (temp != 0)
	{
		//  
		cout << temp->data << " ";
		//    
		temp = temp->Next;
	}

	cout << "\n\n";
}

//  
int main()
{
	//    List
	List lst;

	//  
	char s[] = "Hello, World !!!\n";
	//  
	cout << s << "\n\n";
	//   
	int len = strlen(s);
	//    
	for (int i = 0; i < len; i++)
		lst.Add(s[i]);
	//   
	lst.Print();
	//    
	
	lst.addSpec('a', 5);
	lst.Print();
}

