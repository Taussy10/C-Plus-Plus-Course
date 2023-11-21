/*
Input: 1234 
Output:
*
**
***
****
*****

S1: Identify the no. of rows = n
S2: Identify the no. of col 
s3: use formula in col to find out
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    


for (int row = 1; row <= n; row++)

{
 
for  (int col  = 1; col <=row; col++)
{
  cout<<"*";
}
// When one row is printed we need to add newLine
cout <<endl; 
  
 }
    
}
