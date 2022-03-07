#include <iostream>
using namespace std;

int differenceOddEven(int *arr, int size){
    int X = 0; //sum of odd numbers
    int Y = 0; // sum of even numbers
    int difference = X - Y;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            Y+=arr[i];
        }
        else{
            X+=arr[i];
        }
    }

    difference = X - Y;
    return difference;
}

int main(){
    int arr1[] = {};
    int res = differenceOddEven(arr1, 0);
    cout << "The result is " << res << endl;
    return 0;
}