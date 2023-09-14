#include "class.cpp" 
#include <iostream> 
 
int main() 
{ 
 DynamicArray a(5); // constructor 1 param 
 a.Input(); 
 a.Output(); 
 
 
 a = a + 10; 
 a.Output(); 
 
 return 0; 
}