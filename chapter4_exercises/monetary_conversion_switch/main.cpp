/*
 * This program is a version of the monetary conversion program written earlier. Except that here we have added the ability to convert to and from dollars, and support conversions to the Chinese Yuan/RMB.
 * It is written to demonstrate the usage of switches.
 */

#include "std_lib_facilities.h"

int main() {
    //A series of Dollar to X currency conversions, current as of October 10, 2021.
    constexpr float DOLLAR_YEN_PRICE=112.27;
    constexpr float DOLLAR_KRONER_PRICE=8.53;
    constexpr float DOLLAR_POUNDS_PRICE=0.73;
    constexpr float DOLLAR_YUAN_PRICE=6.44;
    //Variables
    char to_from_choice=' ';
    char currency=' ';
    int to_yen=0;
    float money_amount=0, to_dollar=0, to_kroner=0, to_pounds=0, to_yuan=0;

    //Ask if the user wants to convert to or from dollars
    std::cout << "Would you like to convert to or from dollars?\nPlease input t for to or f for from." << std::endl;
    std::cin >> to_from_choice;

    if(to_from_choice=='t'){
        std::cout << "Current we only support conversions from Yuan or Kroner. Please input the currency you're using (r for Yuan and K for Kroner) followed"
                     " by the amount.\nAn example input would be r 120." << std::endl;
        std::cin >> currency >> money_amount;
        switch(currency){
            case 'r': to_dollar=money_amount/DOLLAR_YUAN_PRICE;
                      printf("Your %.2f Chinese Yuan converts to approximately %.2f American Dollars.", money_amount, to_dollar);
                      break;
            case 'k': to_dollar=money_amount/DOLLAR_KRONER_PRICE;
                      printf("Your %.2f Norwegian Kroner converts to approximately %.2f American Dollars.", money_amount, to_dollar);
                      break;
            default: std::cout << "You have not selected a proper currency to convert to dollars from. We only support Yuan (r) or Kroner (k) currently. Please run the program again";
                     break;
        }
    }else if(to_from_choice=='f'){
        std::cout << "Please input the currency you wish to convert to. Valid choices currently are y for Yen, k for Kroner, p for Pounds, r for Yuan, or a for all."
                     "\nAn example input would be y 120." << std::endl;
        std::cin >> currency >> money_amount;
        //Doing the calculations now since I gave each different currency its own variable.
        to_yen=money_amount*DOLLAR_YEN_PRICE; //Again, the conversion narrowing is fine because Yen doesn't use fractionals in their currency for everyday usage. The smallest amount in Yen is 1 Yen.
        to_kroner=money_amount*DOLLAR_KRONER_PRICE;
        to_pounds=money_amount*DOLLAR_POUNDS_PRICE;
        to_yuan=money_amount*DOLLAR_YUAN_PRICE;
        switch(currency){
            case 'a':
                printf("Your %.2f dollars can be converted for approximately %d Japanese Yen, %.2f Norwegian Kroner, %.2f English Pounds, and %.2f Chinese Yuan.", money_amount, to_yen, to_kroner, to_pounds, to_yuan);
                break;
            case 'k':
                printf("Your %.2f dollars can be converted for approximately %.2f Norwegian Kroner.", money_amount, to_kroner);
                break;
            case 'p':
                printf("Your %.2f dollars can be converted for approximately %.2f English Pounds.", money_amount, to_pounds);
                break;
            case 'r':
                printf("Your %.2f dollars can be converted for approximately %.2f Chinese Yuan.", money_amount, to_yuan);
                break;
            case 'y':
                printf("Your %.2f dollars can be converted for approximately %.2f Japanese Yen.", money_amount, to_yuan);
                break;
            default:
                std::cout
                        << "You did not select a proper currency to convert to or inputted incorrectly. Currently we only support Yen (y), Kroner (k), Pounds (p), and Yuan (r). The input must be formatted as"
                           "*currency* *amount*, like so: a 120. Please run this program again.";
                break;
        }
    }else
        std::cout << "You have not selected a valid input for whether you are converting to or from dollars. Please run the program again." << std::endl;
    return 0;
}
