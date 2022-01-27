#include <iostream>
using namespace std;

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