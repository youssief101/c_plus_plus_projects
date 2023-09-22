#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> ivec = {1, 2, 3, 4, 5};
  for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
    cout << *it << " ";
  cout << endl;
  return 0;
}
