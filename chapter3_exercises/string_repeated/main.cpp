#include "std_lib_facilities.h"

int main() {
    /*
     * In the sentence She she laughed He He He because what he did did not look very very good good
     * There are 5 repeated words.
     * She and she are not seen as repeated words because of the capitalization. In order for it to count as repeated, the case needs to be ignored.
     */
    string previous=" "; //White space initialized for comparison
    string current; //Holds the current word
    int number_of_words=0;
    cout << "Exit out of the program by pressing Ctrl-C or CMD-C, CLion Cmd+F2/Stop\n\n";
    cout << "\nInput words one by one please: ";
    while(cin>>current){//While there is still data to be parsed
        if(previous==current){ //if the current word is the same of the previous word
            number_of_words++;
            printf("\nThere were %d number of words repeated!\n", number_of_words);

        }
        else //else
            previous=current;
    }
    return 0;
}
