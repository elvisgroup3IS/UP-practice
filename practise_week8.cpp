#include <iostream>
using namespace std;
int const SIZE = 10;
void fillMatrix(int Matrix[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter numbter[" << i + 1 << "][" << j + 1 << "] of matrix" << endl;
            cin >> Matrix[i][j];
        }
    }
}

void fillArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "]";
        cin >> array[i];
    }
}

void printMatrix(int Matrix[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}

//task 1
int mostencounters(int matrix[][SIZE], int rows, int array[])
{
    int count = 0;
    int maxcount = 0;
    int index;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (matrix[j][i] == array[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (maxcount < count)
        {
            maxcount = count;
            index = i;
        }
        count = 0;
    }
    return index;
}

//task 4
int sumOfelEmentsOfDiagonals(int matrix[][SIZE], int size)
{
    int sum = 0;
    for (int j = 0; j < size; j++)
    {
        sum += matrix[j][j];
    }
    for (int j = 0; j < size; j++)
    {
        sum += matrix[j][j];
    }
    if (size % 2 != 0)
    {
        sum = sum - matrix[size / 2][size / 2];
    }
    return sum;
}

//task 3
void transposeMatrix(int matrix[][SIZE], int rows, int cols)
{
    int transposeMatrix[2][SIZE];
    transposeMatrix[cols][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
    printMatrix(transposeMatrix, cols, rows);
}

//task 2
void matrixMultiply(int firstMatrix[][SIZE], int firstrows, int firstcols, int secondMatrix[][SIZE], int secondrows, int secondcols, int multiplyMatrix[][SIZE])
{
    int size = secondrows;
    int element = 0;
    int sum = 0;
    for (int k = 0; k < firstrows; k++)
    {
        for (int j = 0; j < secondcols; j++)
        {
            for (int i = 0; i < size; i++)
            {
                sum = firstMatrix[i][k] * secondMatrix[j][i];
                element = element + sum;
            }
            for (int i = j; i < secondcols; i++)
            {
                multiplyMatrix[i][k] = element;
            }
            element = 0;
        }
    }
    printMatrix(multiplyMatrix, firstrows, secondcols);
}

int main()
{
    //task 1
    int matrix[SIZE][SIZE];
    int rows, arrsize;
    cout << "Enter arr size";
    cin >> arrsize;
    int arr[arrsize];
    fillArray(arr, arrsize);
    cout << "Enter rows";
    cin >> rows;
    matrix[rows][5];
    fillMatrix(matrix, rows, 5);
    printMatrix(matrix, rows, 5);
    cout << mostencounters(matrix, rows, arr);

    //Task 4
    int size;
    cout << "Enter matrix size";
    cin >> size;
    matrix[size][size];
    fillMatrix(matrix, size, size);
    printMatrix(matrix, size, size);
    cout << sumOfelEmentsOfDiagonals(matrix, size);

    //task 2
    int firstMatrix[SIZE][SIZE];
    int secondMatrix[SIZE][SIZE];
    int multiplyMatrix[SIZE][SIZE];
    int firstrows, firstcols, secondrows, secondcols;

    cout << "Enter firstmatrix rows";
    cin >> firstrows;
    cout << "Enter first matrix cols";
    cin >> firstcols;
    cout << "Enter second matrix rows";
    cin >> secondrows;
    cout << "Enter second matrix cow ";
    cin >> secondcols;

    if (firstcols != secondrows)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES";
    }

    firstMatrix[firstrows][firstcols];
    secondMatrix[secondrows][secondcols];
    multiplyMatrix[firstrows][secondcols];

    fillMatrix(firstMatrix, firstrows, firstcols);
    printMatrix(firstMatrix, firstrows, firstcols);

    fillMatrix(secondMatrix, secondrows, secondcols);
    printMatrix(secondMatrix, secondrows, secondcols);

    cout << "Multiply matrix is= " << endl;
    matrixMultiply(firstMatrix, firstrows, firstcols, secondMatrix, secondrows, secondcols, multiplyMatrix);

    //task 3
    transposeMatrix(firstMatrix, firstrows, firstcols);
}