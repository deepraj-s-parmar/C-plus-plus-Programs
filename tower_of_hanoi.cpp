// tower of hanoi
#include<iostream>
using namespace std;

void towerofhanoi(char src, char helper, char dest, int n){
	if(n==0){
		return;
	}
	towerofhanoi(src, dest, helper, n-1);
	cout<<"Move from "<<src<<" to "<<dest<<endl;
	towerofhanoi(helper, src, dest, n-1);
}

int main(){
	towerofhanoi('A', 'B', 'C', 4);
}
