#include <iostream>
using namespace std;

int factorEqual(int m, int n){
    if (m < 2 || n < 2)
    {
        return 0;
    }
    int countM = 2;
    int countN = 2;

    int factorNumberM = 0 ;
    int factorNumberN = 0;

    while (countM <= m / 2)
    {
        if (m % countM == 0)
        {
            factorNumberM ++;
        }
        countM ++; 
    }
    
    while (countN <= n / 2)
    {
        if (n % countN == 0)
        {
            factorNumberN ++;
        }

        if (factorNumberN <= factorNumberM)
        {
            countN++;
        }else if(factorNumberN > factorNumberM){
            return 0;
        }
    }
    if (factorNumberM > factorNumberN)
    {
        return 0;
    }
    
    return 1;
}

int main(){
    int n1 = 3;
    int n2 = 11;
    int result = factorEqual(n1, n2);
     if (result)
    {
        cout <<  n1 << " and " << n2 << " are factor equal " << endl;
    }else{
        cout <<  n1 << " and " << n2 << " are not factor equal " << endl;
    }
}