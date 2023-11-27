/*
1. Always start with main function cause everything execute in function so it can't called once 
2. Above the main func
3. Retun: keyword tell the function body is end after return nothing 
4. void , int = retun type 
5. If you are using nested function then mkae sure the funtion that will execute at last should be at the top and main at the bottom 
6. Prebuild librarty function from maths we have such as sqrt(), pow() to get this include headrfile called #include<cmath>
*/
#include<iostream>
#include<cmath>
using namespace std;

 //Formal values
int sum(int a, int b)
{
  // cin>>a;
  // cin>>b;
  cout << a+b;
}


/*
void good() {
  cout<< "Good " ;
}
void greet() {
   cout<< "How are you " ;
   good();
} */

int main()
{
  //cout<< "hello" <<endl;
    //greet(); //Function Call
   // greet; Function Refrence

 //Pass by values: Actual values
// sum(7,13);
 
  cout<<sqrt(45);
}




