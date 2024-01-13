/*This programm displays sizes of different int data types in c++. This programm was written by Wafa Ayan on 13/01/2024. */

#include <iostream>

using namespace std;

int main() {
   cout << "Sizes of int data types on this system:\n";
   cout << "----------------------------------------\n";

   cout << "Size of short: " << sizeof(short) << " bytes\n";
   cout << "Size of int: " << sizeof(int) << " bytes\n";
   cout << "Size of long: " << sizeof(long) << " bytes\n";
   cout << "Size of long long: " << sizeof(long long) << " bytes\n";

   return 0;
}


