#include<iostream>
using namespace std;

int Fib(int n){
	if(n==0 || n==1){
		return n;
	}
	int prevfib = Fib(n-1);
	int prevprevfib = Fib(n-2);
	return prevfib + prevprevfib;
}

int main(){
	cout<<Fib(7);
}
