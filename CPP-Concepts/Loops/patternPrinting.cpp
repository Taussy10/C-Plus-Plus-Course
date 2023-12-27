/*
Input: 1234 
Output:
*
**
***
****
*****

1. Understand the pattern: 
a: first row contains one * then we go in 2nd like and 2 increases and so on

which loop to use
a. while: it will do when equations is false
b. for: it will put number one by one so we will use it 
2. Determine varialbes: then we have to know many rows are there
3. How will i reverse a number: 
a: extract each digit by n%10 and n/10

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // n = 5
    // row is for rows
    /* col is for coloumns = astriks and 
    rows = coloumns */

// number of times will run = 5 = n 
// Caution: always starts loop from 1 not 0 otherwise it will print from 0-5 which equals to 6 but it should print 5.
// step-1(a): n = 5 and row = 1 so does row(1) is less than or equal to n , Yeah so will go in inner loop.
// step-1(b): n = 5 and row = 2 so does row(2) is less than or equal to n , Yeah so will go in inner loop.
for (int row = 1; row <= n; row++)

{//For every row run how many coloumns = 5; 
// coloumn is less than or equal to row
// step-2(a(1)): row = 1 and  col = 1 so does  col(1) is less than or equal to row(1) Yeah so print * and col++ = 2 
// step-2(a(2)): row = 1 and  col = 2 so does  col(2) is less than or equal to row(1) Nah so loops break and  go to newLine and row++ = 2

/* step-2(b(1)): row = 2  col = 1  so does  col(1) is less than or equal to row(2) Yeah so print * and col++ = 2
/* step-2(b(2)): row = 2  col = 2  so does  col(2) is less than or equal to row(2) Yeah so print * and col++ = 3
/* step-2(b(3)): row = 2  col = 3  so does  col(3) is less than or equal to row(2) Nah  so loop break and newline enters and row++ = 3 
*/
 
for  (int col  = 1; col <=row; col++)
{
  cout<<"*";
}
// When one row is printed we need to add newLine
cout <<endl; 
  
 }
    
}

/*
How to apprach the problem
We need two loops for pattern:
1.Row(outer) 
2.Coloumn(inner)
Step-1: identify no. of cloumns and rows
so no. of lines(rows) = no. of times outer loops run
RC: 1st: 1 and 1
2nd: 2 and 2
3rd: 3 and 3

Step-2: Identify for every row no. how many cols are there i.g. = for 2 row 2 coloumns are there
or you can identfiy types of coloumns 1,2,3 here is astrik

Step-3: What do you need to print: astrik(*)
*/