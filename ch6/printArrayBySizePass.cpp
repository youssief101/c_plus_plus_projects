#include <iostream>
using namespace std;

// size is passed explicity and used to control access to elements of ia
void print(const int ia[], size_t size) {
  for (size_t i = 0; i != size; ++i)
    cout << ia[i] << " ";
  cout << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  print(arr, end(arr) - begin(arr));
  return 0;
}