#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  cin >> word;

  for (auto iter = word.begin(); iter != word.end() && !isspace(*iter); ++iter)
      *iter = toupper(*iter);

  cout << word << endl;
  return 0;
}
