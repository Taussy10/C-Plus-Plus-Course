#include <iostream>
/*

if row = 1 then col should print 5 then if row = 2 then col = 5
***
***
***
***

what is rectangle: row should print n 
and col should print n++
If i print 
*/
using namespace std;


int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;

  for (int row = 1; row<n; row++)
  {
  for (int col = 1; col<(n - 1); col++)
  {
    cout <<"*";
  }
  cout <<endl;
  }
  
}

/*
ABC
ABC
ABC
*/