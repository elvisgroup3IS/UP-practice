#include <iostream>
using namespace std;
const int SIZE = 10;
void fillArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element [" << i << "] of array" << endl;
        cin >> *(array + i);
    }
}

void printString(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        cout << string[i] << " ";
    }
    cout << endl;
}

void printMatix(int array[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void fillMatrix(int array[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter numbter[" << i + 1 << "][" << j + 1 << "] of matrix" << endl;
            cin >> array[i][j];
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void intSwap(int &firsteNumber, int &secondeNumber)
{
    int temp;
    temp = firsteNumber;
    firsteNumber = secondeNumber;
    secondeNumber = temp;
}

void doubleSwap(double &firsteNumber, double &secondeNumber)
{
    double temp;
    temp = firsteNumber;
    firsteNumber = secondeNumber;
    secondeNumber = temp;
}

int exchange(int &firstNumber, int secondNumber)
{
    int temp = firstNumber;
    firstNumber = secondNumber;
    return temp;
}

void arrayMultiplyWithNumber(int *array, int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        *(array + i) *= number;
    }
}

int *findElement(int *array, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) == element)
        {
            return array + i;
        }
    }
    return nullptr;
}

void minMax(int *array, int size, int &max, int &min)
{
    max = *array;
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) > max)
        {
            max = *(array + i);
        }
    }
    min = *array;
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) < min)
        {
            min = *(array + i);
        }
    }
}

int *findNumberInMatrix(int matrix[][SIZE], int rows, int cols, int number)
{
    int *cordinates = new int[2];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == number)
            {
                *cordinates = i;
                *(cordinates + 1) = j;
                return cordinates;
            }
        }
    }
}

void changNumbers(char *string)
{
    for (int i = 0; *(string + i) != '\0'; i++)
    {
        if (*(string + i) >= '0' && *(string + i) <= '9')
        {
            *(string + i) = '#';
        }
    }
}
int strlenght(char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
}

void changeBigToSmallLetters(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] - 'A' + 'a';
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 'a' + 'A';
        }
    }
}

int main()
{
    //Task 1
    int firstNumber, secondNumber;
    cout << "Enter first number";
    cin >> firstNumber;
    cout << "Enter first number";
    cin >> secondNumber;
    double firstDoubleNumber, secondDoubleNumber;
    cout << "Enter first number";
    cin >> firstDoubleNumber;
    cout << "Enter second number";
    cin >> secondDoubleNumber;
    intSwap(firstNumber, secondNumber);
    doubleSwap(firstDoubleNumber, secondDoubleNumber);

    // //Task 2
    int firstNumber, secondNumber;
    cout << "Enter first number";
    cin >> firstNumber;
    cout << "Enter first number";
    cin >> secondNumber;
    exchange(firstNumber, secondNumber);

    //Task 3
    int number;
    cout << "Enter  number";
    cin >> number;
    int array[SIZE];
    int size;
    cout << "Enter size";
    cin >> size;
    array[size];
    fillArray(array, size);
    arrayMultiplyWithNumber(array, size, number);
    printArray(array, size);

    //Task 4
    int element;
    cout << "Enter  element";
    cin >> element;
    int array[SIZE];
    int size;
    cout << "Enter size";
    cin >> size;
    array[size];
    fillArray(array, size);
    int *ptr = findElement(array, size, element);
    cout << ptr;

    //Task 5
    int max, min;
    int array[SIZE];
    int size;
    cout << "Enter size";
    cin >> size;
    array[size];
    fillArray(array, size);
    minMax(array, size, max, min);
    cout << max << " " << min;

    // Task 6
    int matrix[SIZE][SIZE];
    int rows, cols, number;
    cout << "Enter rows";
    cin >> rows;
    cout << "Enter cols";
    cin >> cols;
    cout << "Enter nuber to find";
    cin >> number;
    matrix[rows][cols];
    fillMatrix(matrix, rows, cols);
    int *ptr = findNumberInMatrix(matrix, rows, cols, number);
    cout << "The number is on " << *ptr << " row"
         << " and " << *(ptr + 1) << " colum.";

    //Task 7
    char string[256];
    cin.getline(string, 256);
    changNumbers(string);
    changeBigToSmallLetters(string);
    printString(string);
}