#include<iostream>
using namespace std;

void printdec(int n){
	if(n==0){
		return;
	}
	cout<<n<<endl;
	printdec(n-1);
}

int main(){
	printdec(6);
}
