#include <iostream>
using namespace std;

size_t oneToTen() {
  static int obj = 0;
  return ++obj;
}

int main() {
  for (size_t i = 0; i < 10; i++)
    cout << oneToTen() << endl;
  return 0;
}
