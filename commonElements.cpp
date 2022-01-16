#include <iostream>
using namespace std;

void commonElem(int* first, int firstSize , int* last, int lastSize){
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
    cout << " { ";
    for (int k = 0; k < count; k++)
    {
        cout << arr[k] << " ";
    } 
    cout << "} " << endl;
}

int main(){
    int length = 4;
    int firstArr[4] = {1, 8, 3, 2};
    int secondArr[4] = {4, 2, 6, 1}; 
    commonElem(firstArr, length, secondArr, length);
}