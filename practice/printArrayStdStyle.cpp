#include <iostream>
using namespace std;

void print(int *beg, int *end) {
  while (beg != end)
    cout << *beg++ << " ";
  cout << endl;
}

int main() {
  int arr[4] = {1, 2, 3, 4};
  print(begin(arr), end(arr));
  return 0;
}
