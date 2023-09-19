#include <iostream>

void print(int* arr, int numRows, int numCols) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << arr[i * numCols + j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int numRows = 5;
    int numCols = 5;

    print(&arr[0][0], numRows, numCols);

    return 0;
}
