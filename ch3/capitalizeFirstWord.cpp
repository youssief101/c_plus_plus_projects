#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
  string str("some string");
  // capitalize the first word in str
  for (decltype(str.size()) index = 0;
       index < str.size() && !isspace(str[index]); ++index)
    str[index] = toupper(str[index]);
  // print str
  cout << str << endl;
  return 0;
}
