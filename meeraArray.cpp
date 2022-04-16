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

int findZero(){

}



int main(){

}