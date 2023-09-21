#include <iostream>
using namespace std;

void print(int (&arrRef)[4]) {
  for (auto i : arrRef)
    cout << i << " ";
  cout << endl;
}

int main() {
  int arr[4] = {1, 2, 3, 4};
  print(arr);
  return 0;
}
