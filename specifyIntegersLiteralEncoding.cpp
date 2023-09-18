/*
  Write a C++ Program that prints the characters:
  42 with a literal octal encoding 
  42 with a literal hexadecimal encoding
  42 'w' with a literal binary encoding
  42 with an unsigned integer encoding
  1234567890123456 with a long long integer encoding
 */

#include <iostream>
using namespace std;

int main() {
  int octalInt = 052; // Prefix '0' for octal integer
  int hexInt = 0x2A; // Prefix '0x' for hexadecimal integer
  int binaryInt = 0b101010; // Prefix '0b' for binary
  unsigned int unsignedInt = 42u; // Suffix 'u' for unsigned integer
  long long longInt = 1234567890123456LL; // Suffix 'LL' for long long integer encoding

  cout << octalInt << endl;
  cout << hexInt << endl;
  cout << binaryInt << endl;
  cout << unsignedInt << endl;
  cout << longInt << endl;
  return 0;
}
