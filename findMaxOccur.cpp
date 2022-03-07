#include <iostream>
using namespace std;

int findDigitOccurence(int n, int digit){
    int count = 0;
    int digitCount;

    while (n!=0)
    {
        digitCount = n%10;
        if (digitCount == digit)
        {
            count ++;
        }
        n = n/10;
    }
    return count;
}

int findMaxOccur(int n){
    int maxDigit = -1, currentMax;
    int maxCount = 0, currentCount;
    int givenNumber = n;
    int currentDigit;
    while (n!=0)
    {
        currentDigit = n%10;
        if(currentDigit != maxDigit){
            int realGivenNumber  = givenNumber;
            currentCount = findDigitOccurence(realGivenNumber, currentDigit);
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                maxDigit = currentDigit;
            }else if(currentCount == maxCount){
                maxDigit = -1;
            }           
        }
        n = n/10;
    }   
    return maxDigit;
}

int main(){
    int result = findMaxOccur(1233322);
    if(result == -1){
        cout << "No max found " << endl;
    }
    else{
        cout << "Max : " << result << endl;
    }
}