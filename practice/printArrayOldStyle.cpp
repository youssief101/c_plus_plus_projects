#include <iostream>
#include <string>

using namespace std;

void print(const char *cp) {
  if (cp)        // if cp isn't a null ptr
    while (*cp)  // as long as the character it points to isn't a null
      cout << *cp++ << endl;
  cout << endl;
}

int main() {
  char alpha[4] = {'a', 'b', 'c', 'd'};
  print(alpha);
  return 0;
}
