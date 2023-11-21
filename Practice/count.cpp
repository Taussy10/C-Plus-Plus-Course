/* Programm to count digits of a given number and add them.
1. We need a number
2. How to count a digit of a number: By dividing 10 example: 20 = 20/10 = 2 then 2/10 =0  mtlb ki jab tak x = 0 nhi ho jaata divide use kr to while loop use kr 

add digit values 
*/

#include <iostream>

using namespace std;

int main() {
    int x ; // Initialize x with a value.
    int d =0;
    int sum = 0;
    cout<<"Enter a number >0: ";
    cin>>x;
    while (x>0)
    {
      // We updated the x value
      x = x/10;
      d++;
      sum++;
    }
    
   
   cout <<endl  <<sum;
}
