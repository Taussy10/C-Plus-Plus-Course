/*WAP to print reverse of a given
number.
Input: 1234 
Output: 4321
1. Take a number
2. take a variable to print reverse
3. How will I reverse the number: 
a: extract each digit by n%10 and n/10

*/

#include <iostream>

using namespace std;

int main()
{
  int n,r = 0;
  
cout << "Write a number: " ;
cin >>n;

while (n>0)
{
 int l =  (n%10);
 r = (r*10) +l;
 n = n/10;
}
cout  <<endl <<r;
}
