#include "std_lib_facilities.h"

int main() {
    vector<double> distances;
    double sum=0;

    std::cout << "Please input distances, or input | to end the reading of inputs: ";
    for(double x; std::cin >> x;){ //Read user input
        distances.push_back(x);
    }

    for(double i : distances) //Sum up the distances
        sum+=i;

    sort(distances); //Sort the distances in order to find the smallest and largest, which will be the first and last indexes of the vector respectively.

    std::cout << "TOTAL DISTANCE: " << sum << "\nSMALLEST DISTANCE: " << distances[0] << "\nLARGEST DISTANCE: " << distances[distances.size()-1] << "\nMEAN DISTANCE: " << sum/distances.size(); //output the information.
}
