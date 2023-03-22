// using function in outside the class
#include<iostream>
using namespace std ;

class myClass {
public:

    void myMethod ();

};

  void myClass :: myMethod () {
    cout << "Hellow world";

  }

  int main () {
   myClass myObj;
   myObj.myMethod () ;
   return 0;

  }
