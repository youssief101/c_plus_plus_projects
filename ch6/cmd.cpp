#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  bool verbose = false;
  int count = 0;
  string inputFile;

  for (int i = 1; i != argc; ++i) {
    string arg = argv[i];

    if (arg == "-v" || arg == "--verbose")
      verbose = true;
    else if (arg == "-c" || arg == "--count")
      if (i + 1 < argc)
	count = stoi(argv[++i]);
      else {
	cerr << "-c/--count invalid" << endl;
	return -1;
      }
    else if (arg == "-i" || arg == "--input")
      if (i + 1 < argc)
	inputFile = argv[++i];
      else {
	cerr << "-i/--input invalid" << endl;
	return -1;
      }
    else {
      cerr << "Unknown option" << endl;
      return -1;
    }
  }

  cout << (verbose ? "true" : "false") << " " << count << " " << inputFile << endl;
  
  return 0;
}
