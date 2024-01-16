/* This program explains Primary data types in c++.

We have three types of data types in c++. They are:

1. Primary data types:
a. int:
It is to represent integers/whole numbers/no decimals.

i. int:
Takes 4 bytes in memory
Range is -2147483648 to 2147483647

ii. short/short int:
Takes 2 bytes in memory
Range is -32768 32767 

iii. long/long int:
Takes 4 bytes in memory
Range is -2147483648 to 2147483647

iv. long long:
Takes 8 bytes in memory
Range is -9223372036854775808 to 9223372036854775807

b. float:
It is to represent real numbers/have decimals.

i. float:
Takes 4 bytes in memory.
Precision is 6 digits.

ii. double:
Takes 8 bytes in memory.
Precision is 15 digits.

iii. long double:
Takes 12 bytes in memory.
Precision is 18 digits.

c. char:
Used to store a single character.
Takes 1 byte in memory.
Always enclosed in single qoutes.

d. bool:
Used for true and false only.
Takes 1 byte in memory.


2. Derived data types:
a. Arrays
b. Functions
c. Pointers 
d. References

3. User defined data types:
a. Classes
b. Structures
c. Union
d. Enum 

This code displays the Sizes of different data types in c++ language. */

#include <iostream>
using namespace std;
int main() {

cout << "Size of char : " << sizeof(char) << endl;
cout << "Size of int : " << sizeof(int) << endl;
cout << "Size of short int : " << sizeof(short int) << endl;
cout << "Size of long int : " << sizeof(long int) << endl;
cout << "Size of float : " << sizeof(float) << endl;
cout << "Size of double : " << sizeof(double) << endl;
cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
cout << "Size of long double : " << sizeof(long double) << endl;
cout << "Size of bool : " << sizeof(bool) << endl;
cout << "Size of long long : " << sizeof(long long) << endl;

    return 0;
}

/* This program is written by Wafa Ayan on 17 January 2024*/