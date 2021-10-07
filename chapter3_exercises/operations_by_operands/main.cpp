#include "std_lib_facilities.h"

int main() {
    char user_operand=' '; //User input
    double val1=0, val2=0, results=0; //user input and results
    bool valid_operation=true; //To see if the user selected a valid operation, for output

    //Prompt
    std::cout << "This program will ask you to input a operand (+,-,*,/) and two digits, and perform the selected operations on the digits.\nInput the operand to use: ";
    std::cin >> user_operand;
    std::cout << "Input the first number: ";
    std::cin >> val1;
    std::cout << "Input the second number: ";
    std::cin >> val2;

    //+, -, *, or / operations
    if(user_operand=='+'){
        results=val1+val2;
    }else if(user_operand=='-'){
        results=val1-val2;
    }else if(user_operand=='*'){
        results=val1*val2;
    }else if(user_operand=='/'){
        results=val1/val2;
    }else{ //If the user input was invalid
        valid_operation=false;
    }
    if(valid_operation){ //Results
        printf("\nThe operations of %c for values %f and %f resulted in %f", user_operand, val1, val2, results);
    }else{ //If the user input is invalid.
        std::cout<<"\nYou did not select a valid operand.";
    }
    return 0;
}
