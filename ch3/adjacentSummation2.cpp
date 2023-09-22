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

    cout << "Sum of adjacent elements:" << endl;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        int sum = numbers[i] + numbers[i + 1];
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
