#include <iostream>
// Print Rectangle Perimter and Area


using namespace std;
 
//  main function that has code that need to output
int main()
{
  // so that you get value of decimals BTW float == double 
  float l;
  float w;
  // << stream Insertion operator(insert kr rha dekh)
 cout << "Enter lenght: ";
// >> stream exert operator(bahar nikal rha hai kr rha dekh)
 cin >> l;
 cout << "Enter width: ";
 cin>> w;
  cout <<"Perimeter of Rectangle: " << 2*(l +w) << endl;
  cout <<"Perimeter of Rectangle: " << l*w;  
}
