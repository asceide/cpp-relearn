#include "std_lib_facilities.h"

int main() {
    string user_input=" ";
    int value=-1; //We initialize with -1 because we are taking 0 as a possible value.

    //prompt
    cout << "This program will take the spelled-out version of the numbers 0-4 and convert that into a numerical value."
            "\nPlease input zero, one, two, three, or four: ";
    cin >> user_input;

    //Conversions
    if(user_input=="zero"){
        value=0;
    } else if(user_input=="one"){
        value=1;
    } else if(user_input=="two"){
        value=2;
    } else if(user_input=="three"){
        value=3;
    } else if(user_input=="four"){
        value=4;
    }
    if(value>=0 && value<=4){ //The only values should be between 0 and 4. Anything outside of that is not recognized.
        printf("The numerical value of %s is %d.", user_input.c_str(), value);
    }else
        cout << "This is not an input I recognize.";

    return 0;
}
