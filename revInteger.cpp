#include <iostream>
using namespace std;

int rev(int n){
    int revN = 0;
    while (n > 0)
    {
        revN = (revN * 10) + (n %10);
        cout << revN << endl;
        n /= 10;
    }
    return revN;
    
}
int main(){
    int res = rev(12005);
    cout << res << endl;
}