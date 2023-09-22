#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  vector<string> v1{"hi"};     // list initialization: v1 has 1 element
  vector<string> v2("hi");     // error can't construct a vector from a string literal
  vector<string> v3{10};       // v3 has 10 default-initialized element
  vector<string> v4{10, "hi"}; // v4 has ten elements with value "hi"
  return 0;
}
