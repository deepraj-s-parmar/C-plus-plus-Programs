#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
	if (n==1){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}
	else{
		return sorted(arr+1, n-1);
	}
}

int main(){
	int n = 9;
	int arr[] = {1,2,3,4,5,6,7,8,9};
	cout<<sorted(arr,n);
}
