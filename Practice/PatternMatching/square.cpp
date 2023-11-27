/*Wanna print square
what do you know about square
1.How many rows and columns should be there by n and it should print  rows = coloumns
1. n = row = columns so it should print * as number of rows = coloumns

S1: Identify the no. of rows = n
S2: Identify the no. of columns = n
S3:What prining: * 
*/

#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
for (int row  = 0; row <= n; row++)
{
  /* code */
  for (int col  = 0; col <= n; col++)
  {
    cout<<"*";
  }
  cout<<endl;
}



}