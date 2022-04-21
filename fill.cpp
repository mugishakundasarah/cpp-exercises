#include <iostream>
using namespace std;

int* fill(int *arr, int k, int n){\
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(k>0){
            arr[i] = arr[j];
            j++;
            if (j>=k){
                j = 0;
            }
        }
    }
    return arr;
}

int main(){
    int length = 8;
    int array[length] = {1,2,3,5, 9, 12,-2,-1};
    int k = 8;
    int* newArr = fill(array, k, length);

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << endl;
    }
    
}