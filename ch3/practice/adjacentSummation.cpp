#include <iostream>
#include <vector>

using namespace std;

int main() {
  int ival = 0;
  vector<int> ivec;

  while (cin >> ival)
    ivec.push_back(ival);

  for (decltype(ivec.size()) i = 0; i < ivec.size(); ++i) {
    int sum = ivec[i] + ivec[++i];
    cout << sum << " ";
  }
  cout << endl;
  return 0;
}
