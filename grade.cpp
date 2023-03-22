
#include<iostream>
using namespace std;
int main() {

    int num;
    cout<<"Input Your Mark:";
    cin>>num;

    if(num>=80){
    cout<<"Your Grade is A+";
    }
    else if(num>=75&&num<=79){
    cout<<"Your Grade is A";
    }
    else if(num>=70&&num<=74){
    cout<<"Your Grade is A-";
    }
    else if(num>=65&&num<=69){
    cout<<"Your Grade is B+";
    }
    else if(num>=60&&num<=64){
    cout<<"Your Grade is B";
    }
    else if(num>=55&&num<=59){
    cout<<"Your Grade is B-";
    }
    else if(num>=50&&num<=54){
    cout<<"Your Grade is C+";
    }
    else if(num>=45&&num<=49){
    cout<<"Your Grade is C";
    }
    else if(num>=40&&num<=44){
    cout<<"Your Grade is D";
    }
    else if(num>40){
    cout<<"Your Grade is F";
    }
    else{
    cout<<"Invalid Grade";
    }
return 0;
}
