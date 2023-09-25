#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string word;
  vector<string> svec;

  while (cin >> word)
    svec.push_back(word);

  for (auto &w : svec)
    for (auto &c : w)
      c = toupper(c);

  for (auto elem : svec)
    cout << elem << " ";
  cout << endl;
  return 0;
}
