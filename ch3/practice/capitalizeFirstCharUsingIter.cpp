#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string word;
  cin >> word;
  
  if (word.begin() != word.end()) {
    auto it = word.begin();
    *it = toupper(*it);
  }
  cout << word << endl;
  return 0;
}
