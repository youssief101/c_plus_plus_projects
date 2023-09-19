#include <iostream>
using namespace std;

void swap(int *pi1, int *pi2) {
  int temp = *pi2; 
  *pi2 = *pi1;
  *pi1 = temp;
}
int main() {
  int ival1 = 20, ival2 = 42;
  cout << "Before swap: " << ival1 << " " << ival2 << endl;
  swap(&ival1, &ival2);
  cout << "After swap: " << ival1 << " " << ival2 << endl;
  return 0;
}
