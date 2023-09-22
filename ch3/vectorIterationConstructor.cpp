#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1;    // empty vector
  for (int i = 0; i != 100; ++i)
    v1.push_back(i);
  // print the elements of v1
  for (auto i : v1)
    cout << i << " ";
  cout << endl;
  return 0;
}
