#include <iostream>
using namespace std;

char &get_val(string &str, string::size_type ix) {
  return str[ix];
}

int main() {
  string s("some value");
  cout << s << endl;
  get_val(s, 0) = 'S';
  cout << s << endl;
  
  return 0;
}
