// create a class called MyClass
// create an object called MyObj

#include<iostream>
using namespace std ;

class MyClass {

  public:
      int MyNum ;
      string MyString ;
};

int main () {
    MyClass MyObj;

 MyObj.MyNum = 10;
 MyObj.MyString = "Nowrin";

 cout << MyObj.MyNum <<endl ;
 cout << MyObj.MyString ;

 return 0;

}
