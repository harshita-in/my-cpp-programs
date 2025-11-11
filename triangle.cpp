#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter the lengths of the three sides of the triangle: ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
        cout<<"The lengths form a valid triangle."<<endl;
    else
        cout<<"The lengths do not form a valid triangle."<<endl;
    return 0;
}