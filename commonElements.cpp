#include <iostream>
using namespace std;

int* commonElem(int* first, int firstSize , int* last, int lastSize){
    int arr[firstSize];
    int *ptr;
    int count = 0;
    for (int i = 0; i < firstSize; i++)
    {
        int currElem = first[i];
        for (int j = 0; j < lastSize; j++)
        {
            if (currElem == last[j])
            {
                arr[count] = currElem;
                count++;
                break;
            }
            
        }   
    }
    ptr = arr;
    return ptr;
}

int main(){
    int length = 4;
    int firstArr[4] = {1, 8, 3, 2};
    int secondArr[4] = {4, 2, 6, 1}; 
    int *res = commonElem(firstArr, length, secondArr, length);
    for (int k = 0; k < length; k++)
    {
        cout << *(res + k);
    } 
    
}