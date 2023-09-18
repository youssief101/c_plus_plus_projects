/*
  Write code to change the value to which the pointer points.
 */

#include <iostream>
using namespace std;

int main() {
  int ival = 100;
  int *pival = &ival;
  cout << "ival = " << ival << endl;
  *pival = 200;
  cout << "ival = " << ival << endl;
  return 0;
}
