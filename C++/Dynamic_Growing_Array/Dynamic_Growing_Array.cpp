#include <iostream>
using namespace std;

int main() {
    int capacity = 5;
    int size = 0;
    int* arr = new int[capacity];

    cout << "Enter: ";

    int x;
    while (cin >> x && x != -1) {
        if (size == capacity) {
            int newCap = capacity * 2;
            int* tmp = new int[newCap];

            for (int i = 0; i < size; i++) tmp[i] = arr[i];

            delete[] arr;
            arr = tmp;
            capacity = newCap;
        }
        arr[size++] = x;
    }

    cout << "Stored: ";
    if (size == 0) {
        cout << "n/a";
    } else {
        for (int i = 0; i < size; i++) {
            if (i) cout << ' ';
            cout << arr[i];
        }
    }
    cout << "\n";

    delete[] arr;
    return 0;
}
