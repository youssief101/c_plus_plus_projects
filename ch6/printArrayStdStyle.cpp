#include <iostream>
using namespace std;

void print(int *beg, int *end) {
  while (beg != end)
    // print every element starting at beg up to but not including end
    cout << *beg++ << " ";
  cout << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  print(begin(arr), end(arr)); // begin and end functions
  return 0;
}
