/*
Inshort: 
Vairalbe Adress stored: ek varialbe hai jo ki RAM me store ho rkha hai  jiska adress 
hai 
To know the adress:  &x 
Wanna save the adress: Hame adress ko  store krna hai qki chull machi hai takki baad me kabhi kaam aayega to use kr lenge
to kiase ek store
use pointer varialbe =  ek speacal varialbe use krke  jisme star aata hai int * p = &x;
 &x(Contains adress ) store kr lia hai  

 Pointer is also varialbe it's adress stored in memory: so know the adress and cycle continues............

We use astrik  * for Ref and Deref
Ref: getting adress of value using x:  int * p1 =  &x
Deref: getting value of x using adress: * p1 or * p1 = 12 changed the vlaues
// We can acess the value of x using pointer
// We can update the value of x using pointer


Pointers: Adress of a value; When excutable file works then it loads in RAM and gives a adress in RAM where it is placsd

// Where is it store in RAM(Printing adress/ How to get adress) : use adress of opeartor  
&: adress of operator: It knows adress of a variable cout <<  &x 
& used where it evalulate:
Adress: 0x61ff0c
it chagnes whenever you execute the programm;
adress will be hexadecimal;

How can we store the adress ? to use later
we use pointers(variable) to store adresses

in a varialbe(Container) called p we store the adress of a int dataType of xl (DataType of varialbe and pointer Varialbe should be same otherwise it will give error;   )
int * p = &x;
CHech wether you store adress or not:  cout<<p ;

Fun fact: the varialbe p is stored in RAM so it has it's adress so 
get the adress by  cout<<&p ;

//Astrik is use fo declaring pointer and derefencing pointer
*/

#include <iostream>
using namespace std;
int main() {
    int x = 42;
    cout <<"Using adress operator to get the adress of x : " <<  &x <<endl ;
    int * p1 = &x ;
    cout <<"adress of Pointer" <<&p1 <<endl;

    float y = 6.5;
    float * p2 = &y;
    cout <<"Adress of y: " <<  &y <<endl ;
    cout <<"Adress of Pointer y: " <<  &p2 <<endl ;
   
// Playing with null values;

// doesn't have any value 
int z;
//so it will print a random value
cout <<z <<endl ;
// will store in random adress
cout << &z <<endl ;

// Same thing will happen for pointers also Pointer having null Adresss
 int * p3;
//A random adress will genrate
cout <<"adress of null(store the random adress in RAM) :" <<p3 <<endl;


// How to use adress
// by using adress can we change the values of x ?
// Derefrence operator: What does refrence means: from refrence of wiki I can say c++ is programming
// so let's know wheter your ref write or not so we deref it: using refrence to get the actual valeus    
//A mechanism by which we can acess the values of x by adress by astrik;
// p1 has stored the adrss so we use astrik p to get the value that it has stored BTW don't write p1 cause it's varialbe that has stored the adress of x

cout << * p1 <<endl;

//Updating the valeu of x 
* p1 = 32;
cout << * p1;
}