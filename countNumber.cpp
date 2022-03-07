#include <iostream>
using namespace std;

int numberCount(int n, int countNumber){
    int count = 0;
    int currentNumber = n;
    int digit; 

    if (n <= 0)
    {
        return -1;
    }

    while (currentNumber>0)
    {
        digit = currentNumber % 10;
        if (digit == countNumber)
        {
            count++;
        }

        currentNumber = currentNumber / 10; 
    }
    return count;
}
int main(){
    int number = 1000;
    int digitToCount = 0;
    int result = numberCount(number, digitToCount);
    if(result == -1){
        cout << "The number " << number << " is not valid "; 
    }
    else{
        cout << "The number " << number << " has " << result << " instances of " << digitToCount;
    }
}