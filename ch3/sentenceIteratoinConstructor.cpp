#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string word;
  vector<string> text;
  while (cin >> word)
    text.push_back(word);
  for (auto w : text)
    cout << w << " ";
  cout << endl;
  return 0;
}
