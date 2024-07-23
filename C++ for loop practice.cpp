#include <iostream>

using namespace std;

int main() {
  
  
  int sum = 0;
  for (int l = 1; l <= 100; l++) {
    sum += l;
  }
  cout << sum << endl;
  
  //Print number 1 to 1000 every ten (1)
  cout << "Print number 1 to 1000 every ten (1)" << endl;
  for(int i = 10; i <= 1000; i += 10){
    cout << i << endl;
  }

  //Name and age (2)
  cout << "Name and age (2)" << endl;
  cout << "Name: Tien (Sam) V. Nguyen" << endl;
  cout << "Age: 18 years old" << endl;

  //Print 10 to 1 backwards
  cout <<"Print 10 to 1 backwards (3)" << endl;
  for(int j = 10; j >= 1; j--){
    cout << j << endl;
  }

  //Print the multiplication table of 5 ten times
  cout << "Print the multiplication table of 5 ten times (4)" << endl;
  for(int k = 5; k <= 50; k+=5)
    cout << k << endl;
//ANOTHER METHOD
for (int o = 1; o <= 10; o++) {
  cout << 5 * o << endl;
}

  
  return 0;
}

