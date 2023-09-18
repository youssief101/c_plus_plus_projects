#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1 = "Hello";
  string s2 = "Hello World";
  string s3 = "Hiya";

  // comparing s1 to s2
  if (s1 > s2)
    cout << s1 << " is greater than " << s2 << endl;
  else if (s1 < s2)
    cout << s1 << " is smaller than " << s2 << endl;
  else
    cout << s1 << " is equal to " << s2 << endl;

  // comparing s1 to s3
  if (s1 > s3)
    cout << s1 << " is greater than " << s3 << endl;
  else if (s1 < s3)
    cout << s1 << " is smaller than " << s3 << endl;
  else
    cout << s1 << " is equal to " << s3 << endl;

  // comparing s2 to s3
  if (s2 > s3)
    cout << s2 << " is greater than " << s3 << endl;
  else if (s2 < s3)
    cout << s2 << " is smaller than " << s3 << endl;
  else
    cout << s2 << " is equal to " << s3 << endl;
  
  return 0;
}
