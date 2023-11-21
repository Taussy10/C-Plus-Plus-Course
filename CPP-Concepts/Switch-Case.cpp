#include<iostream>

using namespace std;
// pretty simillar to if else statment

int main() {
    // declared a variable and ask user to write a number in that variable(container)
  int dayNumber;
    cout<<"Enter a number: ";
    cin >>dayNumber;

    // put variable in switch so that case can know that number exist then 
    switch (dayNumber) {
        case 1:
        // then case work according to variable
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
            // if case statement doesen't match then this will excute
        default:
            cout << "Write number between 1-3" << endl;
    } 
    return 0;
}
