#include <iostream>
using namespace std;


int minDistance(int n){
    if (n < 1)
    {
        return -1;
    }
    int distance = 0, shortDistance = n/2;
    int prevFactor = 1;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            distance = i - prevFactor;
            cout << " i is " << i << endl;
            cout << "distance is " << distance << endl;
            if (shortDistance > distance)
            {
                shortDistance = distance;
            }
            prevFactor = i;
        }
    }
    return shortDistance;
}
int main(){
    int result = minDistance(55);
    cout << "result is " << result << endl;
    
}