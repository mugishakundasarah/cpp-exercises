/*
    A 	normal 	number is defined to be one that has no 
    odd factors, except for 1 	and possibly itself
*/

#include <iostream>
using namespace std; 

int isNormal(int n){
    int length = (n/2);
    int i = 3;
    int result = 1; 
    while (i<=length)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i+=2;
    }
    return 1;
}

int main() {
    // test if is normal
    int result = isNormal(90);
    if(result) {
        cout << "The number is normal";
    }
    else{
        cout << "The number is not normal";
    }
}