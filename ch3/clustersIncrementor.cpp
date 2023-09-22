#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<unsigned> clusters(11, 0);
  unsigned grade;
  while (cin >> grade)
    if (grade <= 100)
      ++clusters[grade / 10];
  for (auto i : clusters)
    cout << i << " ";
  cout << endl;
  return 0;
}
