#include <iostream>
using namespace std;

int isBean(int *arr, int length) {
    if(length <= 1){
        return 0;
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (arr[i] == arr[j]+1 || arr[i] == arr[j]-1)
            {
                continue;
            }
            else {
                return 0;
            }
        }
        return 1;
    }
    
}

int main(){

}