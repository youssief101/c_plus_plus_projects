#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending) {
  return ctr > 1 ? word + ending : word;
}

int main() {
  string name = "dog";
  cout << make_plural(name.size(), name, "s") << endl;
  return 0;
}
