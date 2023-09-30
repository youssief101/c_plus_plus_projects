#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
  bool verbose = false;
  int count = 0;
  string inputFile;
  
  if (argc < 3 || argc > 7) {
    cerr << "invalid number of arguments or options" << endl;
    return -1;
  }
  
  for (int i = 0; i != argc; ++i) {
    if (argv[i] == "-v" || argv[i] == "--verbose")
      verbose = true;
    else if (argv[i] == "-c" || argv[i] == "--count")
      if (i + 1 < argc)
	count = stoi(argv[++i]);
      else {
	cerr << "Error: -c/--count requires an argument." << endl;
	return -1;
      }
    else if (argv[i] == "-i" || argv[i] == "--input")
      if (i + 1 < argc)
	inputFile = argv[++i];
      else {
	cerr << "Error: -i/--input requires an argument." << endl;
	return -2;
      }
    else {
      cerr << "Unknown option or argument: " << endl;
      return -3;
    }

    cout << "Verbose: " << (verbose ? "ture" : "false") << endl;
    cout << "Count: " << count << endl;
    cout << "Input file: " << inputFile << endl;
  
    return 0;
  }
}
