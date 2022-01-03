#include <iostream>
using namespace std;
void fillArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number[" << i << "]=";
        cin >> array[i];
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

void printCharArray(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void evenNumbers(int array[], int size) //Task 1 четните числа от масив
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i];
        }
    }
    cout << endl;
}

void evenPositionsNumbers(int array[], int size) //Task 2 елементи на четна позиция
{
    for (int i = 0; i < size; i += 2)
    {
        cout << array[i];
    }
    cout << endl;
}

int counterElementsWhichAreBigerThanNeighbors(int array[], int size) //Task 3 елементи по големи от суседите си
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[i + 1] && array[i - 1] < array[i])
        {
            count++;
        }
    }
    return count;
}

int arrLength(char chArr[]) //Task 4 с терминираща 0;
{
    int count = 0;
    while (chArr[count] != '\0')
    {
        count++;
    }
    return count;
}

bool isStringPalindrome(char chArr[]) //Task 5 дали низ е палиндром
{

    for (int i = 0; i <= arrLength(chArr) / 2; i++)
    {
        if (chArr[i] != chArr[(arrLength(chArr) - 1) - i])
        {
            return false;
        }
    }
    return true;
}

void arrayxNumber(int array[], int size, int number) //Task 6 int масив умножен по число
{
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i] * number;
    }
}

void arrayxNumber(double array[], int size, double number) //Task 6 int масив умножен по число
{
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i] * number;
    }
}

void reversAray(int array[], int reversaray[], int size) //Task 7 обръщане на масив
{
    for (int i = 0; i < size; i++)
    {
        reversaray[(size - 1) - i] = array[i];
    }
}

int main()
{
    int size, number;
    cout << "Enter size of arrey";
    cin >> size;
    cout << "Enter number";
    cin >> number;
    int array[size];
    int reversarray[size];

    fillArray(array, size);

    //Task 6
    arrayxNumber(array, size, number);

    //Task 7
    reversAray(array, reversarray, size);
    printArray(reversarray, size);

    char sentence[size];
    cin.ignore();
    cin.getline(sentence, size);

    //Task 4
    cout << arrLength(sentence);
    printCharArray(sentence, arrLength(sentence));

    //Task 5
    if (isStringPalindrome(sentence))
    {
        cout << "Yes";
    }
    else
        cout << "No";

    //Task 1
    evenNumbers(array, size);

    //Task 2
    evenPositionsNumbers(array, size);

    //Task 3
    cout << counterElementsWhichAreBigerThanNeighbors(array, size);
}