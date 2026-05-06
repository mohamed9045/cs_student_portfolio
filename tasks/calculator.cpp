#include <iostream>
using namespace std;

int main() {
    double firstNumber = 0.0;
    double secondNumber = 0.0;
    char operation;

    cout << "Enter first number ";
    cin >> firstNumber;

    cout << "Enter operation (+, -, *, /) ";
    cin >> operation;

    cout << "Enter second number ";
    cin >> secondNumber;


    if (operation == '+') {
        cout << "Result= " << firstNumber + secondNumber << endl;
    }
    else if (operation == '-') {
        cout << "Result= " << firstNumber - secondNumber << endl;
    }
    else if (operation == '*') {
        cout << "Result= " << firstNumber * secondNumber << endl;
    }
    else if (operation == '/') {
        if (secondNumber == 0) {
            cout << "Error Division by zero is not allowed" << endl;
        } else {
            cout << "Result= " << firstNumber / secondNumber << endl;
        }
    }
    else {
        cout << "Error Invalid operation entered" << endl;
    }

    return 0;
}
