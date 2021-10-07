#include "std_lib_facilities.h"

int main() {
    int n=0;
    double float_n=0.0;
    cout << "Please enter an integer value: ";
    cin >> n;
    float_n=n;
    cout << "n is " << n << "\nn+1 is " << n+1 << "\nthree times n is " << 3*n << "\ntwice n is " << n+n
            << "\nn squared is " << n*n << "\nhalf of n is " << float_n/2 << "\nsquare root of n is " << sqrt(float_n)
            << "\nthe remainder of 10 divided by n is " << 10%n << endl;


    return 0;
}
