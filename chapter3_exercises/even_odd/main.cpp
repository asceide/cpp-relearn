#include "std_lib_facilities.h"

int main() {
    int user_input=0; //User input

    //Prompt

    cout << "This program will take an integer and determine if it is even or odd.\nPlease input a number: ";
    cin >> user_input;


    //The only problem with this is that integers only have a max of 2.1 something 7 billion values, so any number larger
    //than that will need a different method to find if it is even or odd, like converting to string and doing a
    //modulo operation on the final digit.
    if(user_input%2==0){
        printf("The value %d is an even number.", user_input);
    }else
        printf("The value %d is an odd number.", user_input);

    return 0;

}
