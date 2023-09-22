#include <iostream>
using namespace std;

void print(const int (&arrRef)[5]) {
  for (auto i : arrRef)
    cout << i << " ";
  cout << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  print(arr);
  return 0;
}
