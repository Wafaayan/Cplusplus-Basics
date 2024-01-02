#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int number{0};

  cout << "Enter an integer: ";
  cin >> number;

//if remainder is 0 the number is even, otherwise the number is odd.

  if ( number % 2 == 0)
    cout << number << " is even.";
  else
    cout << number << " is odd.";

  return 0;
}
