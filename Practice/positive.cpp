/* Take positive integer input and tell if it
is even or odd

1. Take a +ve integer input 
2. Tell if even else odd 
3. How to know number is even or odd: if it's properly(2/2 = 1  r ==0 , 10/2 = 5 r ==0 not 3/2 = r != 0  ) divisble by two even and reminder should be 0 else odd
4. so how to know reminder 0 or not search on google use %
 */

#include <iostream>

using namespace std;

int main()
{
int a;
cout << "Enter a positve integer: ";
cin >> a;
// How to remember sign: when cin then sign go to input variable and ask to input qki varialbe se input krwana hai 

if ( a%5 ==0  )
{
cout << "It's an even number";
// How to remember sign: when cout then sign go to cout and ask to out qki cout is output krwana hai
}
else
{
  cout << "It's an odd number";
}
}
