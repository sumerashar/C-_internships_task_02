#include<iostream>
using namespace std;
int main(){
	cout<<"Simple c++ calculator\n";
	  int num1;
    int num2;
    char ch;

    cout << "Simple calculator\n";
    cout << "Enter the first number:\n ";
    cin >> num1;

    cout << "Enter the second number:\n ";
    cin >> num2;

    cout << "Which operation do you want to perform (*, -, +, /)? ";
    cin >> ch;

    switch (ch) {
        case '-':
            cout << "Result is " << num1 - num2 << endl;
            break;
        case '+':
            cout << "Result is " << num1 + num2 << endl;
            break;
        case '*':
            cout << "Result is " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result is " << num1 / num2 << endl;
            } else {
                cout << "Invalid input: Division by zero" << endl;
            }
            break;
        default:
            cout << "Invalid operation" << endl;
    }

    return 0;
}

