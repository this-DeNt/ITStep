#include <iostream> 
 
#include <string.h> 
 
class Exception 
{ 
protected: 
 
    char m_message[100]; 
 
public: 
 
    Exception(const char* message); 
 
    virtual const char* GetMessage() const; 
}; 
 
class Divide_by_zero : public Exception 
{ 
private: 
 
public: 
    Divide_by_zero(const char* zero);
    virtual const char* GetMessage() const; 
 
}; 
 
const char* Divide_by_zero::GetMessage() const { return m_message; } 
 
Divide_by_zero::Divide_by_zero(const char* mes) : Exception(mes) 
{} 
 
 
//#include "Exception.h" 
 
Exception::Exception(const char* message) {  strcpy_s(m_message, message); } 
 
const char* Exception::GetMessage() const { return m_message; } 
 
class IdexExp:public Exception {

public:

    IdexExp(const char* msg):Exception(msg) {}

    const char* GetMessage() const {

        return m_message;
    }
};
 
 
 
//#include "Exception.h" 
//#include "Exception.h" 
 
using namespace std; 
 
int main() 
{ 
    double numerator = 0.0; 
    double denominator = 0.0; 
 
    try 
    { 
        cout << "Enter a numerator: "; 
        cin >> numerator; 
 
        cout << "Enter a denominator: "; 
        cin >> denominator; 
 
        if (denominator == 0.0) 
        { 
            throw Divide_by_zero("Divide by zero"); 
        } 
        else 
        { 
            cout << "Result = " << numerator / denominator << endl; 
        } 
 
        int mas[3] {1,2,3}; 
        for (int i = 0; i < 5; ++i) 
        { 
            if(i >=3) 
            { 
                throw IdexExp("Wrong Index"); // ТУТ НАДО ГЕНИРИРОВАТЬ ИСКЛЮЧЕНИЕ ТИПА IndexException 
 
            }
            std::cout << mas[i] << "    "; 
        } 
        std::cout << std::endl; 
    } 
     
    catch (Exception exception) 
    { 
        cout << exception.GetMessage() << endl; 
    } 
 
    return 0; 
}