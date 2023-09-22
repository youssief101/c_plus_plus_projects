#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <iterator>

using namespace std;

int main() {
    vector<string> words;
    string word;

    cout << "Enter a sequence of words (Ctrl+D to end input):\n";

    while (cin >> word) {
        words.push_back(word);
    }

    // Convert each word to uppercase
    for (auto& w : words) {
        for (auto& c : w) {
            c = toupper(c);
        }
    }

    // Print the transformed elements, eight words to a line using iterators
    int count = 0;
    for (auto it = words.begin(); it != words.end(); ++it) {
        cout << *it << " ";
        count++;

        // Print eight words per line
        if (count == 8) {
            cout << endl;
            count = 0;
        }
    }

    // Print a newline if there are remaining words
    if (count != 0) {
        cout << endl;
    }

    return 0;
}
