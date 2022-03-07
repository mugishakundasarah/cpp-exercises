#include <iostream>
using namespace std; 


// check if array is daphne
/*
A Daphne array 		is an array that contains either all odd 
numbers or all even 	numbers. For example, {2, 4, 2} (only even numbers)
 and {1, 3, 17, 	-5} (only odd numbers) are Daphne arrays 
but {3, 2, 5} is not 	because it contains both odd and even numbers.
*/

int isEven(int n){
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int isDaphne(int *arr, int len){
   int checkType = isEven(arr[0]);
   if(checkType){
       for (int i = 1; i < len; i++)
        {
            if(!isEven(arr[i])){
                return 0;
            }
        }
   }   
   else {
       for (int i = 0; i < len; i++)
        {
            if(isEven(arr[i])){
                return 1;
            }
        }
   }
}

int main(){
    int arr[4] = {2,4,7,6};
    int result = isDaphne(arr, 4);
    if(result) {
        cout << "The array is Daphne";
    }
    else{
        cout << "The array is not Daphne";
    }
}