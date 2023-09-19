#include <iostream>
#include "myFunction.h"

using namespace std;

int main() {
  int x = 5;
  if (isPrime(x))
    cout << x << " is prime" << endl;
  else
    cout << x << " isn't prime" << endl;
  return 0;
}
