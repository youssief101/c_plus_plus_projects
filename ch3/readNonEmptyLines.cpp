#include <iostream>
#include <string>
using namespace std;

int main() {
  string line;
  while (getline(cin, line))
    // check that line isn't empty
    if (!line.empty())
      cout << line << endl;
  return 0;
}
