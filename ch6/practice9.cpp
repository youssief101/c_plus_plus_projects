#include <iostream>
using namespace std;

void print(const int arr[], size_t size) {
  for (size_t i = 0; i < size; ++i)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  print(arr, end(arr) - begin(arr));
  return 0;
}
