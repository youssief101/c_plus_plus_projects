#include <iostream>
using namespace std;

int odd[] = {1, 3, 5, 7}, even[] = {2, 4, 6, 8};

decltype(odd) *arrPtr(int i) {
  return (i % 2) ? &odd : &even; // return a pointer to even or odd array according to i
}

int main() {
  int i = 2;
  int (*ptoarr)[4] = arrPtr(i);
  for (int i = 0; i != 4; ++i)
    cout << (*ptoarr)[i] << " ";
  cout << endl;
  return 0;
}
