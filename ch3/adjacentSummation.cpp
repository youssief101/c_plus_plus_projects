#include <iostream>
#include <vector>

using namespace std;

int main() {
  int ivalue = 0;
  vector<int> ivec;
  
  while (cin >> ivalue)
    ivec.push_back(ivalue);

  // add adjacent elements
  for (decltype(ivec.size()) i = 0; i < ivec.size(); ++i) {
    int sum = ivec[i] + ivec[++i];
    cout << sum << " ";
  }
  cout << endl;
  return 0;
}
