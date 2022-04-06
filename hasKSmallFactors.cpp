#include <iostream>
using namespace std;

bool hasKSmallFactors(int k, int n){
    if (k < 2 || n == 0)
    {
        return false;
    }
    
    for (int i = 2; i < n / 2; i++)
    {
        if(i<k && n%i == 0 && n/i < k){
            
            return true;
        }
    }
    return false;
}
int main(){
    bool result = hasKSmallFactors(6,30);
    if(result){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}