#include <iostream>
/*anything starts from # is preprocessor: before the code is compile the preprocess use some functionalities on the code such as puting header files*/

/* allows us to use the (predefined object) cout to generate output and the (manipulator)
endl. The statement */

// allows you to use cout and endl without the prefix std::. otherwise you have two write everywhere std::

using namespace std;
 
//  main function that has code that need to output
int main()
{
  // so that you get value of decimals BTW float == double 
  float l;
  float w;
  // << stream Insertion operator(insert kr rha dekh)
 cout << "Enter lenght:";
// >> stream exert operator(bahar nikal rha hai kr rha dekh)
 cin >> l;
 cout << "Enter width:";
 cin>> w;
  cout << 2*(l +w) << endl;
  cout << l*w;  
}
