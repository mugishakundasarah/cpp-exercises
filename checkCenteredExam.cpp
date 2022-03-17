#include <iostream>
using namespace std;

int checkCentered(int *arr, int size){
    if (size<=2)
    {
        return 0;
    }

    if(size % 2 == 0){
        return 0;
    }

    int middle = (size + 1) /2;
    int midElem = arr[middle];
    for (int i = 0; i < middle; i++)
    {
        if (arr[i] <= middle || arr[size-i] <= middle) 
        {
            return 0;
        }
        
    }
    return 1;
    
}

int main(){
    int result; 
    int arr[5] = {4, 3, 1, 2, 6};
    result = checkCentered(arr, 4);
    if(result == 1) {
        cout << "The array is centered" << endl;
    }
    else{
        cout << "The array in not centered" << endl;
    }

    return 0;
}