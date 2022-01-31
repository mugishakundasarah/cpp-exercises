#include <iostream>
using namespace std;

int isPrime(int n) {
    if (n <= 1)
    {
        return false;
    }
    
    for(int x=2; x<=n/2; x++){
        if (n%x == 0)
        {
            return false;
        }
    }
    return true;
}
int isMagicArray(int *arr, int size) {
    if(size <= 0){
        return 0;
    }
    int i=0, primeSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
        {
            primeSum+=arr[i];
        }
    }

    if (primeSum == arr[0])
    {
        return 1;
    }
    return 0;
}

int main(){
    int arr[3] = {10, 5, 5};
    int arrSize = 3;
    int result = isMagicArray(arr, arrSize);
    cout<< result << endl;
}