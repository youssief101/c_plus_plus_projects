#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string word;
  vector<string> svec;
  while (cin >> word)
    svec.push_back(word);

  for (auto w : svec)
    cout << w << " ";
  cout << endl;
  return 0;
}
