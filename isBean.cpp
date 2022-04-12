#include <iostream>
using namespace std;

int isBean(int *arr, int length) {
    if(length <= 1){
        return 0;
    }
    int checkBeanArray = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (arr[i] == arr[j]+1 || arr[i] == arr[j]-1)
            {
                checkBeanArray = 1;
            }  
        }
        if (checkBeanArray == 0 )
        {
            return 0;
        }
        checkBeanArray = 0;    
    }
    return 1;
}

int main(){
    int arrSize = 4;
    int arr[arrSize] ={2, 10, 8, 3};
    int result = isBean(arr, arrSize); 
    if (result)
    {
        cout << "It is a bean array" << endl;
    }else{
        cout << "It is not a bean array " << endl;
    }
       
}