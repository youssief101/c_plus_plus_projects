#include <iostream>
#include <string>

using namespace std;

string::size_type findChar(const string &w, char c, string::size_type &counter) {
  auto ret = w.size();
  for (decltype(ret) i = 0; i != w.size(); ++i) {
    if (w[i] == c) {
      if (ret == w.size())
	ret = i;
      ++counter;
    }
  }
  return ret;
}

int main() {
  string word = "youssef mohamed mokhtar";
  size_t occurence = 0;
  string::size_type position = findChar(word, 'm', occurence);
  cout << position << " " << occurence << endl;
  return 0;
}
