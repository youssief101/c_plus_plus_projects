#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> ivec; // empty vector
  for (decltype(ivec.size()) i = 0; i != 10; ++i)
    ivec.push_back(i);
  for (auto i : ivec)
    cout << i << " ";
  cout << endl;
  return 0;
}
