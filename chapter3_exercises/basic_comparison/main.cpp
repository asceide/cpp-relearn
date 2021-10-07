#include "std_lib_facilities.h"

int main() {
    int val1=0, val2=0, val3=0; //holds the user integers
    int ismall=0, imid=0, ilarge=0; //holds the sorted integers
    string name1=" ", name2=" ", name3=" "; //holds the user strings
    string ssmall=" ", smid=" ", slarge=" "; //holds the sorted strings

    //Prompts
    cout << "This program will ask to for 3 integer values, and 3 strings. Then, it will sort them from smaller to largest.\nPlease input integer 1: ";
    cin >> val1;
    cout << "Please input integer 2: ";
    cin >> val2;
    cout << "Please input integer 3: ";
    cin >> val3;
    cout << "Please input string 1: ";
    cin >> name1;
    cout << "Please input string 2: ";
    cin >> name2;
    cout << "Please input string 3: ";
    cin >> name3;

    //Sorting
    //Because there are just three variables, there really isn't a need to think too much about it. Remember, keep things as simple as you can when possible.
    //First figure out which one of the two values is larger. If they are the same it doesn't matter much.
    if(val1<val2){
        ismall=val1;
        ilarge=val2;
    }else{ //If they are the same, just put them into both.
        ismall=val2;
        ilarge=val1;
    }
    //Here is the third number. You have to find if the 3rd value is smaller than the smallest, in the middle, or larger.
    if(val3<=ismall){
        imid=ismall;
        ismall=val3;
    }else if(val3>ismall && val3<ilarge){
        imid=val3;
    }
    else if(val3>=ilarge){
        imid=ilarge;
        ilarge=val3;
    }
    //Same ops but for Strings.
    if(name1<name2){
        ssmall=name1;
        slarge=name2;
    }else{
        ssmall=name2;
        slarge=name1;
    }

    if(name3<=ssmall){
        smid=ssmall;
        ssmall=name3;
    }else if(name3>=ssmall && name3<=slarge){
        smid=name3;
    }else if(name3>=slarge){
        smid=slarge;
        slarge=name3;
    }
    printf("\nThe integers sorted from smallest to largest are %d, %d, %d.\nThe strings sorted are %s, %s, %s.", ismall, imid, ilarge, ssmall.c_str(), smid.c_str(), slarge.c_str());
    return 0;
}
