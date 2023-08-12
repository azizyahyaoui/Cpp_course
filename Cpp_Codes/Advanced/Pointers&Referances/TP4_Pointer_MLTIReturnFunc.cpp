#include <iostream>

using namespace std;

// Return multiple values from a function using pointers.

int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

int getMinAndMax(int numbers[], int size, int* min, int* max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
    }
}

int main()
{
    int numbers[10] = {5, 10, 58, 1, -2, -30, 50, 33, 20, 30};

    cout << "The minimum number is: " << getMin(numbers, 10) << endl;
    cout << "The maximum number is: " << getMax(numbers, 10) << endl;

    cout << "______________ with pointer : ________________________" << endl;

    int min= numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 10, &min, &max);

    cout << "The minimum number is: " << min << endl;
    cout << "The maximum number is: " << max << endl;

    return 0;
}
