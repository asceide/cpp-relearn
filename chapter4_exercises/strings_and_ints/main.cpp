#include "std_lib_facilities.h"

int validation(int unum);
int main() {
    vector<string> numbers={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int user_num;

    std::cout<<"Please select a digit from 0 to 9: ";
    std::cin>>user_num;
    user_num= validation(user_num);

    std::cout << "Your digit converted to it's alphabetical representation is " << numbers[user_num];
    return 0;
}

int validation(int unum){
    int updated;
    if(unum<0 || unum>9){
        do{
            std::cout << "You have made an incorrect choice, please select a number between 0 and 9: ";
            std::cin>>updated;
        }while(updated<0 || updated>9);
        return updated;
    }else{
        return unum;
    }
}
