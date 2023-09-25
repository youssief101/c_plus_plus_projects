#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> svec;
  vector<string> svec1 = svec;
  vector<string> svec2(10, "ahmed");
  vector<string> svec3{"ahemd", "khaled", "reda"};
  vector<string> svec4(20);
  return 0;
}
