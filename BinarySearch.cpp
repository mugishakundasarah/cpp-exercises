#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int searchKey){
    int start = 0, end = size-1 , mid = (start + end) / 2;
    int pos = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == searchKey)
        {
            pos = mid;
            break;
        }
        else if(arr[mid] > searchKey){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }        
    }
    return pos;
}

int main(){
    int array[5] = {1,2,4,5};
    int result = binarySearch(array, 5, 4);
    cout << result << endl;
}