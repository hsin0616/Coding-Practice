#include <iostream>
using namespace std;

const int MAX = 50;
int arr[MAX] = {};

// callback functions
void printArr(int arr[], int n){
  cout << "Array: ";
  for (int i = 0; i<n; i++){
    cout << arr[i] << " ";
    cout << "\n";
  }
}

void doubleArr(int arr[], int n){
  for (int i=0; i<n; i++){
    arr[i] *= 2;
  }
}

void squareArr(int arr[], int n){
  for (int i=0; i<n; i++) {
    arr[i] *= arr[i];
  }
}

int main(){
  cout << "Array: ";
  int num = 0;
  while (num<MAX && cin.peek()!='\n' && cin>>arr[num]){
    num++;
  }
  cin.ignore();
  void (*callbacks[])(int[], int) = {printArr, doubleArr, squareArr};
  cout << "\n";
  cout << "Select (1 print/2 double/3 square): ";
  int sel; cin >> sel;
  cout << "\n";
  callbacks[sel-1](arr, num);
  
  if (sel!=1){
    cout << "New Array: ";
    for (int i=0; i<num; i++) cout << arr[i] << " ";
    cout << "\n";
  }
  
  return 0;
}