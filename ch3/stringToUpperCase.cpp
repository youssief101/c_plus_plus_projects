#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string str = "hello, world";
  // convert str to uppercase
  for (auto &c : str)
    c = toupper(c);
  // print str
  cout << str << endl;
  return 0;
}
