#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1;          // empty string
  string s2(s1);      // s2 is a copy of s1
  string s3("value"); // s3 is a copy of the string literal
  s2 = s3;     // equivalent to s2(s1), s2 is a copy of s1
  string s4(3, 'c');  // initialize s4 with 3 copies of 'c'

  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  return 0;
}
