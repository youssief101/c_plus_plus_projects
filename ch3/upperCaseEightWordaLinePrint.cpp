#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string word;
  vector<string> text;
  
  while (cin >> word)
    text.push_back(word);
  
  size_t ctr = 0;
  
  for (auto &w : text) {
    for (decltype(w.size()) i = 0; i != w.size(); ++i) 
      w[i] = toupper(w[i]);
    cout << w << " ";
    ++ctr;
    if (ctr == 8) {
      ctr = 0;
      cout << endl;
    }
  }
  cout << endl;
  return 0;
}
