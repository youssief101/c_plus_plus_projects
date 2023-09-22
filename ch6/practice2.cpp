#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(const string word, char c, string::size_type &occurs) {
  string::size_type ret = word.size();
  for (decltype (ret) i = 0; i != word.size(); ++i)
    if (word[i] == c) {
      if (ret == word.size())
	ret = i;
      ++occurs;
    }
  return ret;
}

int main() {
  string name = "youssef mohamed mokhtar";
  string::size_type repeat = 0;
  string::size_type position = find_char(name, 'm', repeat);
  cout << position << " " << repeat;
  cout << endl;
  return 0;
}
