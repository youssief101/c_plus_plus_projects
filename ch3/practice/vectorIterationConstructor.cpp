#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> ivec;
  for (size_t i = 0; i != 100; ++i)
    ivec.push_back(i);

  for (auto elem : ivec)
    cout << elem << " ";
  cout << endl;
  return 0;
}
