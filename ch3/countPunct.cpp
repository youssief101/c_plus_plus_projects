#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string s("Hello World!!!");
  // punct_cnt has the same type that s.size returns
  decltype(s.size()) punct_cnt = 0;
  // count the number of punctuations chars in s
  for (auto c : s)
    if (ispunct(c))
      ++punct_cnt;

  cout << punct_cnt << " punctutation characters in " << s << endl;
  return 0;
}
