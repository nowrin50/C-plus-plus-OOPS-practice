
#include<iostream>
using namespace std;
int main() {

    int a=0,b=1,c,num;

    cout<<("Enter the number: ");
    cin>> num;

    cout<<"The first fibonacci numbers are: ";
    for(int i=1;i<=num;i++){
    cout<<a;
    c=a+b;
    a=b;
    b=c;
    }
return 0;
}
