#include "std_lib_facilities.h"

int main() {
    int pennies=0, nickels=0, dimes=0, quarters=0, half_dollars=0, dollars=0; //User inputs
    float total=0, dollar_value=0; //To calculate and hold the dollar values

    //Prompt

    std::cout << "This program will ask you to input a number of cent values (pennies, nickels, dimes, quarters, half-dollar, and dollar coins"
                 ", and give you a dollar value.\nPlease input the number of pennies you have: " << std::endl;
    std::cin >> pennies;
    std::cout << "Please input the number of nickels: " << std::endl;
    std::cin >> nickels;
    std::cout << "Please input the number of dimes: " << std::endl;
    std::cin >> dimes;
    std::cout << "Please input the number of quarters: " << std::endl;
    std::cin >> quarters;
    std::cout << "Please input the number of half-dollars: " << std::endl;
    std::cin >> half_dollars;
    std::cout << "Please input the number of dollar coins: " << std::endl;
    std::cin >> dollars;

    //Calculating the dollar value
    //Add the total amount by multiplying each coin by its value (1,5,10,25,50,100) and then dividing the total by 100.
    total=(pennies*1)+(nickels*5)+(dimes*10)+(quarters*25)+(half_dollars*50)+(dollars*100);
    dollar_value=total/100;

    printf("You have %d pennies.\nYou have %d nickels.\nYou have %d dimes.\nYou have %d quarters."
           "\nYou have %d half-dollars.\nYou have %d dollar coins.\nAll of this adds up to a total coin value of $%.2f",
           pennies, nickels, dimes, quarters, half_dollars, dollars, dollar_value);

    return 0;
}
