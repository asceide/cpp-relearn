/*
 * This program is used to show the usage of loops by outputting a table of characters and their respective integer values.
 */

#include "std_lib_facilities.h"

int main() {
    //Variables
    int i = 97; //Remember, characters have an integer value attached to them so we don't need to get creative. You can convert to char ( char(x) ) or just use iostream / printf.

    //For me, I will use printf when I don't have strings to use (to avoid issues in converting to char*), when I need to use type-safe operations (which ultimately is always but still),
    //Or when I am using a type outside of the primitive ones. Actually I should probably just use cout even if the verbosity is MEH.
    //Try to use endl only when you need to flush. otherwise just add \n at the end for speed.

    //Starts at 97 'a' and ends at 122 'z'
    while(i<123){
        std::cout << char(i) << "\t" << i << std::endl;
        //printf("%c\t%d\n", i, i); //
        i++; //increments 1
    }
    return 0;
}
