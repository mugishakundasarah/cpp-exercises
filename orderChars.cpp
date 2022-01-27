#include <iostream>
using namespace std;


char* orderChars(char *arr, int start, int len, int size){
    if (start < 0 || (size - start) < len || start >= len)
    {
        return NULL;
    }
    
    char myArr[len];
    char *ptr;

    if( len == 0) {
        myArr[len] = {}; 
    }
    else {
        int count = start;
        int i;
        for (i = 0; i <= len; i++)
        {
            myArr[i] = arr[count];
            count++ ;
        }
    }
    
    ptr = myArr;
    return ptr;
}


int main(){
    char arr[3] = {'a', 'b', 'c'}; 
    int startPos = 1;
    int desLength = 2;
    int arrSize = 3;



    char* res = orderChars(arr, startPos, desLength, arrSize);
    


    if (res == NULL)
    {
        cout << "The output is NULL" << endl;
    }

    else if (desLength == 0)
    { 
        cout << "{ }" << endl;
    }
        
    else
    {
        for (int i = 0; i < desLength; i++)
        {
            cout << *(res + i);
        }    
    }   
}