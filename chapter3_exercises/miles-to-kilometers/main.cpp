#include "std_lib_facilities.h"

int main() {
    const double KILOMETERS_IN_MILES=1.609;//There are 1.609 kilometers in 1 mile
    double miles=0.0; //Hold the user miles
    double converted_kilometers=0.0; //holds the converted kilometers

    //Prompt
    cout << "How many miles do you want to convert to kilometers? ";
    cin >> miles;
    converted_kilometers=miles*KILOMETERS_IN_MILES;
    printf("\nMILES:%f\nKILOMETERS:%f",miles,converted_kilometers);

    return 0;
}
