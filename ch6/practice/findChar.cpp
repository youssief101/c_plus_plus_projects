#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(const string &str,
			    char c, string::size_type &occurs) {
  string::size_type ret = str.size();
  for (decltype(str.size()) i = 0; i != str.size(); ++i)
    if (str[i] == c) {
      if (ret == str.size())
	ret = i;
      ++occurs;
    }
  return ret;
}

bool isSentence(const string &str) {
  string::size_type repeat = 0;
  return find_char(str, '.', repeat) == str.size() - 1 && repeat == 1;
}

int main() {
  string sen = "This is youssef.";
  isSentence(sen) ? cout << "Valid" : cout << "Invalid";
  cout << endl;
  return 0;
}
