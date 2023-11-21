/*
Take 3 positive integers input and print
the greatest of them.
*/

#include <iostream>
using namespace std;

int main()
{
int a,b,c;
cout << "Enter an integer : "; 
cin >> a;
cin >> b;
cin >> c;



if (a>b && a>c)
{
  cout << "A";
}
else if (b>a && b>c)
{
   cout << "B";
}
else if (c>b && c>a)
{
   cout << "C";
}




}