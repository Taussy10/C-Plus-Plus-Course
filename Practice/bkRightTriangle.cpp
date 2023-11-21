/*
S1: Identify the no. of rows = n
S2: Identify the no. of col 
col = 1 col = 5 then 
rows = 2 col = 4  rows = 5 col = 1 
n = 5
row  = 1
i need 5 for col  = 5-1+1
row 
 means will be less than row
S3:What prining: * 

col -row or (n+1)-r let's say n = 5, r=1 then 5+1 = 6 and -1 = 5

row = 1 then 
col = 5 row =2 
then col = 4 
then row = 3 col = 3
so what's the relation between row and col : 
imagine n = 3 then row = 1 so col = 3 so it  
means we have to run 3 times in col 
3-r+1 =
 n = 3
 n-0  r = 1 col  = 3  
* * *  n-0(row)  and 1 is row here we start from 0 so looop will work from 0 to n (including n ) but we don't want  0 so start from n
* * n-1 
*  n-2

*/



#include <iostream>

using namespace std;

int main()
{
int n;
cout << "Enter value: "; 
cin >> n;

// This one will reach till 5 so use = sign row <= n
for (int row = 0; row <= n; row++)
{
  // Try to find formular relating  to row and col
  // This one will reach till 5 so use = sign row <= n
  for (int col  = 0; col<=n-row; col++)
  {
 cout<<"*";
  }
  cout<<endl;
}
}