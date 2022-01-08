#include <iostream>
using namespace std;
void fillArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element [" << i << "] of array" << endl;
        cin >> *(array + i);
    }
}
int sumOfDoubleArray(int *array, int size)
{
    if (size == 1)
    {
        return 0;
    }
    if (*array > 0 && *array > *(array + 1))
    {
        return *array + sumOfDoubleArray(array + 1, size - 1);
    }
    return sumOfDoubleArray(array + 1, size - 1);
}

int fib(int number, int fib1, int fib2)
{
    if (number == 0)
    {
        return fib1;
    }
    return fib(number - 1, fib1 = fib2, fib1 + fib2);
}

int recStrlen(char *string)
{
    if (*string == 0)
    {
        return 0;
    }
    return 1 + recStrlen(string + 1);
}

bool isPalindrom(char *string, int i, int j)
{
    if (i == j || i == recStrlen(string) / 2)
    {
        return true;
    }
    if (string[i] != string[j])
    {
        return false;
    }
    return isPalindrom(string, i + 1, j - 1);
}

int sumOfArray(int *array, int size)
{
    if (size == 0)
    {
        return 0;
    }
    return *array + sumOfArray(array + 1, size - 1);
}

bool isSort(int *array, int size)
{
    if (size == 1)
    {
        return true;
    }
    if (array[0] > array[1])
    {
        return false;
    }
    return isSort(array + 1, size - 1);
}

int isPowof2(int number)
{
    if (number % 2 != 0)
    {
        return false;
    }
    if (number / 2 == 1)
    {
        return true;
    }
    return isPowof2(number / 2);
}

int minElement(int *array, int min, int size)
{
    if (size == 0)
    {
        return min;
    }
    if (array[0] < min)
    {
        min = array[0];
    }
    return minElement(array + 1, min, size - 1);
}

int main()
{
    // Task 1
    int array[5] = {1, -2, 3, -1, 5};
    int size = 5;
    cout << sumOfDoubleArray(array, size) << endl;

    // Task 2
    int number;
    cout << "enter number";
    cin >> number;
    cout << fib(number, 0, 1) << endl;

    // Task 3
    char string[256];
    cin.getline(string, 256);
    cout << isPalindrom(string, 0, recStrlen(string) - 1);

    // Task 4
    int array[5] = {1, -2, 3, -5, 5};
    int size = 5;
    cout << sumOfArray(array, size) << endl;

    // Task 5
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << boolalpha << isSort(array, size);

    // Task 6
    int number;
    cin >> number;
    cout << boolalpha << isPowof2(number);

    // Task 7
    int array[5] = {10, 15, 4, 15, 16};
    int size = 5;
    cout << minElement(array, array[0], size) << endl;
}