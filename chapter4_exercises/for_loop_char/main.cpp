/*
 * This program will demonstrate the usage of for-loops in iteration, in comparison to while loops.
 * It will output the char and int value for that char for numerals, uppercase chars, and lowercase chars.
 */
#include "std_lib_facilities.h"

int main() {
    for(int i=48; i<=122; i++){
        if(i>=48 && i<=57 || i>=65 && i<=90 || i>=97 && i<=122){ //ranges of int values that give the chars we are looking for (numeric, uppercase, lowercase alpha)
            std::cout << i << "\t" << char(i) << std::endl;
        }
    }

    return 0;
}
