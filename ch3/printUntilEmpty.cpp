#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
  // print each line in text up to the first blank
  string word;
  vector<string> text;
  
  while (cin >> word)
    text.push_back(word);
  
  for (auto it = text.cbegin();
       it != text.cend() && !it->empty(); ++it)  
    cout << *it << endl;
  return 0;
}
