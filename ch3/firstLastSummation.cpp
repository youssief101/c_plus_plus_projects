#include <iostream>
#include <vector>

using namespace std;

int main() {
  int ivalue = 0;
  vector<int> ivec;
  
  while (cin >> ivalue)
    ivec.push_back(ivalue);

  // add first and last, second to the second-last ...
  auto mid = ivec.size() / 2;
  for (decltype(mid) i = 0; i < mid; ++i) {
    int sum = 0;
    sum = ivec[i] + ivec[ivec.size() - i - 1];
    cout << sum << " ";
  }
  cout << endl;
  return 0;
}
