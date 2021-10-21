/*
 * This program is to define a square function without using the multiplication operand. That is there is a number of addition operations
 * we would have to do in order to achieve the square of a number.
 */
#include "std_lib_facilities.h"

int square(int num_to_square); //Function declaration, if I remember correctly we have to do this at the top and then actually make the function definition after the main.
int main() {
    for(int i=1; i<=100; i++){ //For-loop to create a table that contains a number and its square, from 1-100.
        std::cout << i << "\t" << square(i) << std::endl;
    }

    return 0;
}
//Function square: this program will take an n number, and then add n to a variable named total an n number of times, and return the total which contains the square of that number.
int square(int num_to_square){
    int total=0;
    for(int x=0; x<num_to_square; x++){
        total+=num_to_square;
    }
    return total;
}

