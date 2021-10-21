/*
 * This program is intended to demonstrate the usage of vector in multiple different scenarios, from reading from iostream and putting that into the vector, to sorting and reading from the vector.
 * To stop reading from iostream, use Ctrl-D on Unix/Ctrl-Z on Windows if you're using gcc/normal IDEs
 * If you are using CLion, right now Ctrl-D/Z is kind of borked where EOF causes the program to stop rather than stopping the stream. I would recommend to use debug instead of run in this case.
 */
#include "std_lib_facilities.h"
int main() {
    bool filtered=false; //Boolean to hold as to whether a word is filtered or not
    vector<string> filtered_words={"broccoli","asparagus","celery","beans"}; //Vector of words to be filtered
    vector<string> input_words; //Vector to hold the words a user inputs

    std::cout << "Please input a series of words.\n";
    for(string user_input; std::cin>>user_input;){ //Reads in a stream of user inputs and pushes them into the vector. Do remember that C++ string inputs are delimited by whitespace, so "green beans" would be stored into "green" and "breans" inside the vector.
        input_words.push_back(user_input); //Pushes the input into the vector.
    }
    sort(filtered_words); //Sorts the filtered word array just for a bit of efficiency. Worse case scenario in search is O(n) I think.
    for(string x : input_words){ //For each x in the vector that holds the input words
        for(string y : filtered_words){ //Looks for the word in the vector that holds the filtered words. I'm sure there is a better way to do this but I cannot think of one currently sadface.
            if(x==y){ //If the word is in the list
                filtered=true; //sets a flag
            }
        }
        if(filtered){ //if the word is filtered
            std::cout << "BLEEP\n"; //outputs BLEEP
            filtered=false; //resets the filtered flag
        }
        else
            std::cout << x << std::endl; //otherwise just outputs the word
    }

    return 0;
}
