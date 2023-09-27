#include <iostream>
using namespace std;

struct Elem
{
    int data; // 
    Elem* next, * prev;
};

class List
{
    // , 
    Elem* Head, * Tail;
    //  
    int Count;

public:

    // 
    List();
    //  
    List(const List&);
    // 
    ~List();

    //  
    int GetCount();
    //   
    Elem* GetElem(int);

    //   
    void DelAll();
    void Del(int pos);

    //    
    void AddHead(int n);

    //  
    void Print();
    
    int returnTail();

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

void List::Del(int pos) 
{ 
    // если параметр отсутствует или равен 0, то запрашиваем его 
    if (pos == 0) 
    { 
        cout << "Input position: "; 
        cin >> pos; 
    } 
    // Позиция от 1 до Count? 
    if (pos < 1 || pos > Count) 
    { 
        // Неверная позиция 
        cout << "Incorrect position !!!\n"; 
        return; 
    } 
 
    // Счетчик 
    int i = 1; 
 
    Elem* Del = Head; 
 
    while (i < pos) 
    { 
        // Доходим до элемента,  
        // который удаляется 
        Del = Del->next; 
        i++; 
    } 
 
    // Доходим до элемента,  
    // который предшествует удаляемому 
    Elem* PrevDel = Del->prev; 
    // Доходим до элемента, который следует за удаляемым 
    Elem* AfterDel = Del->next; 
 
    // Если удаляем не голову 
    if (PrevDel != 0 && Count != 1) 
        PrevDel->next = AfterDel; 
    // Если удаляем не хвост 
    if (AfterDel != 0 && Count != 1) 
        AfterDel->prev = PrevDel; 
 
    // Удаляются крайние? 
    if (pos == 1) 
        Head = AfterDel; 
    if (pos == Count) 
        Tail = PrevDel; 
 
    // Удаление элемента 
    delete Del; 
 
    Count--; 
}

void List::AddHead(int n)
{
    //  
    Elem* temp = new Elem;

    //  
    temp->prev = 0;
    //  
    temp->data = n;
    //  -  
    temp->next = Head;

    //   ?
    if (Head != 0)
        Head->prev = temp;

    //   ,       
    if (Count == 0)
        Head = Tail = temp;
    else
        //    - 
        Head = temp;

    Count++;
}

void List::Print()
{
    //     ,    
    //   ,   
    if (Count != 0)
    {
        Elem* temp = Head;
        cout << "( ";
        while (temp->next != 0)
        {
            cout << temp->data << ", ";
            temp = temp->next;
        }

        cout << temp->data << " )\n";
    }
}

void List::DelAll()
{
    //   ,     
    while (Count != 0)
        Del(1);
}

int List::GetCount()
{
    return Count;
}

int List::returnTail()
{
    int temp = Tail->data;

    Elem* newTail = Tail->prev;

    delete Tail;
    newTail->next = nullptr;

    Tail = newTail;

    return temp;
}

int main() {

    List lst;

    lst.AddHead(5);
    lst.AddHead(4);
    lst.AddHead(3);
    lst.AddHead(2);

    std::cout << lst.returnTail() << std::endl;

    lst.Print();

    std::cout << lst.returnTail() << std::endl;

    lst.Print();
}
