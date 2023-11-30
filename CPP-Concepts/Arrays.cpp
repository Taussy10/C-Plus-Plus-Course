/*
Arrays: Collection of elemtns of same dataType

int numbers[5] = {1, 2, 3, 4, 5};
We have allocate memory for 5 elements 

Caution: don't comfuse b/w num of elments(1 - 5) and Indexes(0...4) 

How can it be acessed: Array can be acessed throuogh indexes(0 - n)

How can it be CRUD: 
C: You can't cause for only 5 elments memory is allocated: It's is fixed
R: cout<< numbers[1];
U:numbers[4] =  6; 1st Updtate then then Print 
D: You can't cause for only 5 elments memory is allocated: It's is fixed

How to fix C and D 
int numbers[] = {1, 2, 3, 4, 5};
Create: Now it's fixed  you create new elment by numbers[5] =  7;
Delete: What do you mean by delete = 0 but inside memory there is number called 0 naa , OK but what do you want to show on memory of let's say 4 index
either you can show 0 or you can just 3 indices array so it's delete
Here it's your answer: int numbers[5] = {1, 2, 3};  // The remaining elements are set to 0 = delte 


 */ 
#include <iostream>
using namespace std;

int main()
{
int numbers[5] = {1, 2, 3, 4, 5};

cout<< numbers[1];
numbers[4] =  6;
cout<< numbers[4];
numbers[5] =  7;
cout<< numbers[5] <<endl;



//Array and loops
int even[5] = {2, 4, 6, 8, 10};

int sum = 0;

// it will check index num so alwasy start with i = 0 
for (int i = 0; i <5; i++)
{
  sum += even[i] ;
  //For newBie:  sum = sum+ even[i] ;
}
cout<<sum <<endl;


//Arrays and pointers

//cout<<  int * p1 = &x ;
// cout<<&even[0] <<endl; = cout<<&even <<endl; basically it 0 adress 
cout<<&even <<endl;
cout<<&even[3] <<endl ;

// wanna print values of arrays
//even[0] = even[0] has addrss of arrays so store the adress in p = 0  varialbe
//then we p +1 to get the value
int * p = even  ;
cout<<* (p+2) ;

}







