#include <iostream>
#include <string>

using namespace std;

bool isShorter(const string &s1, const string &s2) {
  return (s1.size() < s2.size());
}

int main() {
  string name1 = "ahmed", name2 = "youssef";
  if (isShorter(name1, name2))
    cout << name1 << " is shorter than " << name2 << endl;
  else
    cout << name2 << " is larger than " << name2 << endl;
  return 0;
}
