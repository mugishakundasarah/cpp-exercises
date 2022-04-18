#include <iostream>
using namespace std;

int* fill(int *arr, int k, int n){
    if (n < k)
    {
        cout << " Elements " << k << " are less than array length " << n << endl;
        return NULL;
    }
    
    int generalCount = 0;
    int isFull = 0;
    int i = 0;
    while(i<k && generalCount+1 != n){
        arr[generalCount] = arr[i];
        i++;
        if(i == k){
            i = 0;
        }
        generalCount++;
    }
    
}
int main(){
    int length = 8;
    int array[length] = {1,2,3,5, 9, 12,-2,-1};
    int* arr = array;
    int k = 8;
    fill(arr, k, length);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
    
}