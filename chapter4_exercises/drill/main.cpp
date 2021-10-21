/*
 * This program is meant to gather entries from the user, consisting of a value representing distance, and a unit (feet, inches, centimeters, and meters)
 * It will then convert them to meters in order to hold the total sum of the user entries, the smallest, the largest, and the number of entries.
 * Entries, converted to meters, will be stored in a vector. This vector will be sorted and outputted back to the user after the program is finished taking entries, along with other statistics.
 */

#include "std_lib_facilities.h"

double convert_to_meters(double value, string unit); //Function to convert entries to meters
bool determine_min(double value1, double value2); //To determine if a number is smaller than the other
bool determine_max(double value1, double value2); //To determine if a number is larger than the other
bool check_entry(string user_value); //To determine the validity of the user's unit input.


int main() {
    //double input1=0, input2=0;
    int num_entries=0; //Holds the # of entries.
    double user_input=0, smallest=0, largest=0, sum=0; // Self explanitory
    string unit=" "; //To hold the unit the user inputs
    bool first_run=true; //To determine if this is the first time the program runs.
    vector<double> entries={}; //To hold the user entries

    std::cout << "Please input some numbers and a unit (cm, m, in, or ft). Note, there must be a space between the number and unit if you're using a Mac system. : \n";
    while(std::cin>>user_input>>unit){ //While there is still an input/user hasn't made a decision to exit the program (there are better ways to do this, but I won't do them just yet)
        if(!check_entry(unit)){ //Checks if the user has inputted a valid entry.
            std::cout << "You have entered an invalid entry. The following are the valid entries:\ncm for Centimeter\nm for Meter\nin for Inch\nft for Feet\n\nPlease try again.\n";
            continue; //If its invalid, it goes to the next iteration. This is first so the first run flag doesn't get tripped
        }
        double temp= convert_to_meters(user_input,unit); //If everything is valid, the input is converted to meters. Inside the while loop to limit the scope of the variable.
        if(first_run){//If this is the first time the program is ran, there is no valid entry for smallest and largest values. As a result, the user's input is both during the first run.
            std::cout << "You entered " << user_input << " " << unit << " (" << temp << " m).\nIt is currently both the smallest and largest number so far." << std::endl;
            smallest=temp;
            largest=temp;
            first_run=false; //Trips the first run flag
            sum+=temp; //Adds the converted sum
            num_entries++; //More entries!
            entries.push_back(temp); //Pushes back the user input, converted into meters, into the vector.
            continue;
        }
        //If it isn't the first loop...
        std::cout << "You entered " << user_input << " " << unit << " (" << temp << " m)." << std::endl;
        if(determine_min(temp,smallest)){ //If the current number is smaller or larger than the historical smallest/largest numbers.
            std::cout << "It is the smallest so far.\n";
            smallest= temp;
        }else if(determine_max(temp,largest)){
            std::cout << "It is the largest so far.\n";
            largest = temp;
        }
        entries.push_back(temp); //Pushes into the vector and adds another counter to the number of entries
        num_entries++;
    }
    sort(entries); //Obvs sorts the vector
    //Statistical outputs
    std::cout << "***ALL ARE CONVERTED TO METERS***\nSMALLEST: " << smallest << " M.\nLARGEST: " << largest <<" M.\nNUMBER OF ENTRIES: " << num_entries << ".\nTOTAL SUM: " << sum << " M." << std::endl;
    std::cout << "THESE ARE THE ENTRIES SORTED: " << std::endl;
    for(int i=0; i<entries.size(); i++){
        std::cout << entries[i] << " M, ";
    }
    /*
     * Original, pre-step 6 drill.
    while(std::cin >> input1 >> input2){
        smallest=determine_min(input1,input2);
        largest=determine_max(input1,input2);
        if(input1==input2){
            std::cout << "The values are equal.\n";
        }else if((largest-smallest)<1.0){
            std::cout << "The smaller value is: " << smallest << " and the larger value is: " << largest << ".\nThe numbers are almost equal.\n";
        }else{
            std::cout << "The smaller value is: " << smallest << " and the larger value is: " << largest << ".\n";
        }
    }
     */

    return 0;
}
double convert_to_meters(double value, string unit) {
    double in_meters = 0;
    constexpr double IN_TO_M = .0254; //Since we are converting to meters...
    constexpr double CM_IN_M = 100;
    constexpr double FT_TO_M =.3048;
    if (unit == "m") { //Return here is we are taking in meters.
        return value;
    } else if (unit == "cm") {
        in_meters = value/CM_IN_M;
    } else if (unit == "in") {
        in_meters = value * IN_TO_M;
    } else if (unit == "ft") {
        in_meters = value * FT_TO_M;
    }
    return in_meters; //Else return the converted number
}
bool determine_min(double value1, double value2){
    if(value1>value2){
        return false; //Make sure that the first value is the user input and the second value is the historical min
    }else
        return true;
}
bool determine_max(double value1, double value2){
    if(value1>value2){ //same as above, but for historical max
        return true;
    }else
        return false;
}
bool check_entry(string user_value){
    bool valid=true;
    if(user_value!="ft" && user_value!="in" && user_value!= "cm" && user_value!="m"){ //Remember, all of these must be true to evaluate as 'true'. Don't use || if you need all these statements to be true in order to validate input as false!
        valid=false;
    }
    return valid;
}