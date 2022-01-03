#include <iostream>
using namespace std;
const int SIZE = 10;
int stringLenght(char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
}

void printString(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        cout << string[i] << " ";
    }
    cout << endl;
}

char *stringCopyNew(char string[])
{
    char *newstring = new char[stringLenght(string)];
    for (int i = 0; string[i] != '\0'; i++)
    {
        newstring[i] = string[i];
    }
    return newstring;
}

char *stringCatNew(char *firstString, char *secondString)
{
    char *stringCat = new char[stringLenght(firstString) + stringLenght(secondString) + 1];
    for (int i = 0; firstString[i] != '\0'; i++)
    {
        stringCat[i] = firstString[i];
    }
    for (int i = 0; secondString[i] != '\0'; ++i)
    {
        stringCat[i + stringLenght(firstString)] = secondString[i];
    }
    return stringCat;
}

int strcmp(char *firstString, char *secondString)
{

    int count = 0;
    for (int i = 0; firstString[i] != '\0'; i++)
    {
        if (firstString[i] < secondString[i])
        {
            count++;
        }
        if (firstString[i] > secondString[i])
        {
            count--;
        }
    }
    return count;
}

char swap(char &firsteNumber, char &secondeNumber)
{
    char temp;
    temp = firsteNumber;
    firsteNumber = secondeNumber;
    secondeNumber = temp;
}

void revers(char *string)
{
    int size = stringLenght(string);
    for (int i = 0; i < size / 2; i++)
    {
        swap(string[i], string[size - 1 - i]);
    }
}

void replace(char *string, char simbol, char repSimbol)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == simbol)
        {
            string[i] = repSimbol;
        }
    }
}

int find(char *string, char element)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int count(char *string, char element)
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == element)
        {
            count++;
        }
    }
    return count;
}

char *substr(char string[], int begining, int end)
{
    char temp;
    int sizenNewString = (end - begining) + 1;
    char *newString = new char[sizenNewString];
    for (int i = begining; i <= end; i++)
    {
        temp = string[i];
        newString[i - begining] = temp;
    }
    newString[end - 1] = '\0';
    return newString;
}

bool isExist(char *string, char element)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == element)
        {
            return true;
        }
    }
    return false;
}

bool strstr(char *firstString, char *secondString)
{
    for (int i = 0; firstString[i] != '\0'; i++)
    {
        if (!isExist(secondString, firstString[i]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // Task 1 strcpy
    char string[256];
    cin.getline(string, 256);
    char *strgcopy = stringCopyNew(string);
    printString(strgcopy);
    delete[] strgcopy;

    // Task 2 strcat
    char firstString[256], secondString[256];
    cin.getline(firstString, 256);
    cin.getline(secondString, 256);
    char *newString = stringCatNew(firstString, secondString);
    printString(newString);
    delete[] newString;

    // Task 3 strlen
    char string[256];
    cin.getline(string, 256);
    cout << stringLenght(string);

    // Task 4 strcmp
    char firstString[256], secondString[256];
    cin.getline(firstString, 256);
    cin.getline(secondString, 256);
    if (stringLenght(firstString) != stringLenght(secondString))
    {
        cout << "Can not be compare!";
        return 0;
    }
    if (strcmp(firstString, secondString) > 0)
    {
        cout << firstString << "<" << secondString;
    }
    if (strcmp(firstString, secondString) < 0)
    {
        cout << firstString << ">" << secondString;
    }
    if (strcmp(firstString, secondString) == 0)
    {
        cout << firstString << "=" << secondString;
    }

    //Task 5 reverse
    char string[256];
    cin.getline(string, 256);
    revers(string);
    printString(string);

    //Task 6 replace
    char string[256];
    char simbol, repSimbol;
    cin.getline(string, 256);
    cout << "Enter simbol to replace" << endl;
    cin >> simbol;
    cout << "Enter simbol to replace" << endl;
    cin >> repSimbol;
    replace(string, simbol, repSimbol);
    printString(string);

    // Task 7 find
    char string[256];
    cin.getline(string, 256);
    char simbol;
    cout << "Enter simbol to replace" << endl;
    cin >> simbol;
    cout << find(string, simbol);

    // Task 8 count
    char string[256];
    cin.getline(string, 256);
    char simbol;
    cout << "Enter simbol to count how times exist in the string" << endl;
    cin >> simbol;
    cout << count(string, simbol);

    // Task 9 substr
    char string[256];
    cin.getline(string, 256);
    int begin, end;
    cout << "Enter idex to begin" << endl;
    cin >> begin;
    cout << "Enter idex to end" << endl;
    cin >> end;
    if (end > stringLenght(string))
    {
        cout << "The subset cant be create !";
        return 0;
    }
    char *newString = substr(string, begin, end);
    printString(newString);
    delete[] newString;

    //Task 10 strstr
    char firstString[256], secondString[256];
    cin.getline(firstString, 256);
    cin.getline(secondString, 256);
    cout << boolalpha << strstr(firstString, secondString);
}