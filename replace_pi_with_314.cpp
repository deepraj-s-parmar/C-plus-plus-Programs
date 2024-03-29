// Replace pi with 3.14
// pipppipppiiipi
#include<iostream>
using namespace std;

void replacepi(string s, string ans){
	if(s.length()==0){
		cout<<ans<<endl;
	}
	if(s[0]=='p' && s[1]=='i'){
		ans+="3.14";
		replacepi(s.substr(2), ans);
	}
	ans+=s[0];
	replacepi(s.substr(1), ans);
}

int main(){
	replacepi("pipppipppiiipi", "");
}
