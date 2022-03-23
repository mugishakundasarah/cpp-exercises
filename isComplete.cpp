#include <iostream>
using namespace std;

int binary_search(int *arr, int arrSize, int searchItem){
    int low = 0;
    int high = arrSize - 1;
    int mid;
    int guess;
    int result = -1;

    while (low < high)
    {
        if((low + high) % 2 != 0  && high!=1){
            mid = (low + high + 1) / 2; 
        }
        else{
            mid = (low + high) / 2;
        }

        guess = arr[mid];
        
        if (guess == searchItem)
        {
            result = mid;
            break;
        }
        else if(guess > searchItem)
        {
            high = mid;    
        }
        else{
            low = mid;
        }
    }
    
    return result;
}

int isComplete(int *arr, int arrSize){
    int min = INT16_MIN;
    int max = INT16_MAX;
    int count = 0;
    int result;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i]%2 == 0)
        {
            max = arr[i];
            min = arr[i];
            break;
        }
    }

    if (max == INT16_MAX || min == INT16_MIN)
    {
        return 0;
    }

    for (int k = 0; k < arrSize; k++)
    {
        if (arr[k] % 2 == 0 && arr[k] > max)
        {
            max = arr[k];
        }   
    }
    
    cout << min << max <<endl ;
    for (int i = min+1; i < max; i++)
    {
        result = binary_search(arr, arrSize, i);
        cout << i << " has result " << result << endl;
        if(result == -1){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    // int arr[10] = {-5, 6, 2, 3, 2, 4, 5, 11, 8, 7};
    // int arrSize = 10;
    int arr[] = {5, 7, 9, 13, 6};
    int arrSize = 5;
    int result = isComplete(arr, arrSize);
    if(result){
        cout << " Is complete " << endl;
    }else{
        cout << "Is not complete " << endl;
    }
}