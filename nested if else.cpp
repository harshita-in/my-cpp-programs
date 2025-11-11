#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter the lengths of the three sides of the triangle: ";
    cin>>a>>b>>c;
    if(a>b) {
        if(a>c) {
            cout<<"The largest side is: "<<a<<endl;
        } else {
            cout<<"The largest side is: "<<c<<endl;
        }
    } else {
        if(b>c) {
            cout<<"The largest side is: "<<b<<endl;
        } else {
            cout<<"The largest side is: "<<c<<endl;
        }
    }
    return 0;

    }