#include <iostream>
#include <cmath>
using namespace std;
main()
{
   // Task 1
   int year, month;
   cout << "Enter month " << endl;
   cin >> month;
   cout << "Enter year" << endl;
   cin >> year;
   if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
   {
      switch (month)
      {
      case 1:
      case 3:
      case 5:
      case 7:
      case 9:
      case 11:
         cout << "Month is with 31 days";
         break;
      case 10:
      case 4:
      case 6:
      case 8:
      case 12:
         cout << "Month is with 30 days";
         break;
      case 2:
         cout << "Month is with 29 days";
         break;
      default:
         cout << "It isnt a month";
      }
   }
   else
   {
      switch (month)
      {
      case 1:
      case 3:
      case 5:
      case 7:
      case 9:
      case 11:
         cout << "Month is with 31 days";
         break;
      case 10:
      case 4:
      case 6:
      case 8:
      case 12:
         cout << "Month is with 30 days";
         break;
      case 2:
         cout << "Month is with 28 days";
         break;
      default:
         cout << "It isnt a month";
      }
   }
   return 0;
   // Task 2.1
   int number, sum;
   cout << "Enter numeber";
   cin >> number;
   switch (number)
   {
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
   case 7:
      cout << "0";
      break;
   case 8:
      cout << "2";
      break;
   case 9:
   case 6:
      cout << "1";
      break;
   default:
      cout << "Eror";
   }
   return 0;
   //  Task 2.2
   int number, sum;
   cout << "Enter numeber";
   cin >> number;
   switch (number)
   {
   case 1:
      cout << "one";
      break;
   case 2:
      cout << "two";
      break;
   case 3:
      cout << "thre";
      break;
   case 4:
      cout << "four";
      break;
   case 5:
      cout << "five";
      break;
   case 6:
      cout << "six";
      break;
   case 7:
      cout << "seven";
      break;
   case 8:
      cout << "eight";
      break;
   case 9:
      cout << "nine";
      break;
   default:
      cout << "Eror";
   }
   return 0;
   //  Task 3
   int leapyear;
   cout << "Enter year";
   cin >> leapyear;
   if (leapyear % 4 == 0 || leapyear % 100 == 0 || leapyear % 400 == 0)
   {
      cout << "The year is Leap";
   }
   else
   {
      cout << "the year is not leap";
   }
   return 0;
   //  Task 4
   int a, b, c;
   cout << "Enter a/b/c" << endl;
   cin >> a >> b >> c;
   if (c >= a + b || a >= b + c || b >= c + a)
   {
      cout << "Such a triangle does not exist" << endl;
   }
   else
   {
      cout << "Such a triangle does exist" << endl;
   }
   return 0;
   //  Task 5 a
   int p;
   bool hasdivided;
   cout << "Enter number";
   cin >> p;
   hasdivided = (p % 4 == 0 || p % 7 == 0) ? true : false;
   cout << boolalpha << hasdivided;
   return 0;
   // Task 5-b
   bool hasroots;
   int a, b, c, D;
   cin >> a >> b >> c;
   D = b * b - 4 * a * c;
   hasroots = D == 0 ? true : false;
   cout << boolalpha << hasroots;
   return 0;
   //  Task 5-v
   int a, b, distance;
   bool inrange;
   cout << "Enter cords" << endl;
   cin >> a >> b;
   distance = sqrt((0 - a) * (0 - a) + (1 - b) * (1 - b));
   inrange = distance <= 5 ? true : false;
   cout << boolalpha << inrange;
   return 0;
   //  Task 5-g
   int a, b, distance, c, d, f;
   bool inrange;
   cout << "Enter cords for your point" << endl;
   cin >> a >> b;
   cout << "Enter cords of center of а circle" << endl;
   cin >> c >> d;
   cout << "Enter a distance between center of a circle and the end of the circle" << endl;
   cin >> f;
   distance = sqrt((c - a) * (c - a) + (d - b) * (d - b));
   inrange = distance >= f ? true : false;
   cout << boolalpha << inrange;
   return 0;
   //   Task 5-d
   int a, b, distance;
   bool inrange;
   cout << "Enter cords for your point" << endl;
   cin >> a >> b;
   distance = sqrt((0 - a) * (0 - a) + (0 - b) * (0 - b));
   inrange = (distance <= 5 && a <= 0 && b <= 0) ? true : false;
   cout << boolalpha << inrange;
   return 0;
   //  Task 5-e
   int a, b, distance;
   bool inrange;
   cout << "Enter cords for your point" << endl;
   cin >> a >> b;
   distance = sqrt((0 - a) * (0 - a) + (0 - b) * (0 - b));
   inrange = (distance >= 5 && distance <= 10) ? true : false;
   cout << boolalpha << inrange;
   return 0;
   //  Task 5-ж
   double x;
   bool inrange;
   cout << "Enter X" << endl;
   cin >> x;
   inrange = (x >= 0 && x <= 1) ? true : false;
   cout << boolalpha << inrange;
   return 0;
   // Task 5-z
   double x;
   int a, b, c, max;
   bool inrange;
   cout << "Enter X" << endl;
   cin >> x;
   cout << "Enter a,b,c";
   cin >> a >> b >> c;
   max = a;
   if (b > max)
   {
      max = b;
   }
   if (c > max)
   {
      max = c;
   }
   inrange = (x == max) ? true : false;
   cout << boolalpha << inrange;
   // Task z/2
   int a, b, c, x;
   cout << "Enter four numbers: ";
   cin >> a >> b >> c >> x;
   bool isMax = a > b && a > c && x == a ? true : b > a && b > c && x == b ? true
                                              : x == c                     ? true
                                                                           : false;
   cout << boolalpha << isMax << endl;
   // Task 5-i;
   int a, b, c, x;
   cout << "Enter four numbers: ";
   cin >> a >> b >> c >> x;
   bool isMax = ((a > b && a < c) || (a < b && a < c) || (a < b && a > c)) && x == a ? true : ((b > a && b < c) || (b < a && b < c) || (b < a && b > c)) && x == b ? true
                                                                                          : ((c > a && c < b) || (c < a && c < b) || (c < a && c > b)) && x == c   ? true
                                                                                                                                                                   : false;
   cout << boolalpha << isMax << endl;
   // Task 5-k
   bool x, y, hasdone;
   cout << "Enter false";
   cin >> x;
   cout << "Enter true";
   cin >> y;
   hasdone = (x == true || y == true) ? true : false;
   cout << p;
   return 0;
   //   Task 5-l
   bool x, y, hasdone;
   cout << "Enter true or false";
   cin >> x;
   cout << "Enter true or false";
   cin >> y;
   hasdone = (x == true && y == true) ? true : false;
   cout << p;
   return 0;
   //  Task 5-m
   int a, b, c;
   bool ispositive;
   cout << "Enter three numbers";
   cin >> a >> b >> c;
   ispositive = a > 0 && b > 0 && c > 0 ? true : false;
   cout << boolalpha << ispositive;
   return 0;
   //   Task 5-n
   int number;
   bool isin;
   cout << "Enter 3 digit number";
   cin >> number;
   isin = ((number % 10 == 7) || (number / 10 % 10 == 7) || (number / 100 == 7)) ? true : false;
   cout << boolalpha << isin;
   return 0;
   //  Task 5-o
   int number;
   bool isin;
   cout << "Enter 3 digit number";
   cin >> number;
   isin = ((number % 10 != number / 10 % 10) && (number / 10 % 10 != number / 100) && (number / 100 != number % 10)) ? true : false;
   cout << boolalpha << isin;
   return 0;
   //  Task 5-p
   int number;
   bool isin;
   cout << "Enter 3 digit number";
   cin >> number;
   isin = ((number % 10 == number / 10 % 10) || (number / 10 % 10 == number / 100) || (number / 100 == number % 10)) ? true : false;
   cout << boolalpha << isin;
   return 0;
}
