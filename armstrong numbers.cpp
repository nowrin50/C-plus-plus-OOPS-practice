#include<iostream>
using namespace std;

int main() {
    int a;

    cout<<"The armstrong numbers are: ";

    for (a=2; a<=10000; a++) {
        int b, c=0, d=a;
        while (d > 0) {
            b = d % 10;
            c = c + (b*b*b);
            d = d / 10;
        }

        if (c == a)
            cout<<a<<endl;
    }
return 0;
}
