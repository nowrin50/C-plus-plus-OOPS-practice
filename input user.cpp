#include<iostream>
using namespace std;

float product(float x,
               int y)
{
    float multiplication = x*y;

return(multiplication);
}

int  main( )
{
    float a;
    int c;
    float result;

    cout<< "Input two value : ";
    cin>>a>>c;

    result = product(a, c);

    cout<<"The product is " << result<<endl ;

 return 0;
}
