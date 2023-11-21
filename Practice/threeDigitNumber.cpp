/*
Take positive integer input and tell if it
is a three digit number or not.

1. if = so use if else condition
2. How do i know a number is 3 digit: if it's greater than 99 and less than equal to 999
*/

#include <iostream>
using namespace std;

int main()
{
int a;
cout << "Enter an integer : "; 
cin >> a;

/*in CPP we don't do like this 99<a<1000 instad use logical opertor
such as 
&& = check both value weahter true or not , if anyone is false then false
|| = OR  check one of them one value weahter true or not , if anyone true then yeah 
 */

if (99<a && a<1000)
{
  cout << "Three digit number";
}
else
{
  cout << "NO";
}


}