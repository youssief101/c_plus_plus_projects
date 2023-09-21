#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string word = "some St#@ ri 1 ! %# amazing!";
  size_t punct_ctr = 0;
  for (auto c : word)
    if (ispunct(c))
      ++punct_ctr;
  cout << punct_ctr << endl;
  return 0;
}
