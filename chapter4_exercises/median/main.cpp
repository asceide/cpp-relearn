#include "std_lib_facilities.h"

int main() {
    vector<double> temps;
    double sum=0;

    std::cout << "Please input some temperatures, or input | to stop reading inputs: ";
    for(double temp; cin>>temp;) //Use this for loop to read in inputs
        temps.push_back(temp); //pushes back into vector

    for(double x: temps) //Get the sum
        sum+=x;

    std::cout << "Average temperature: " << sum/temps.size() << std::endl; //Output the average by dividing the sum by the size of the vector

    sort(temps); //Sort the vector in order to find the median
    if(temps.size()%2!=0){ //If the vector has an odd number of elements, then the median will be the odd number directly in the middle. In this case the rounded up integer value of the size divided by two
        std::cout<<"Median temperature: " << temps[temps.size()/2] << std::endl;
    }else{ //If the vector has even, then you have to take the average between the middle two numbers
        double even_median=0;
        even_median=(temps[(temps.size()/2)-1] + temps[(temps.size()/2)])/2; //Remember, arrays/vectors start at 0 so you will have to look at the elements that are located at index of one less than the size divided by two, and the size/2
        std::cout << "Median temperatures: " << even_median << std::endl;
    }


    return 0;
}
