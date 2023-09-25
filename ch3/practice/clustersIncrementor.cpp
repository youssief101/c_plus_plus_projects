#include <iostream>
#include <vector>

using namespace std;

int main() {
  int grade = 0;
  vector<int> clusters(11, 0);
  
  while (cin >> grade) {
    if (grade <= 100)
      ++cluster[grade / 10];
  }

  for (auto elem : clusters)
    cout << elem << " ";
  cout << endl;
  return 0;
}
