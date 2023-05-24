#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number > 0) {
    cout << "positive integer: " << number << endl;
  } 
  else if (number < 0) {
    cout << "negative integer: " << number << endl;
  } 
  else {
    cout << "number is 0" << endl;
  }

  cout << "This line is always printed.";

  return 0;
}