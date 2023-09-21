#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  string str = "some string";
  if (!str.empty())
    str[0] = toupper(str[0]);
  cout << str << endl;
  return 0;
}
