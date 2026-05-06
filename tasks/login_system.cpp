#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    string password;

    string correctUsername = "admin";
    string correctPassword = "1234";

    cout << "Enter username ";
    cin >> username;

    cout << "Enter password ";
    cin >> password;


    if (username == correctUsername && password == correctPassword) {
        cout << "Login successful" << endl;
    }

    else if (username != correctUsername) {
        cout << "Error Username not found" << endl;
    }

    else {
        cout << "Error Incorrect password" << endl;
    }

    return 0;
}
