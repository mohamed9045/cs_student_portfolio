#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    bool isEmpty() {
        return (top == NULL);
    }

    void push(int item) {
        Node* newNode = new Node();
        newNode->data = item;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Error Stack Underflow" << endl;
            return -1;
        }

        Node* delPtr = top;
        int value = top->data;
        top = top->next;

        delete delPtr;
        return value;
    }

    int peek() {
        if (!isEmpty())
            return top->data;

        return -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = top;
        cout << "Stack elements ";

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    int count() {
        int counter = 0;
        Node* temp = top;

        while (temp != NULL) {
            counter++;
            temp = temp->next;
        }

        return counter;
    }

    bool search(int item) {
        Node* temp = top;

        while (temp != NULL) {
            if (temp->data == item)
                return true;

            temp = temp->next;
        }

        return false;
    }
};

int main() {
    Stack s;
    int item;


    cout << "Enter 3 items to push";
    for (int i = 0; i < 3; i++) {
        cout << "Item " << i + 1 <<endl;
        cin >> item;
        s.push(item);
    }


    cout << "\n";
    s.display();


    cout << "Pop top element:"<<" ";
    cout << s.pop() << " was removed from the stack" << endl;


    cout << "Enter item to search ";
    cin >> item;

    if (s.search(item))
        cout << "Result Item found" << endl;
    else
        cout << "Result Item not found" << endl;

    cout << "Total elements in stack " << s.count() << endl;


    return 0;
}
