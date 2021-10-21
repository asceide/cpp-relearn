/*
 * This program will take in a user's input of a # of dollars and a monetary unit of choice, and show how much those dollars
 * would be worth in that currency.
 */

#include "std_lib_facilities.h"

int main() {
    //Conversions of Dollar to Yen, Kroner, and Pounds as of October 10, 2021.
    constexpr float DOLLAR_YEN_PRICE=112.27;
    constexpr float DOLLAR_KRONER_PRICE=8.53;
    constexpr float DOLLAR_POUNDS_PRICE=0.73;
    //Variables
    char unit_input=' ';
    float dollar_amount=0.0;
    int to_yen=0.0;
    float to_kroner=0.0;
    float to_pounds=0.0;

    std::cout << "Please input a dollar amount to convert followed by a unit (y for Yen, k for Kroner, p for Pounds, a for All).\nAn example input would be '120 a'." << std::endl;
    std::cin >> dollar_amount >> unit_input;
    //I am doing int for yen because everyday Yen usage does not use fractional amounts. There are no .23 Yen, the minimal unit is 1 Yen.
    to_yen=dollar_amount*DOLLAR_YEN_PRICE; //Its fine if it narrows in this case.
    to_kroner=dollar_amount*DOLLAR_KRONER_PRICE;
    to_pounds=dollar_amount*DOLLAR_POUNDS_PRICE;
    //If statements for conversions
    if(unit_input=='y'){
        printf("Your dollar amount worth %.2f is worth approximately %d Japanese Yen.", dollar_amount, to_yen);
    } else if (unit_input=='k'){
        printf("Your dollar amount worth %.2f is worth approximately %.2f Norwegian Kroner.", dollar_amount, to_kroner);
    } else if (unit_input=='p'){
        printf("Your dollar amount worth %.2f is worth approximately %.2f English Pounds.", dollar_amount, to_pounds);
    }else if (unit_input=='a'){
        printf("Your dollar amount worth %.2f is worth approximately %d Japanese Yen, %.2f Norwegian Kroner, and %.2f English Pounds.", dollar_amount, to_yen, to_kroner, to_pounds);
    }else{
        std::cout << "You have made an incorrect choice. Please rerun the program and input a dollar amount and either y, k, p, or a. Goodbye!";
    }

    return 0;
}
