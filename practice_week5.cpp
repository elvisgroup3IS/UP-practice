#include <iostream>
using namespace std;
int max(int a, int b) //Task0 по-голямото от две реални числа
{
    return a > b ? a : b;
}

void allPrimeNumbersInRange() //Task1 всички прости числа по-малки от 100
{

    for (int i = 2; i < 100; i++)
    {
        bool isprime = true;
        for (int j = 2; isprime && j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
            cout << i << " ";
    }
}

int isPrime(int number) //Task 2 n на брой числа, които са прости и са палиндроми
{
    for (int j = 2; j < number; j++)
    {
        if (number % j == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPalindromes(int number) //Task 2
{
    int left = 1;
    while (left <= number / 10)
    {
        left *= 10;
    }
    int right = 1;
    while (left > right)
    {
        if (number / left % 10 != number / right % 10)
        {
            return false;
        }
        left /= 10;
        right *= 10;
    }
    return true;
}

void printNPrimePalindromes(int n) //Task 2
{
    int number = 10;
    int count = 0;
    while (n != count)
    {
        if (isPrime(number) && isPalindromes(number))
        {
            cout << number << endl;
            count++;
        }
        number++;
    }
}

bool isPowerOfTwo(int number) //Task 3 дали то е степен на двойката
{
    int i = 2;
    while (number > i)
    {
        i *= 2;
        if (number == i)
        {
            return true;
        }
    }
    return false;
}

void isPowerOfNumber(int number, int firstNumber) //Task 4 дали първото е степен на второто
{
    bool isPower = false;
    int count = 1;
    int firstNumberCopy = firstNumber;
    while (number > firstNumber)
    {
        firstNumber *= firstNumberCopy;
        count++;
        if (number == firstNumber)
        {
            isPower = true;
            break;
        }
    }
    if (isPower)
    {
        cout << "yes ";
        cout << count;
    }
    else
    {
        cout << "no";
    }
}

main()
{
    //Task 1
    int a, b;
    cout << "Enter a and b";
    cin >> a >> b;
    cout << max(a, b);

    // //Task 2
    int number;
    cout << "Enter number";
    cin >> number;
    printNPrimePalindromes(number);

    // //Task 3
    int number;
    cout << "Enter number";
    cin >> number;
    cout << isPowerOfTwo(number);

    //Task 4
    int firstNumber, secondNumber;
    cout << "Enter number";
    cin >> firstNumber;
    cout << "Enter second number";
    cin >> secondNumber;
    isPowerOfNumber(firstNumber, secondNumber);

    return 0;
}