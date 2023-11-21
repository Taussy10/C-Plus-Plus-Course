/*WAP to print product of digits of a given
number. (There won'bt e a zero in the number)
1. Need a number
2. Need a number's digit: while loop so that you can 

*/

#include <iostream>
using namespace std;
 

int main()
{
  int n;
  int p = 1;
  cout<<"Enter a number >0: ";
  cin >> n;

   while ( n>0)
 {
  /*1. 36>0
  2. p = 1* 36%10 = 6 so = 6
  3. 36/10 = 3
  4. 3>0 
  5. 6*3 = 18 then 18%10 = 8 so change the code to 
  p = p*(n%10) first gives reminder then multiplying
  */
p = p* (n%10);
n = n/10;
 }
 cout<<p;

}
