#include <iostream>
using namespace std;

int isPrime(int n) {
    if (n <= 1)
    {
        return false;
    }
    
    for(int x=2; x<=n/2; x++){
        if (n%x == 0)
        {
            return false;
        }
    }
    return true;
}

int IsPrimeProduct(int n) {
    if(isPrime(n)){
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
       if (isPrime(i) && (n%i==0)  &&isPrime((n/i)))
        {
            return 1;
        }
    }
    return 0;
}
int main(){
    cout << IsPrimeProduct(14) << endl;
}