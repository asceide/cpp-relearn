#include "std_lib_facilities.h"

char validation(char uinput);
double calculator(double num1, double num2, char operation);

int main() {
    double unum1=0, unum2=0, result=0;
    char u_choice=' ';

    std::cout << "Please input two numbers (can be floating point) followed by a operation [+,-,*,/], with spaces in between: ";
    std::cin >> unum1 >> unum2 >> u_choice;
    u_choice= validation(u_choice);
    result= calculator(unum1, unum2, u_choice);

    std::cout << "The result is " << result;
    return 0;
}

char validation(char uinput){
    char updated=' ';
    if(uinput!='+' && uinput!='-' && uinput!='*' && uinput!='/'){
        while(updated!='+' && updated!='-' && updated!='*' && updated!='/'){
            std::cout << "You have made an incorrect selection. Please select +,-,*,/: ";
            std::cin >> updated;
        }
        return updated;
    }else{
        return uinput;
    }
}

double calculator(double num1, double num2, char operation){
    switch(operation){
        case '+':
            return num1+num2;
        case '-':
            return num1-num2;
        case '*':
            return num1*num2;
        case '/':
            return num1/num2;
        default: return 0;
    }
}
