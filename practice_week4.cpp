#include <iostream>
#include <cstdlib>
using namespace std;

main()
{
    // Task 1
    int number;
    do
    {
        cout << "Enter number ";
        cin >> number;
    } while (number < 9 || number > 99);

    // Task 2
    int n, m;
    cout << "Enter n and m";
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Task 2-b
    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Task 3
    int n, facturiel = 1;
    cout << "enter n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        facturiel = facturiel * i;
    }
    cout << facturiel;
    // Таск 4
    int first, second, third, count = 0;
    for (int i = 100; i <= 999; i++)
    {
        first = i / 100;
        second = i / 10 % 10;
        third = i % 10;
        if (first != second && first != third && second != third)
        {
            cout << i << " ";
            count++;
        }
        cout << endl
             << "Count is " << count;
        // Task 5
        int first, second, third, proizv;
        for (int i = 100; i <= 999; i++)
        {
            first = i / 100;
            if (first == 0)
                first = 1;
            second = i / 10 % 10;
            if (second == 0)
                second = 1;
            third = i % 10;
            if (third == 0)
                third = 1;
            proizv = first * second * third;
            if (i % proizv == 0)
            {
                cout << i << " ";
            }
        }
        // Task 6
        int number, n = 0;
        cout << "Enter yournumber";
        cin >> number;
        n = rand() % 1000;
        while (number != n)
        {
            if (number > n)
            {
                cout << "down" << endl;
                cout << "enter number";
                cin >> number;
            }
            else
            {
                cout << "up" << endl;
                cout << "enter number";
                cin >> number;
            }
        }
        cout << "This is the number";

        return 0;
    }