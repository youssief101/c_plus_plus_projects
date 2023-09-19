#include <iostream>
using namespace std;

void reset(int &iref) {
  iref = 0;
}

int main() {
  int ival = 150;
  reset(ival);
  cout << ival << endl;
  return 0;
}
