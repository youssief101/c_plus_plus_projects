#include <iostream>
#include <string>
using namespace std;

string::size_type find_char(const string word, char c, string::size_type &occurs) {
  string::size_type ret = word.size();
  for (decltype(ret) i = 0; i != word.size(); ++i)
    if (word[i] == c) {
      if (ret = word.size())
	ret = i;
      ++occurs;
    }
  return ret;
}

bool isSentence(const string line, string::size_type &repeat) {
  return find_char(line, '.', repeat) == line.size() - 1 && repeat == 1;
}

int main() {
  string sen = "my name is youssef .";
  string::size_type occurence = 0;
  if (isSentence(sen, occurence))
    cout << "Valid Sentence" << endl;
  else
    cout << "invlaid sentence" << endl;
  return 0;
}
