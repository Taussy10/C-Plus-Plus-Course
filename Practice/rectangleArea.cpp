/*
Given the length and breadth of a rectangle,
write a program to find whether the area of the
rectangle is greater than its perimeter.

1. give the lenght and breadth
*/

#include <iostream>

using namespace std;

int main()
{
  int l,b;

cin >>l;
cin >>b;

int Area =l*b;
int Perimeter =2*(l+b);
cout <<  "Area = " << Area <<endl;
cout << "Perimeter = " << Perimeter <<endl;

if (Area>Perimeter)
{
cout << "Area is greater than P" <<endl;
}
else
{
cout << "P is greater than A";
}

}
