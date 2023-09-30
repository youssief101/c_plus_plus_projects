#include <iostream>
using namespace std;

int main() {
  using arrT = int[10];
  arrT arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (auto elem : arr)
    cout << elem << " ";
  cout << endl;
  return 0;
}
