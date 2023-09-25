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

  for (auto iter = text.cbegin();
       iter != text.cend() && !iter->empty(); ++iter)
    cout << *iter << " ";
  cout << endl;

  return 0;
}
