#include<iostream>

// C++ program to display 7 days of 3 weeks

#include <iostream>
using namespace std;

int main() {
    int weeks = 3, days_in_week = 7;
// i <= weeks; : i is less than or equal to weeks 
/*1. for i = 1 yeah is less than weeks(3) 
so it will print "Week: 1" and go to newLine
then it  will be i = 2 and so on 
 
 */    for (int i = 1; i <= weeks; ++i) {
        cout << "Week: " << i << endl;
// j <= days_in_week; : j is  less than or equal to days_in_week
/*1. for j = 1 yeah is less than days_in_week(7) 
so it will print "Day: 1" and go to newLine 
Note: it won't go to i(outer loop) untill inner loop condition false
so it will print till j = 7 then move to i.
*/


        for (int j = 1; j <= days_in_week; ++j) {
            cout << "    Day:" << j << endl;
        }
    }

    return 0;
}
