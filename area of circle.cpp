#include <iostream>
using namespace std ;
int main() {
    float radius;
    cout << "Enter the radius of the circle: "; 
    cin >> radius;
    float area = 3.14159 * radius * radius;
    cout << "The area of the circle is: " << area << endl;
    return 0;
}