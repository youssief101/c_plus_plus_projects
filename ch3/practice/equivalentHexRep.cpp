#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  string eqHex = "0123456789ABCDEF", result;
  string::size_type n = 0;
  while (cin >> n)
    if (n < eqHex.size())
      result += eqHex[n];
  cout << "your hex number is: " << result << endl;
  return 0;
}
