#include <iostream>
#include <string>

using namespace std;

int main() {
  string word = "this is sparta";
  
  for (auto it = word.begin(); it != word.end() && !isspace(*it); ++it)
    *it = toupper(*it);
  
  cout << word << endl;
  return 0;
}
