#include <iostream>
using namespace std;

void reset(int *pi) {
  *pi = 0;
}

int main() {
  int ival = 20;
  reset(&ival);
  cout << ival << endl;
  return 0;
}
