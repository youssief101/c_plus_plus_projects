#include <iostream>
#include <vector>

using namespace std;

int main() {
  int ival = 0;
  vector<int> ivec;
  
  while (cin >> ival)
    ivec.push_back(ival);

  for (auto &elem : ivec) 
    elem *= elem;
    cout << elem << " ";
  }
  cout << endl;
  return 0;
}
