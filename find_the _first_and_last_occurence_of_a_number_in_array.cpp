#include<iostream>
using namespace std;

int firstoccur(int arr[], int n, int key, int i){
	if(i == n){
		return -1;
	}
	if(arr[i]==key){
		return i;
	}
	else{
		return firstoccur(arr+1,n, key, i+1);
	}
}

int lastoccur(int arr[],int n, int key, int i){
	if(i == n){
		return -1;
	}
	int restarray = lastoccur(arr, n, key, i+1);
	if (restarray!=-1){
		return restarray;
	}
	if(arr[i]==key){
		return i;
	}
	return -1;
	
}

int main(){
	int arr[] = {1,4,3,5,6,7,3,9};
	cout<<"First occurence is at index "<<firstoccur(arr, 8, 8, 0)<<endl;
	cout<<"Last occurence is at index "<<lastoccur(arr, 8, 8, 0)<<endl;
}
