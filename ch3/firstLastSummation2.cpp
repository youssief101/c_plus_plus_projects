#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int input;

    while (cin >> input) {
        numbers.push_back(input);
    }

    if (numbers.size() < 2) {
        cout << "At least two integers are required for adjacent sum calculations." << endl;
        return 1;
    }

    cout << "Sum of elements (first and last, second and second-to-last, and so on):" << endl;
    for (size_t i = 0, j = numbers.size() - 1; i < j; ++i, --j) {
        int sum = numbers[i] + numbers[j];
        cout << sum << " ";
    }

    // If there is an odd number of elements, print the middle element as is
    if (numbers.size() % 2 == 1) {
        cout << numbers[numbers.size() / 2] << " ";
    }

    cout << endl;

    return 0;
}
