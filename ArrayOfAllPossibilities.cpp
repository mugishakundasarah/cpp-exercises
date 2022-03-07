#include <iostream>
using namespace std;

/*
    An array is of all possibilities  if  
    it contains all numbers between 0 and n - 1 inclusive. 
    Write a method named isAllPossibilities that accepts an integer
     array and returns 1 if the array is an array of all possibilities
     , otherwise it returns 0.
*/

int checkAllPossibilities(int *arr, int size){
    int i = 0;
    int flag = 0;  
    for (int i = 0; i < size; i++)
    {
        int current = arr[i];
        flag = 0;
        for (int j = 0; j < size; j++)
        {
            if(i == arr[j]){
                flag = 1;
            }
        }
        if (flag == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(){
    int arr[4] = {0,1,2,3};
    int result = checkAllPossibilities(arr, 4);
    cout << result << endl;
}