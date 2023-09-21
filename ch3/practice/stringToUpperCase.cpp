#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string word = "some string";
  for (auto &c : word)
    c = toupper(c);
  cout << word << endl;
  return 0;
}
