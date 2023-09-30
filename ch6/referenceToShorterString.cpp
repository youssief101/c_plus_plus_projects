#include <iostream>
#include <string>

using namespace std;

const string &shorter_string(const string &s1, const string &s2) {
  return s1.size() < s2.size() ? s1 : s2;
}

int main() {
  string name1 = "dog", name2 = "lion";
  cout << shorter_string(name1, name2).size() << endl;
  return 0;
}
