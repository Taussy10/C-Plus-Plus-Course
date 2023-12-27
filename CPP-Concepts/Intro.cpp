/*anything starts from # is preprocessor: before the code is compile the preprocess use some functionalities on the code such as puting header files*/
/* allows us to use the (predefined object) cout to generate output and the (manipulator)
endl. The statement */


//  iostream is a library Helps to io = input/output
// stream = sequence of bytes can be words/number 
#include<iostream>

// namespace is a folder which has file named as standard alias std and std have function such as cout 
// allows you to use cout and endl without the prefix std::. otherwise you have two write everywhere std::
using namespace std;
// main function for entry gate and int for integer
int main() {
       string b = "Hello " ; // Note: string literals must be enclosed in double quotes cause char is in single quotes and char returns single alphabet wheares string returns sequence of alphabet;

    // cout is same as Print in python print(a) but here instead of ( ) we use <<(Insertion operator) a greeting message
    // endl for /n changing into newline
   cout <<b <<"John" <<endl  <<"Let's learn C++" ;

    // setting main return value = 0 that indicates that successfully  program execute 
    return 0;
}

