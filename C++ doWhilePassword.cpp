#include <iostream>

using namespace std; 

int main() {

  string password;
  
  do{
    cout << "Please enter the correct password:  ";
    cin >> password;
    
  } while (password != "MongolianArcher1273");
  cout << "Correct credentials. Logging you in..." << endl;

  return 0;
}