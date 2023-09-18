#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string str = "HELLO, WORLD";
  // convert each character to lowercase
  for (auto &c : str)
    c = tolower(c);
  // print str
  cout << str << endl;
  return 0;
}
