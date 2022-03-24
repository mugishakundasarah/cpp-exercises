#include <iostream>
using namespace std;

int binary_search(int *arr, int arrSize, int searchItem){
    int low = 0;
    int high = arrSize - 1;
    int mid = (low + high) / 2;
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
    
    if(max == min){
        return 0;
    }

    for (int i = min+1; i < max; i++)
    {
        result = binary_search(arr, arrSize, i);
        if(result == -1){
            return 0;
        }
    }
    
    return 1;
}


/** Merge Sort Algorithm **/
void merge(int arr[] , int begin, int mid, int end){
    int sizeOfLeftArr = mid - begin+1;
    int sizeOfRightArr = end - mid; 
    int leftIndexCount = 0;
    int rightIndexCount = 0;
    int mergedIndexCount = begin;

    int leftArr[sizeOfLeftArr];
    int rightArr[sizeOfRightArr];

    for (int i = 0; i < sizeOfLeftArr; i++)
    {
        leftArr[i] = arr[begin + i];
    }

    for (int j = 0; j< sizeOfRightArr; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }
    
    /** Merge when both sub arr have elements **/
    while (leftIndexCount < sizeOfLeftArr && rightIndexCount < sizeOfRightArr){
        if(leftArr[leftIndexCount] <= rightArr[rightIndexCount]){
            arr[mergedIndexCount] = leftArr[leftIndexCount];
            leftIndexCount ++;
        }else{
            arr[mergedIndexCount] = rightArr[rightIndexCount];
            rightIndexCount ++;
        }
        mergedIndexCount++;
    }

    while (leftIndexCount < sizeOfLeftArr){
        arr[mergedIndexCount] = leftArr[leftIndexCount];
        leftIndexCount ++;
        mergedIndexCount ++ ;
    }

    while(rightIndexCount < sizeOfRightArr){
        arr[mergedIndexCount] = rightArr[rightIndexCount];
        rightIndexCount++;
        mergedIndexCount++;
    }
}


void mergeSort(int arr[], int begin, int end){
    if (begin>=end)
    {
        return;
    }
    int mid = (begin + end)/2;
    mergeSort(arr,begin, mid);
    mergeSort(arr, mid + 1 , end);
    merge(arr, begin, mid, end);
}

int main(){
    // int arr[10] = {-5, 6, 2, 3, 2, 4, 5, 11, 8, 7};
    // int arrSize = 10;
    int arr[] = {5, 4,7, 9,8, 13, 10};
    int arrSize = 7;
    mergeSort(arr, 0, arrSize-1);
    int result = isComplete(arr, arrSize);
    if(result){
        cout << " Is complete " << endl;
    }else{
        cout << "Is not complete " << endl;
    }
}