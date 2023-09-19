#include <iostream>
#include <string>

using namespace std;

bool isShorter(const string s1, const string s2) {
  return s1.size() < s2.size();
}

int main() {
  string word1 = "youssef mohamed mokhtar";
  string word2 = "ziad mohamed mokhtar";
  if (isShorter(word1, word2))
    cout << word1 << " is shorter than " << word2 << endl;
  else
    cout << word1 << " is larger than " << word2 << endl;
  return 0;
}
