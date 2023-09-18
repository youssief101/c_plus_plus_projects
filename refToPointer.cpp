/*
  Write a C++ code in which a reference refer to another pointer.
 */

#include <iostream>
using namespace std;

int main() {
  int ival = 100;
  int *pival = &ival;
  int* &refPIval = pival;

  cout << "Value of ival using ptr: " << *pival << endl;
  cout << "Value of ival using ref: " << *refPIval << endl;
  return 0;
}
