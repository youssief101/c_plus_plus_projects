#include <iostream>
using namespace std;

void print(const int *beg, const int *end) {
  while (beg != end)
    cout << *beg++ << " ";
  cout << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  print(begin(arr), end(arr));
  return 0;
}
