#include <iostream>

// Function to find the maximum and minimum values in an array
void findMinMax(const int numbers[], int size, int& minVal, int& maxVal) {
    minVal = numbers[0];
    maxVal = numbers[0];

    for (int i = 1; i < size; ++i) {
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        }
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }
}

int main() {
    int numbers[] = {5, 2, 8, 1, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int minVal, maxVal;

    findMinMax(numbers, size, minVal, maxVal);

    std::cout << "Minimum value: " << minVal << std::endl;
    std::cout << "Maximum value: " << maxVal << std::endl;

    return 0;
}