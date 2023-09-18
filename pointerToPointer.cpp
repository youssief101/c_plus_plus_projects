/*
  Write a C++ code in which a pointer points to another pointer.
 */

#include <iostream>
using namespace std;

int main() {
  int ival = 100;
  int *p1ival = &ival;
  int **p2ival = &p1ival;
  cout << "p2ival with address " << p2ival
       << " points to p1ival with address " << p1ival << endl;
  return 0;
}
