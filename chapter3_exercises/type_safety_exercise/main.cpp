#include "std_lib_facilities.h"
/*
 * This program demonstrates unsafe type conversion/type-safety by using double to int, int to char, and then a char to int conversion.
 * There will be unsafe conversions whenever non-integer or integer numbers larger than the char list are used.
 */
int main() {
    double d=0; //Double for user input
    while(cin>>d){ //While there is an input
        int i=d; //Store the double to int
        char c=i; //Convert that int to a char
        int i2=c; //convert that char back to an int
        cout << "d=" << d //list the values.
             << "\ni=" << i
             << "\ni2=" << i2
             << "\nchar(" << c << ")\n";
    }
    return 0;
}
