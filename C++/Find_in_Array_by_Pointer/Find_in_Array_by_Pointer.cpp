#include <iostream>
using namespace std;

// find in array by pointer

// find the target
int* findInArray(int* begin, int* end, int target) {
    for (int* p = begin; p < end; ++p) {  
        if (*p == target) {
            return p;  // the pointer of the element        
        }
    }
    return nullptr;               
}

int main() {
    int arr[] = {3, 7, 2, 5, 8};
    int N = sizeof(arr) / sizeof(arr[0]);  // total bytes / 4 bytes

    cout << "Array: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // find 5
    int target = 5;
    cout << "Search for: " << target << "\n";
    int* result = findInArray(arr, arr + N, target);

    if (result != nullptr) {
        int index = result - arr;  
        cout << "Found at index: " << index << "\n";
    } else {
        cout << "Not found\n";
    }

    // find 9
    target = 9;
    cout << "Search for: " << target << "\n";
    result = findInArray(arr, arr + N, target);

    if (result != nullptr) {
        int index = result - arr;
        cout << "Found at index: " << index << "\n";
    } else {
        cout << "Not found\n";
    }

    return 0;
}
