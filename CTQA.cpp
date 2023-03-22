
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

class nowrin {
 public:
      int real, img;
      nowrin ()
       {
           real = 0;
           img = 0 ;
       }

   nowrin (int r, int i)
   {
       real = r;
       img= i ;
   }
   nowrin sum  (nowrin x, nowrin y )
   {
       nowrin res;
       res.real = x.real + y.real ;
       res.img = x.img + y.img ;
       return res;
   }
   nowrin difference (nowrin x, nowrin y)
   {
       nowrin diff;
       diff.real = x.real - y.real;
       diff.img = x.img -y.img ;
       return diff;
   }
   nowrin product (nowrin x, nowrin y)
   {
       nowrin prod ;
       prod.real = (x.real*y.real)-(x.img*y.img);
       prod.img = (x.real*y.img)+ (x.img*y.real);
       return prod;
   }
};

int main ()
{

}
