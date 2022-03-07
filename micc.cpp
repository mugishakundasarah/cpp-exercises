#include<iostream>
using namespace std;
int isPOE(int *arr,int size){
	if(size<3){
		return 0;
	}
    int res = 0;
	//start from 1 so we have at least one left element
	for(int i=1;i<size-1;i++){
		int lsum = 0,rsum = 0;
		int currIndex=i;
		
		while(currIndex>0){
			lsum+=arr[currIndex-1];
			currIndex--;
		}
		currIndex=i + 1;
		while(currIndex<size){
			rsum+=arr[currIndex];
			currIndex++;
		}
		if(rsum==lsum){
		    res = i;
            break;
        }
	}
    return res;
}
int main(){
	int array[]={1,2,3,4};
	int size=sizeof(array)/sizeof(array[0]);
	int res=isPOE(array,size);
	cout<<res<<endl;
}