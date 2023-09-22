#include <iostream>
#include <string>

using namespace std;

void print(const char *pc) {
  if (pc)
    while (*pc)
      cout << *pc++ << " ";
  cout << endl;
}

int main() {
  char words[] = {'y', 'o', 'u', 's', 's', 'e', 'f'};
  print(words);
  return 0;
}
