/*
  Write code to change the value of a pointer
 */
#include <iostream>
using namespace std;

int main() {
  int ival1 = 100;
  int ival2 = 200;
  int *pival = &ival1;
  // print the value where pival points
  cout << *pival << endl;
  // change the value to which pival point
  pival = &ival2;
  cout << *pival << endl;
  return 0;
}
