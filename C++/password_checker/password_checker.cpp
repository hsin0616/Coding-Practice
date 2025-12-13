#include <iostream>
#include <string>
#include <cctype>  // for isupper, isdigit
using namespace std;

int main() 
{
    string password;
    cout << "Enter: ";
    getline(cin, password);
    
    bool hasUpper = false;
    bool hasDigit = false;
    
    for (char c: password){
      if (isupper(c)) hasUpper = true;
      if (isdigit(c)) hasDigit = true;
    }
    
    bool isLongEnough = (password.length() >= 8);
    bool isStrong = isLongEnough && hasUpper && hasDigit;
    
    if (isStrong){
      cout << "Strong" << endl;
    } else{
      cout << "Weak, missing" << endl;
      if (!isLongEnough) cout << "- at least 8 characters" << endl;
      if (!hasUpper) cout << "- contain uppercase letters" << endl;
      if (!hasDigit) cout << "- contain digits" << endl;
    }
    return 0;
}
