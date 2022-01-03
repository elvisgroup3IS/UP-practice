#include <iostream>
#include <cmath>
using namespace std;
main()
{
    //task 1
    int number1, number2;
    cout << "enter two  numbers";
    cin >> number1 >> number2;
    if (number1 > number2)
    {
        cout << number1 << "is bigger";
    }
    else if (number2 > number1)
    {
        cout << number2 << "is bigger";
    }
    else
    {
        cout << "the numbers are Equal";
    }
    //task 2
    int number;
    cout << "enter number";
    cin >> number;
    if (number >= 1 && number <= 12)
    {
        cout << "it is a valid mounth";
    }
    else
    {
        cout << "it isn't a vailid mounth";
    }
    //task 3
    int x, a, b;
    cout << "enter x";
    cin >> x;
    cout << "enter a";
    cin >> a;
    cout << "enter b";
    cin >> b;
    if (a >= b)
    {
        cout << "wrong range";
        return 0;
    }
    if (x > a && x < b)
    {
        cout << "Yes the number is in this range";
    }
    else
    {
        cout << "No the number isnt in this range";
    }
    return 0;
    //task 4
    char symbol;
    cout << "Enter a symbol";
    cin >> symbol;
    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
    {
        cout << "Your symbol is a letter";
    }
    else
    {
        cout << "Your symbol isnt a letter";
    }
    int number1, number2;
    cout << "Enter secondnumber";
    cin >> number1;
    cout << "Enter firstnumber";
    cin >> number2;
    if (number1 > 0)
    {
        if (number2 > 0)
        {
            cout << "Both numbers are positive";
        }
        else
            cout << "Only one number is positive";
    }
    else
    {
        if (number2 > 0)
        {
            cout << "only one number is positive";
        }
        else
        {
            cout << "The numbers are negative";
        }
    }
    //task 6
    int numberMonth;
    cout << "Enter number";
    cin >> numberMonth;
    switch (numberMonth)
    {
    case 1:
    {
        cout << "January";
    }
    break;
    case 2:
    {
        cout << "February";
    }
    break;
    case 3:
    {
        cout << "March";
    }
    break;
    case 4:
    {
        cout << "April";
    }
    break;
    case 5:
    {
        cout << "May";
    }
    break;
    case 6:
    {
        cout << "June";
    }
    break;
    case 7:
    {
        cout << "July";
    }
    break;
    case 8:
    {
        cout << "August";
    }
    break;
    case 9:
    {
        cout << "September";
    }
    break;
    case 10:
    {
        cout << "October";
    }
    break;
    case 11:
    {
        cout << "November";
    }
    break;
    case 12:
    {
        cout << "December";
    }
    break;
    default:
    {
        cout << "Not valid number\n";
    }
    break;
    }
    //Task 7
    int n, m, k;
    cin >> n >> m >> k;
    if ((k < n * m) && (k % n == 0 || k % m == 0))
    {
        cout << "Yes it can Happened";
    }
    else
    {
        cout << "No it can't Happened";
    }

    //Task 8;

    double a, b, c, D, x1, x2;
    cout << "Enter coefficient in front of  x 2=" << endl;
    cin >> a;
    cout << "Enter coefficient in front of  x" << endl;
    cin >> b;
    cout << "Enter free coefficient" << endl;
    cin >> c;
    D = b * b - 4 * a * c;
    if (D < 0)
    {
        cout << "No results";
        return 0;
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        cout << "result is =" << x1;
    }
    else
    {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
        cout << "results are x1==" << x1 << "x2==" << x2;
    }
    //Task 9

    cout << "Task 9\n";
    double sum;
    int from, to;
    cout << "1 - BGN \n2 - USD \n3 - EUR\n4 - GBP\n";
    cout << "Choose currencies by entering the coresponding number\n";
    cout << "Enter <sum> <from currency> <to currency>: ";
    cin >> sum >> from >> to;

    if (sum < 0)
    {
        cout << "Invalid sum\n";
    }
    else
    {
        switch (from)
        {
        case 1:
        {
            switch (to)
            {
            case 2:
                cout << sum * 0.59 << endl;
                break;
            case 3:
                cout << sum * 0.51 << endl;
                break;
            case 4:
                cout << sum * 0.43 << endl;
                break;
            default:
                cout << "Invalid number\n";
                break;
            }
        }
        break;
        case 2:
        {
            switch (to)
            {
            case 1:
                cout << sum * 0.59 << endl;
                break;
            case 3:
                cout << sum * 0.86 << endl;
                break;
            case 4:
                cout << sum * 0.73 << endl;
                break;
            default:
                cout << "Invalid number\n";
                break;
            }
        }
        break;
        case 3:
        {
            switch (to)
            {
            case 1:
                cout << sum * 1.96 << endl;
                break;
            case 2:
                cout << sum * 1.16 << endl;
                break;
            case 4:
                cout << sum * 0.84 << endl;
                break;
            default:
                cout << "Invalid number\n";
                break;
            }
        }
        break;
        case 4:
        {
            switch (to)
            {
            case 1:
                cout << sum * 2.32 << endl;
                break;
            case 2:
                cout << sum * 1.37 << endl;
                break;
            case 3:
                cout << sum * 1.18 << endl;
                break;
            default:
                cout << "Invalid number\n";
                break;
            }
        }
        break;
        default:
            cout << "Invalid currency\n";
        }
    }

    //Homework
    //Task 1
    bool hasbeer, hasrakia, hasice;
    cout << "Enter if he has a BEER  " << endl;
    cin >> hasbeer;
    cout << "Enter if he has a RAKIA  " << endl;
    cin >> hasrakia;
    cout << "Enter if he has ICE  " << endl;
    cin >> hasice;
    if (hasbeer == true)
    {
        cout << "Drink home";
    }
    else if (hasrakia == true && hasice == true)
    {
        cout << "Drink home";
    }
    else
    {
        cout << "He will buy";
    }

    //Task 2
    int meters, paintmeters;
    cout << "How many meters Tisho painted";
    cin >> paintmeters;
    meters = (paintmeters * 2) + (paintmeters * (paintmeters - 1));
    cout << meters;
    return 0;
}