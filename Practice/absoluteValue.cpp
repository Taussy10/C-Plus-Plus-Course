/* convert in absolute value
1. Wha is abs value = if less than 0 make it +ve like -1 = 1
*/
#include <iostream>

using namespace std;

int main()
{
int a;
cout << "Enter an integer: ";
cin >> a;

if ( a<=0 )
{
  cout <<-a;
}
else
{
  cout <<a;
  }

}
