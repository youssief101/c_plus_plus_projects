#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(const string &rs, char c, string::size_type &occurs) {
  auto ret = rs.size();
  for (string::size_type i = 0; i != rs.size(); ++i) {
    if (rs[i] == c) {
      if (ret == rs.size())
	ret = i;
      ++occurs;
    }
  }
  return ret;
}

bool isSentence(const string &line) {
  string::size_type ctr = 0;
  return (find_char(line, '.', ctr) == line.size() - 1) && ctr == 1;
}

int main() {
  string sen = "My name is Youssef Mohamed.";
  if (isSentence(sen))
    cout << "Valid Sentence" << endl;
  else
    cout << "Invalid, not sentence" << endl;
  return 0;
}
