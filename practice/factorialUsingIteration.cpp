#include <iostream>
using namespace std;

int fact(int value) {
  int ret = 1;
  while (value > 1)
    ret *= value--;
  return ret;
}

int main() {
  cout << fact(5) << endl;
  return 0;
}
