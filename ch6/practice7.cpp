#include <iostream>
using namespace std;

void reset(int &ref) {
  ref = 0;
}

int main() {
  int ival = 10;
  reset(ival);
  cout << ival << endl;
  return 0;
}
