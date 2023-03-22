/*Write a class named Student. A Student has name, id and CGPA. Create two objects of the above mentioned
class. Show the average CGPA of all of them.*/

#include<iostream>
#include<string>
using namespace std ;

class student {
   public:
       string name;
       int id ;
       double cgpa;
};

 int main () {
   student s1, s2 ;

     s1.name = "Nowrin" ;
     s1.id = 237 ;
     s1.cgpa = 3.50 ;

     s2.name = "Atef " ;
     s2.id =353 ;
     s2.cgpa =3.80 ;

     double average_cgpa = (s1.cgpa+ s2.cgpa)/2 ;

     cout << "Average cgpa:" << average_cgpa <<endl ;
     return 0;


 }
