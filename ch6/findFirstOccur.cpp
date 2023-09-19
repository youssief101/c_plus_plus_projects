#include <iostream>
#include <string>

using namespace std;
string::size_type find_char(const string &s, char c, string::size_type &ctr) {
  auto ret = s.size();
  for (decltype(ret) i = 0; i != s.size(); ++i) {
    if (s[i] == c) {
      if (ret == s.size())
	ret = i;    // remember the first occurrence of c
      ++ctr;    // increment the occurrence count
    }
  }
  return ret;
}
int main() {
  string word = "Youssef Mohamed Mokhtar";
  size_t counter = 0;
  string::size_type position = find_char(word, 'M', counter);
  cout << "The first of occurrence of M is " << position + 1
       << "\nThe number of repetation of M is " << counter << endl;
  return 0;
}
