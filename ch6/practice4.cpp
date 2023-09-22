#include <iostream>
#include <string>

using namespace std;

bool isShorter(const string s1, const string s2) {
  if (s1.size() < s2.size())
    return true;
  else
    return false;
}

int main() {
  string str1 = "ahmed", str2 = "khaled";
  if (isShorter(str1, str2))
    cout << str1 << " is shorter than " << str2 << endl;
  else
    cout << str1 << " is longer than " << str2 << endl;
  return 0;
}
