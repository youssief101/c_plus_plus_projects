#include <iostream>
using namespace std;

int fact(int num) {
  if (num > 1)
    return fact(num - 1) * num;
  return 1;
}

int main() {
  cout << fact(5) << endl;
  return 0;
}
