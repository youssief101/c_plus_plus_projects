#include <iostream>
using namespace std;

void print(const char *pStr) {
  if (pStr)
    while (*pStr)
      cout << *pStr++;
  cout << endl;
}

int main() {
  char oldStr[] = "Youssef";
  print(oldStr);
  return 0;
}
