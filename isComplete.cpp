#include <iostream>
using namespace std;

int isComplete(int *arr, int arrSize){
    int min = INT16_MIN;
    int max = INT16_MAX;
    int count = 0;

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