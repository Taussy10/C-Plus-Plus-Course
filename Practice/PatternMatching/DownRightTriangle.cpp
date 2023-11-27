/*

try to formulate formula between n,row and col
n= 5
so it n-row 
row = 1 col = 5 that means col loop 5  times which  beacuase you can't do by loop it's gonna do only once at time   
row = 2 col 4
row = 1 col = 1
so col -1

*****
****
***
**
*

 means it loop 5 times so it means and we col depend on row so we have to minus from row as it reaches = n it will subtract and 


*/


#include <iostream>
using namespace std;

int main()
{
  int n;
  int row;
  int col;
  cout <<"Enter a Number :";
  cin >>n;

  //RC
  //1(a) row = 1
  //2(a) row = 2
  //2(b) row = 3


  for ( row = 0; row<=n; row++)
  {
    //1(a)  col = 1 Dow 1 is less than or  = to 1-1 = 0 kya 1 0 se chhota hai  Nah it's a greater than 0 so loop will end  

    //2(a) col = 1 Does 1 is less than or = to 2-1 = 1 Kya 2 , 1 se chhota yaa =  hai  Yeah so it will print * 
    //2(b) col = 2 Does 2 is less than = to 2-1 = 1 Kya 2 , 1 se chhota hai  Yeah so it will print * 
    //2(b) col = 3 Does 3 is less than = to 2-1 = 1 Kya 3 , 1 se chhota hai  Nah so it will endl 

    //3(a) col = 1 Does 1 is less than = to 3-1 = 2 Kya 1 , 2 se chhota hai  Yeah so it will print * 
    //3(b) col = 2 Does 2 is less than = to 3-1 = 2 Kya 2 , 2 se chhota hai or =  Yeah so it will print * 
    //3(b) col = 3 Does 3 is less than = to 3-1 = 2 Kya 2 , 2 se chhota hai or =  Yeah so it will print * 
    for (col = 0; col<=n-row; col++)
    {
      cout<<"*";
    }
    cout<< endl;   
  }
}