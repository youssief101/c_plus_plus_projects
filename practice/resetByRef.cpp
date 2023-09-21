#include <iostream>
using namespace std;

void reset(int &iref) {
  iref = 0;
}

int main() {
  int i = 20;
  reset(i);
  cout << i << endl;
  return 0;
}
