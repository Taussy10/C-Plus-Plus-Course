/*10 ka factor nikalna hai 
What is a factor: a number is fully divisible by certain numbers

Fully divisible means: r = 0 so use % 
Example: 10 = 5 , 2,1,10 
Let number n  so n% 

Use for loop why so: that 1, 2, 3, .... n every number can check whether it's divisible or not.

Why till n = factor of 10 can't be greater than 10 and 10 be the last and greatest factor.

So how do we get the factor 
1. We will get 1,2,3...n so that we can divide = use for loop 
2. n%i == 0 so that get exact division we don't 1.5 we need 2
3. cout the i  
*/

// Shouldn't divide by 1 and itself
#include <iostream>

using namespace std;

int main()
{
int n;
cout << "enter a number: " ;
cin  >> n;

int i = 2;
for (i; i <n; i++)
{
  if (n%i == 0)
  {
    cout <<i <<endl;
  }
}
}
