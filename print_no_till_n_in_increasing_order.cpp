#include<iostream>
using namespace std;

void printinc(int n){
	if(n==0){
		return;
	}
	
	printinc(n-1);
	cout<<n<<endl;
	
}

int main(){
	printinc(6);
}
