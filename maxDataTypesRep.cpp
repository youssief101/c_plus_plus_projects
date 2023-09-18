/*
  Write a C++ Program that print the maximum number representation of each of
  these data types on your system bool, char, wchar_t, char16_t, char32_t, short
  int, long, long long, float, double, long double
 */

#include <iostream>
#include <limits>
using namespace std;

int main() {
  cout << numeric_limits<bool>::max() << endl;
  cout << numeric_limits<char>::max() << endl;
  cout << numeric_limits<wchar_t>::max() << endl;
  cout << numeric_limits<char16_t>::max() << endl;
  cout << numeric_limits<char32_t>::max() << endl;
  cout << numeric_limits<short>::max() << endl;
  cout << numeric_limits<int>::max() << endl;
  cout << numeric_limits<long>::max() << endl;
  cout << numeric_limits<long long>::max() << endl;
  cout << numeric_limits<float>::max() << endl;
  cout << numeric_limits<double>::max() << endl;
  cout << numeric_limits<long double>::max() << endl;
  
  return 0;
}
