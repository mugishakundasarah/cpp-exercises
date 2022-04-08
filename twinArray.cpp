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

int isTwin(int* arr, int arrSize){
    int leftCount = 0;
    int rightCount = arrSize;
    if (arrSize < 2)
    {
        return 0;
    }
    
    for (int i = 0; i < arrSize; i++){
        if(isPrime(arr[i]) && isPrime(arr[i] + 2)){
            while (leftCount < i )
            {
                if(arr[leftCount] == arr[i]+ 2){
                    return 1;
                }
                leftCount++;
            }    
            while (rightCount > i){
                if(arr[leftCount] == arr[i]+ 2){
                    return 1;
                }
                rightCount --;
            }       
        }
        return 0;
    }
}

int main(){
    int arrSize = 5;
    int arr[arrSize] ={3, 5, 8, 10, 27};
    int result = isTwin(arr, arrSize); 
    if(result){
        cout << "It is a twin array" << endl;
    }else{
        cout << "It is not a twin array " << endl ;
    }
}