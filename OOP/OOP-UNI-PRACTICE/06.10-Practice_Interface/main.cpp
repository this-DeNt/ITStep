#include"Mylibrary.h"

void MyFunc(IFly * ptr)
{
	ptr->Fly();
}
int main() {


   Animal* ptr = new Bird("Squek", 45);
   ptr->Sound();

   Bird obj("sdadsa", 100);

   MyFunc(&obj);

   Plane obj1;

   MyFunc(&obj1);


}