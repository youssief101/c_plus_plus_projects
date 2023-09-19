#include <iostream>
using namespace std;

size_t count_calls() {
  static size_t ctr = 0;    // will persist across calls
  return ctr++;
}

int main() {
  for (size_t i = 0; i != 11; ++i)
    cout << count_calls() << endl;
  return 0;
}
