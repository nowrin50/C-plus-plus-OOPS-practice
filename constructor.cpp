// using constructor for pp

#include<iostream>
using namespace std ;

class myClass {

public:
    myClass () { //constructor
     cout <<"hello world" ;
    }
};
int main () {
  myClass myObj ; // this will call the constructor
  return 0;
}
