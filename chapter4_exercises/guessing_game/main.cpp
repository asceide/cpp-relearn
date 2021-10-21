#include "std_lib_facilities.h"

char validation(char user_i); //Validates user input for y or n, or else prompts them to make a correct choice

int main() {
    char user_choice = ' '; //holds user inputs
    int upper = 100, lower = 1, num_of_tries = 0; //holds the upper and lower bounds
    int range, guess; //holds the range between the upper and lower bounds and guesses by the computer
    std::cout << "Please think of a number between 1 to 100, and I will try and guess what it is.\n";

    do {
        range = upper - lower; //calcs the range
        guess = (upper + lower) / 2; //make a guess based on the upper and lower numbers, divided by two. ESSENTIALLY A BINARY SEARCH
        std::cout << "Is your number greater than " << guess
                  << "? "; //asks the user if a number is greater than its guess, exclusive
        std::cin >> user_choice;
        user_choice = validation(user_choice); //validation
        if (range <= 1 && tolower(user_choice) ==
                          'y') { //if there is less than 1 number difference between the upper and lower guesses, then the only choices are the upper or the lower bounds.
            guess = upper; //its kind of janky for 100 since even though the range is 0, the loop should exit and yet it doesn't. so far its only for that number. 1-99 work fine.
            // range = upper - lower; //useless
        } else if (range <= 1 && tolower(user_choice) == 'n') { //guesses the lower number
            guess = lower;
            // range = upper - lower;
        } else if (tolower(user_choice) == 'y') { //if range is greater than 1 then just proceed to 'binary search'
            lower = guess +
                    1; //Remember, it is greater than aka EXCLUSIVE. If I say a number is greater than 2, that doesn't include 2.
        } else if (tolower(user_choice) == 'n') {
            upper = guess;
        }
        if (upper ==
            lower) { //Special case for occasions like 100 when the range is 0 and upper==lower and yet the loop still runs lmao - quirk of do-while?
            guess = upper; //I mean does it matter which one gets its value assigned to the variable?
            range = upper - lower;
        }
        num_of_tries++;
    } while (range > 1);
    std::cout << "I have guessed your number and it is " << guess << ". This, after trying " << num_of_tries
              << " times!" << std::endl;
    return 0;
}

char validation(char user_i) {
    char updated = ' ';
    if (tolower(user_i) != 'y' && tolower(user_i) != 'n') {
        while (tolower(user_i) != 'y' && tolower(user_i) != 'n') {
            std::cout << "You have made an invalid input, please select Y or N. ";
            std::cin >> updated;
        }
        return updated;
    } else {
        return user_i;
    }
}
