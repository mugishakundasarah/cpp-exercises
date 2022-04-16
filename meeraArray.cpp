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

int findZero(int *arr, int length){
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 0)
        {
            return 1;
        }
        
    }
    return 0;
}

int checkMeeraArray(int *arr, int length){
    
    int hasZero = findZero(arr, length);
    if(length < 2){
        return 0;
    }

    for (int i = 0; i < length; i++)
    {
        if (isPrime(arr[i]) && hasZero)
        {
            return 1;
        }
        
    }
    return 0;
}


int main(){
    int length = 3;
    int meeraArray[length] = {7, 6, 10};
    int result = checkMeeraArray(meeraArray, length);
    if (result)
    {
        cout << " Is a meera array " << endl;
    }else{
        cout << " It is not a meera array " << endl;
    }
}