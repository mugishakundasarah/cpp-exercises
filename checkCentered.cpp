#include <iostream>
using namespace std;

int checkCentered(int *arr, int size){
    if(size < 3 || size % 2 == 0) {
        return 0;
    }

    int middleIndex = (size - 1) / 2;
    int centered = 0;

    for (int i = 0; i < middleIndex; i++)
    {
        if (arr[i] <= arr[middleIndex] || arr[middleIndex + i + 1] <= arr[middleIndex])
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int result; 
    int arr[4] = {3, 2, 1, 4};
    result = checkCentered(arr, 4);
    if(result == 1) {
        cout << "The array is centered" << endl;
    }
    else{
        cout << "The array in not centered" << endl;
    }

    return 0;
}