#include "std_lib_facilities.h"

int main() {
    int val1=0, val2=0; //holds user integers
    double dval1=0.0, dval2=0; //holds user floating
    int smaller=0, larger=0, diff=0, product=0, ratio=0; //integer operations
    double dsmaller=0, dlarger=0, ddiff=0, dproduct=0, dratio=0; //floating-point operations

    //Prompt
    cout << "This program will ask you to input four numbers: the first two are to be integers, the last two are to be floating-point numbers.\nPlease input the integer 1: ";
    cin >> val1;
    cout << "Please input integer 2: ";
    cin >> val2;
    cout << "Please input floating-point 1: ";
    cin >> dval1;
    cout << "Please input floating-point 2: ";
    cin >> dval2;

    //Integer operations
    //Smaller
    if(val1<val2){//Find smaller and larger numbers
        smaller=val1;
        larger=val2;
    }else {
        smaller = val2;
        larger = val1;
    }

    diff=larger-smaller; //Get the diff
    product=val1*val2; //Get the product
    ratio=larger/smaller; //Get the ratio

    //Double operations - Same as above
    if(dval1<dval2){
        dsmaller=dval1;
        dlarger=dval2;
    }else{
        dsmaller=dval2;
        dlarger=dval1;
    }
    ddiff=dlarger-dsmaller;
    dproduct=dval1*dval2;
    dratio=dlarger/dsmaller;

    printf("INTEGER\nThe smaller number is %d.\nThe larger number is %d.\nThe difference is %d.\nThe product is %d.\n"
           "The ratio is %d:1\n\n\nFLOATING POINT\nThe smaller number is %f.\nThe larger number is %f.\nThe difference is %f.\n"
           "The product is %f.\nThe ratio is %f:1.",smaller,larger,diff,product,ratio,dsmaller,dlarger,ddiff,dproduct,dratio);

}
