#include <iostream>
using namespace std;

void reset(int *pi) {
  *i = 0;
}

int main() {
  int value = 20;
  reset(&value);
  cout << value << endl;
  return 0;
}
