#include <iostream>
using namespace std;

int filterArray(int *arr, int len) {
    int isFilter = 0; 
   for (int i = 0; i < len; i++)
   {
       if (arr[i] == 9)
       {
           for (int j = 0; j < len; j++)
           {
               if(arr[j] == 11){
                   isFilter = 1;
               }
           }
       }

       if (arr[i] == 7)
       {
           for (int j = 0; j < len; j++)
           {
               if(arr[j] == 13){
                   return 0;
               }
           }
       }
        isFilter = 1;
   }
   return isFilter;
} 
int main(){
    int arr[3] = {9, 6, 18};
    int result = filterArray(arr, 3);
    if (result == 1)
    {
        cout << "The array is a filter array" << endl;
    }
    else{
        cout << "The array is not a filter array " << endl;
    }
    
}