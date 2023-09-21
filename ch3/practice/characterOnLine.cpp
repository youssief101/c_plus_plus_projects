#include <iostream>
#include <string>

using namespace std;

int main() {
  string word = "some string";
  for (auto c : word)
    cout << c << endl;
  return 0;
}
