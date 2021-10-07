#include "std_lib_facilities.h"

/*
 * This is a program that prompts the user for some names, a gender, and an age. Then, it will output a simple letter using this information.
 */
int main() {
    string first_name=" "; //Holds your name
    string friend_name=" ";
    string other_friend=" ";
    char other_frisex=0;
    int age=0;

    //Prompts
    cout << "Please enter your first name: "; //Get first name
    cin >> first_name;
    cout << "Enter the name of the person you want to write to: "; //Get friends names
    cin >> friend_name;
    cout << "Enter another friends name: ";
    cin >> other_friend;
    cout << "Are they a man or a woman? (Please input m for male or f for female "; //Gender
    cin >> other_frisex;
    cout << "How old are they? "; //Age
    cin >> age;

    //Letter
    printf("\n\nDear %s,", friend_name.c_str()); //Remember to convert string to char*
    cout << "\n\nHow are you? I am fine. I miss you. I hope everything is alright over there! I really want to go and have lunch together soon...\n";
    printf("\nHave you seen %s lately?",other_friend.c_str());
    if(other_frisex=='m'){
        printf(" If you see %s please ask him to call me.", other_friend.c_str());
    }else
        printf(" If you see %s please ask her to call me.", other_friend.c_str());
    printf("\nI hear you had a birthday and you are %d years old.", age);
    if(age < 0 || age > 110){
        simple_error("You're kidding!");
    }else
        if(age<12){
            printf(" Next year you will be %d.", age+1);
        }else if(age==17){
            cout << " Next year you will be able to vote.";
        }else if(age>70){
            cout << " I hope you are enjoying retirement.";
        }
        cout << "\n\nYours sincerely,\n\nPatrick Alarcon";

    return 0;
}
