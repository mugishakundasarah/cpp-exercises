#include <iostream>
using namespace std;

int interpolationSearch(int *arr, int size, int key){
    int lo = 0, hi = size -1, pos;
    while (lo < hi)
    {
        
        pos = lo +  (key-arr[lo])*(hi-lo) / (arr[hi]-arr[lo]) ;
        if (arr[pos] == key)
        {
            return pos;
        }
        else if(arr[pos] > key){
            hi = pos - 1;
        }
        else{
            lo = pos + 1;
        }        
        cout << "pos " << pos << " lo " << lo << " hi " << hi << endl;
    }
    return -1;
}

int main(){
    int array[5] = {1,2,4,5};
    int result = interpolationSearch(array, 4, 9);
    cout << result << endl;
}