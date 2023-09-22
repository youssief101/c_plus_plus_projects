#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int>v1;             // vector that holds objects of type int
  vector<int>v2(v1);         // v2 has a copy of each element in v1
  vector<int>v2 = v1;        // equivalent to v2(v1), v2 is a copy o fthe elements in v1
  vector<int>v3(10, 21);     // v3 has ten elements with value 21
  vector<int>v4(5);          // v4 has 5 copies of values-initialized objects
  vector<int>v5{1, 2, 4};    // v5 has as many elements as there are initializers
  vector<int>v6 = {1, 2, 4}; // equivalent to vector<int>v5{1, 2, 4}
  return 0;
}
