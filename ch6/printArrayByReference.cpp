#include <iostream>
using namespace std;

void print(const int (&arr)[5]) {
  for (auto elem : arr)
    cout << elem << " ";
  cout << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  print(arr);
  return 0;
}
