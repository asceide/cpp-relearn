#include "std_lib_facilities.h"
int main() {
    string first_name="???"; //In C++, Strings are mutable. Therefore it is okay to define and initialize it.
    int age=0; //holds the user age
    double age_in_months=0.0; //age in months
    const int MONTHS=12; //How many months are in a year?

    //Prompt
    cout << "Please insert your first name: ";
    cin >> first_name;
    cout << "How old are you? ";
    cin >> age;

    age_in_months=age*MONTHS;

    cout << "Hello " << first_name << ". You are " << age_in_months << " months old\n";
    /*
     * A feature of a lot of languages, variadic functions are great. There are several uses like shown below.
     * %d corresponds to an int type
     * %f to floating types like float/double
     * %s to a reference of char array via c*
     * Thats the thing, printf is a C function and you cannot pass a String to %s. It must be converted to char*.
     * This can be done via .c_str() which returns a pointer to an array of char (char*).
     */
    printf("This is an alternative way to print using printf. See source for info\nHello %s. You are %f months old!\nExiting", first_name.c_str(), age_in_months);
    return 0;
}
