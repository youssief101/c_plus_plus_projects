#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
  const string hexdigits = "0123456789ABCDEF"; // possible hex digits
  cout << "Enter the series of numbers between 0 and 15: ";
  string result;  // will hold the resulting hexify'd string
  string::size_type n; // hold numbers from the input
  while (cin >> n)
    if (n < hexdigits.size()) // ignore invalid input
      result += hexdigits[n]; // fetch the indicated hex digit
  cout << "you hex number is: " << result << endl;
  return 0;
}
