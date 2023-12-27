/*
WAP to print sum of digits of a given
number.
1. Need a number: by cin , cout
2. it's digits: from n%10 and n/10 i.e = 23/10 = 2 and 23%10 = 3 and sum it = 5 another method 25% = 5 then 20%10 = 2
3. add it
4. Display it: 
*/

#include <iostream>
using namespace std;

int main()
{
int n,f,l,sum = 0;
cout << "Enter the number: "; 
cin >> n;
/* Let's see how loop is working 
1. let's take a number = 43 
2. 43>0 so loops starts working
3. initial  sum = 0 + 43%10 = 3 so sum = 0+3 = 3
4. n = 43/10 = 4  (n = 4) 
5. check 4>0 =  loop again starts
6. sum = 3 + 4%10 = 3 + 4 = 7 (sum = 7)
7. n = 4/10 = 0 ( n = 0)
8. 0>0 so loops over
Note: whenever you use % , / , * put it in bracket 
I need those digit which are even numbers
*/

while (n>0)
{

    if (n %2 == 0)
    {
  sum = sum + (n%10);
  // why n/10 is store in variable cause 60/10 = 6 then  6 is store in n varialbe then 6>0 so loops work again same reason why sum + n%10 store in a variable.  
    }
     n = (n/10);
}
cout << sum;
}
