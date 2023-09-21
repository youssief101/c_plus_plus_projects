#include <iostream>
#include <string>

using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    if (line.size() > 80)
      cout << line;
    else
      cout << "this line is less than 80 chars" << endl;
  }
  return 0;
}
