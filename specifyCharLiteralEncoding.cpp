/*
  Write a C++ Program that prints the characters:
  'A' with a literal char16_t encoding 
  'Σ' with a literal char32_t encoding
  'w' with a literal wchar_t encoding
  "Hello, world!" with a literal u8 encoding
 */
#include <iostream>
using namespace std;

int main() {
  char16_t uChar = u'A'; // Prefix 'u' for char16_t
  char32_t UChar = U'Σ'; // Prefix 'U' for char32_t
  wchar_t wideChar = L'w'; // Prefix 'L' for wchar_t
  const char* utf8String = u8"Hello, world!"; // Prefix 'u8' for UTF-8
  cout << uChar << endl;
  cout << UChar << endl;
  cout << wideChar << endl;
  cout << utf8String << endl;
  return 0;
}
