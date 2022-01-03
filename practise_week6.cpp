#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void printPairedPrimeNumbers(int m, int n) //Task 1
{
    for (int i = m; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (isPrimeNumber(i) && isPrimeNumber(j) && i + 4 == j && i % 2 != 0 && j % 2 != 0)
                cout << i << "  " << j << endl;
        }
    }
}

int fibonacNumber(int n) //Task 2
{
    if (n <= 2)
    {
        return 1;
    }
    int count = 2;
    int firstnumber = 1;
    int fibonacnumber;
    int secondnumber = 1;
    while (count != n)
    {
        fibonacnumber = firstnumber + secondnumber;
        firstnumber = secondnumber;
        secondnumber = fibonacnumber;
        count++;
    }
    return fibonacnumber;
}

double priceDiscount(double price, double discountPercentage) //Task 3
{
    double discountprice;
    price = price - discountPercentage / 100 * price;
    return price;
}
void play() //Task 4
{
    srand(time(NULL));
    bool flag = false;
    int howtry = 0;
    int generateNumber = rand() % 10;
    cout << generateNumber;
    int yourNumber;
    do
    {
        cout << "Guess number" << endl;
        cin >> yourNumber;
        if (generateNumber == yourNumber)
        {
            flag = true;
            cout << "You win !!";
        }
        else if (generateNumber < yourNumber)
        {
            cout << "The number is smaler!" << endl;
        }
        else
        {
            cout << "The number is bigger!" << endl;
        }
        howtry++;
    } while (howtry < 3 && flag == false);
    if (!flag)
        cout << "No more atempts!";
}

int main()
{
    //Task 1 /сдвоени прости числа
    int m, n;
    cout << "Enter m";
    cin >> m;
    cout << "Enter n";
    cin >> n;
    printPairedPrimeNumbers(m, n);

    //Task 2 /n-тото число на Фибоначи
    int number;
    do
    {
        cout << "Enter index of fibonac row " << endl;
        cin >> number;
    } while (number <= 0);
    cout << fibonacNumber(number);

    //Task 3 /намалената цена
    double price, discountPercentage;
    cout << "Enter price";
    cin >> price;
    cout << "Enter discountPercentage";
    cin >> discountPercentage;
    cout << "The price after discount is " << priceDiscount(price, discountPercentage);

    //Task 4 /играта guess the number
    play();
}