#include <iostream>
#include <iomanip>
using namespace std;

struct Book{
  char title[30];
  int price;
};

int main(){
  Book* books = new Book[3];
  
  for (int i=0; i<3; i++){
    cout << "Title for book " << (i+1) << ": ";
    cin.getline(books[i].title, 30);
    cout << books[i].title <<  "\n"; 
    
    cout << "Price for book " << (i+1) << ": $";
    cin >> books[i].price;
    cout << books[i].price << "\n";
    cin.ignore();
  }
  
  cout << "\n";
  
  for (int i=0; i<3; i++){
    cout << books[i].title << " ($" << books[i].price << ")" << endl;
  }
  delete[] books;
  return 0;
}