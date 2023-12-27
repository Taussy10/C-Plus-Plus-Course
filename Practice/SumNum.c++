
// There are two types of headerFiles.
// 1. system header files : comes with compiler(ios stream)
// 2. user Defined files : Written by programmar(you can make learn about it)
#include<iostream>

using namespace std;

int main()
{
  int num1, num2;
  cout <<"Enter the value of num1: " ;
  cin>>num1 ; //cin is function of std use for extracting data from user 
  cout <<"Enter the value of num2: " ;
  cin>>num2 ; //cin is function of std use for extracting data from user 

  cout <<"Sum is:" << num1 + num2  ;
  return 0;
}
