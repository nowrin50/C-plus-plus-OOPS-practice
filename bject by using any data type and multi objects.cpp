// create a class and object by using any data type and multi objects

#include<iostream>
using namespace std ;

 class Car {
  public:
      string brand ;
      string model ;
      int year ;
 };
int main () {

 Car myobj1 ;

   myobj1.brand = "BMW" ;
   myobj1.model = "jsjiiw" ;
   myobj1.year = 1999 ;

 Car myobj2 ;

   myobj2.brand = "Toyota";
   myobj2.model = "Allion" ;
   myobj2.year = 2018 ;

   cout << myobj1.brand << "  " << myobj1.model << "  " << myobj1.year <<endl ;
   cout << myobj2.brand <<"  " << myobj2.model << "  " << myobj2.year ;
   return 0;

}
