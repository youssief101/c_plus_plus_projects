#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> ivec = {1, 2, 3, 4, 5};
  for (auto i : ivec)
    cout << i << " ";
  cout << endl;
  for (auto &i : ivec) {
    i *= i;
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
