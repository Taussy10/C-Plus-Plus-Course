/*
Pointers: Adress of a value; When excutable file works then it loads in RAM and it chagnes whenever you execute the programm;
adress will be hexadecimal;

can we store the adress ;
// we use pointers(variable) 

*/

#include <iostream>
using namespace std;
int main() {
    int x = 42;
    //&: adress of operator: tells Ram adress of variables
    cout <<  &x;

    /* 
    int y = 43;
    int* ptrs = &y;
    int* ptr = &x;  // ptr stores the memory address of x
    using namespace std;
    cout << "Value of x: " << x << endl;
    cout << "Memory address of x: " << &x << endl;
    cout << "Value at the memory address pointed to by ptr: " << *ptr <<endl;
    cout << *ptrs <<endl; */
}
