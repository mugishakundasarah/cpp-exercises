#include <iostream>
using namespace std;

int calculateScores(int *arr, int arrSize){
    if (arrSize == 0 || arr == NULL)
    {
        return 0;
    }

    int score = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            score+=1; 
        }
        else if (arr[i] % 2 != 0 && arr[i] != 5)
        {
            score+=3;
        }
        else if(arr[i] == 5){
            score+=5;
        }
    }
    return score;
}
int main(){
    int myArr[4] = {5, 5, 5, 5};
    int myArrLength = 4;
    int res = calculateScores(myArr, myArrLength);
    cout << res << endl;
}