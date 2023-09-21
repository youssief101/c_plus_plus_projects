#include <iostream>
#include <string>

using namespace std;

string::size_type findChar(const string &w, char c, string::size_type &occur) {
  auto ret = w.size();
  for (decltype(ret) i = 0; i != w.size(); ++i) {
    if (w[i] == c) {
      if (ret == w.size())
	ret = i;
      ++occur;
    }
  }
  return ret;
}

bool isSentence(const string &line) {
  string::size_type occurence = 0;
  return (findChar(line, '.', occurence) == line.size() - 1) && occurence == 1;
}

int main() {
  string word = "youssef mohamed mokhtar .";
  if (isSentence(word))
    cout << word << " is a sentence" << endl;
  else
    cout << word << " isn't a sentence" << endl;
  return 0;
}
