#include <iostream>
using namespace std;

int main() {
    int size;
    int arr[100];

    cout << "Enter array size ";
    cin >> size;

    if (size <= 0 || size > 100) {
        cout << "Invalid size" << endl;

    }

    int sum = 0;

    cout << "Enter array elements" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int maxNum = arr[0];
    int minNum = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNum)
            maxNum = arr[i];

        if (arr[i] < minNum)
            minNum = arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Max = " << maxNum << endl;
    cout << "Min = " << minNum << endl;

    int key;
    cout << "Enter number to search ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Search Result Number found" << endl;
    else
        cout << "Search Result Number not found" << endl;


    return 0;
}
