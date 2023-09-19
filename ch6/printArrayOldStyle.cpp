#include <iostream>
using namespace std;

void print(const char *cp) {
  if (cp)        //if cp isn't a null pointer
    while (*cp)  // so long as the character it points isn't a null
      cout << *cp++ << " ";
  cout << endl;
}

int main() {
  char arr[5] = {'a', 'b', 'c', 'd', 'e'};
  print(arr);
  return 0;
}
