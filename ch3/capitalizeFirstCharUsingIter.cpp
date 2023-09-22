#include <iostream>
#include <string>

using namespace std;

int main() {
  string s("some string");
  if (s.begin() != s.end()) { // make sure s isn't empty
    auto it = s.begin();
    *it = toupper(*it);
  }
  cout << s << endl;
  return 0;
}
