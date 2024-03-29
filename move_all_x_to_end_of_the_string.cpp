// move all x to the end of the string
#include<iostream>
using namespace std;

string move_x(string s){
	if (s.length()==0){
		return "";
	}
	char ch = s[0];
	string ros = move_x(s.substr(1));
	if (ch=='x'){
		return (ros + ch);
	}
	return (ch + ros);
}

int main(){
	cout<<move_x("axxbdxcefxhix");
}
