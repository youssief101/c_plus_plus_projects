#include <iostream>
#include <string>

using namespace std;

int main() {
  string word = "some string";
  if (!word.empty())
    cout << word[0] << endl;
  return 0;
}
