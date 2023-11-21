/*Print the factorial of a given number ‘n’
1. Take n
2. what is factorial decrasing number one by one and multiplying
5! = 5*4*3*2*1
20,12,6,2,
*/
#include <iostream>

using namespace std;

int main()
{
  int n,f = 1;
cout<<"Enter a number: ";
cin>>n;
 
 while (n>0)
 {
  f = (n*f);
    n = n-1;
 }
 cout<<f;

}
