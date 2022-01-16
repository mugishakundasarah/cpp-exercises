#include <iostream>
using namespace std;

int POE(int *a, int aSize){
    int res = 0;
    if (aSize < 3)
    {
        return -1;
    }
    
    for (int i = 1; i < aSize-1; i++)
    {
        int j = 0;
        int firstSideSum = 0;
        int secondSideSum = 0;
        int k = aSize - 1;

        while (j < i)
        {
            firstSideSum += a[j]; 
            j++;
        }

        while (k > i)
        {
            secondSideSum += a[k];
            k--; 
        }
        
        if(secondSideSum == firstSideSum){
            res = i;
        }
    }
    return res;
}
int main(){
    int myArr[6] = {1, 8, 3, 7, 10, 2};
    int length = 6;
    int res = POE(myArr, length);
    if(res == 0){
        cout << "-1" << endl;
    }
    else{
        cout << res << endl;
    }
     
}