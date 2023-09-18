/*
  Create a C++ Program that print the size of each data type on your system
  bool, char, wchar_t, char16_t, char32_t, short, int, long, long long, float,
  double, long double
 */

#include <iostream>
using namespace std;

int main() {
  cout << sizeof(bool) << " byte/s" << endl;
  cout << sizeof(char) << " byte/s" << endl;
  cout << sizeof(wchar_t) << " byte/s" << endl;
  cout << sizeof(char16_t) << " byte/s" << endl;
  cout << sizeof(char32_t) << " byte/s" << endl;
  cout << sizeof(short) << " byte/s" << endl;
  cout << sizeof(int) << " byte/s" << endl;
  cout << sizeof(long) << " byte/s" << endl;
  cout << sizeof(long long) << " byte/s" << endl;
  cout << sizeof(float) << " byte/s" << endl;
  cout << sizeof(double) << " byte/s" << endl;
  cout << sizeof(long double) << " byte/s" << endl;
  
  return 0;
}
