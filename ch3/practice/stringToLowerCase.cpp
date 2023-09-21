#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string word = "SOME STRING";
  for (auto &c : word)
    c = tolower(c);
  cout << word << endl;
  return 0;
}
