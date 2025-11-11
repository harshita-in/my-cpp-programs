#include <iostream>
using namespace std;
int main() {
    int n1,n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    char operatorr;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operatorr;
    switch (operatorr) {
        case '+':
            cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0)
                cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }
    return 0;
}