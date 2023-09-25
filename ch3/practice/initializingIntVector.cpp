#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> ivec1; // empty
  vector<int> ivec2(20); // a vector of size 20 ints
  vector<int> ivec3{1, 2, 3, 4};
  vector<int> ivec4 = {1, 2, 3, 4};
  vector<int> ivec1(ivec3);
  vector<int> ivec1 = ivec3;
  return 0;
}
