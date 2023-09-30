#include <iostream>
using namespace std;

void swap(int &v1, int &v2) {
  if (v1 == v2)
    // explicit return
    return;
  
  int temp = v1;
  v1 = v2;
  v2 = temp;
}

int main() {
  int v1 = 30, v2 = 20;
  swap(v1, v2);
  cout << v1 << " " << v2 << endl;
  return 0;
}
