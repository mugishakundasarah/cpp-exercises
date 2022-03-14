#include <iostream>
using namespace std;

int isEvens(int number){
    int digit;
    if (number == 0){
        return 0;
    }
    
    while (number != 0)
    {
        digit = number % 10;
        if(digit % 2 != 0){
            return 0;
        }
        number = number/10;
    }
    return 1;
}

int main(){
    int number = 2786;
    int result = isEvens(number);
    if(result) {
        cout << "The number "  << number << " is evens " << endl;
    }
    else{
        cout << "The number " << number << " is not evens " << endl;
    }
}