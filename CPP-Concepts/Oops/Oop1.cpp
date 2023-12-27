 /*
OOPS have classes that is nesting objects
Classes: template for creating objects
objects; run time entities
Data Abstraction(Abstracting(Refinement) data from into understandble things) and Encapsulation(En: insdie: Capsule: you know so Encap..= a process by which we put data that we abstract from somwhere put in capsule): wrapping data and funtion into single unit

Inheritance: Properties of one class can be inherited into others.

Polymorphism(Poly = many morphs: fomrs = converting into many forms): if you give each side value of square it will give you area that's polymophs side value converted into area and vice versa

Dynamic Binding:code which will execute is not known unitll the program runs.

Meassage Passing: object.message(Information)  sending the message

e.g.
Car: classes(group of people e.g. class of people: uppper middlecass ,lower class , upper class so ..)

brand , mfg year of a car: object(People type inside class lowermiddleclass: barber , driver so on...) 

methods of car(class): accelarate() 

calass = Employee has 2 bjects =  Private, Public
and objects have two method 1.setData for setting data 2.getdata for getting data

*/ 

#include <iostream>
#include <string>
using namespace std;

// Step:1 Creating class
class Employee{
    // Step:2 Creating acess specifier Private and public 
    
    // private and public: is acess specifier that helps to acess certain things 
    private:
    // int a,b,c = public members and d,e = private memebers
    int a,b,c,f;

    public:
    int d,e;

    // Step:3 Call the function setData that you made for putting values into
    // setData is the method by which can set data of public members(a,b,c);
    // Caution: we can setData only for public members
    void setData(int a1, int b1 , int c1, int f1  ); //Declaration

   // getData is method/function by which can acess the data of public members cuase they are public 
   // Caution: we can getData only for only  public members cause they are public 
    void getData(){
    cout <<"The  value of a is " <<a <<endl;
    cout <<"The  value of b is " <<b <<endl;
    cout <<"The  value of c is " <<c <<endl;
    cout <<"The  value of d is " <<d <<endl;
    cout <<"The  value of f is " <<f <<endl;
    cout <<"The  value of e is " <<e <<endl <<endl;
    };

    
};


//Defining the function setData and  We put public data into Employee class thorugh setData 
void Employee :: setData(int a1 , int b1, int c1 , int f1){ 

  a = a1;
  b = b1;
  c = c1;
  f = f1;
}

int main() {
// Emoployee name taussy and hello is object of employee class
Employee taussy; //Delcaration of object first object
// taussy.a = 14; a is private data so can't acess directly 
taussy.d = 11; //d is public data so it can acess directly
taussy.setData(1,2,3,5);
taussy.getData();

Employee hello; //Delcaration of object second object
hello.e = 121;
hello.setData(4,2,3,5);
hello.getData(); // We again use method getData to get the data of a,b,c and e(It's public so we can acess easily)
 };


