#include <iostream>

using namespace std; 

int main() {
int i = 7, guess;

  do{
    cout << "Guess a number between 1 and 10: " << endl;
    cin >> guess;
    
  } while (guess != i);

  cout << "You guessed correct! The number was " << i << endl; 


int number;

  do{
  cout << "Enter a number between 1 and 10: " << endl;
  cin >> number;
  } while (number < 1 || number > 10);
  return 0;

  cout << "You entered the correct number! The number was " << number << endl;

}

/**

//Integer Adder (separate from number guesser))

  int sum = 0, number;

  do{
    cout << "Enter a number (0 to stop program): ";
      cin >> number;
      sum += number;
  }while(number != 0);

    cout << "The sum of all the numbers is: " << sum << endl;

    return 0;

  }

**/  

