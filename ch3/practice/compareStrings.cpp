#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1 = "Hello", s2 = "Hello World", s3 = "Hiya";
  if (s1 > s2)
    cout << s1 << " is larger than " << s2 << endl;
  else
    cout << s1 << " is shorter than " << s2 << endl;

  if (s3 > s1 && s3 > s2)
    cout << s3 << " is larger than " << s1 << " and " << s2 << endl;
  return 0;
}
