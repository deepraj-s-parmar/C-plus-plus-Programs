// removing duplicates from a string
// aaaabbbeeecdddd
#include<iostream>
using namespace std;

void reverse(string s, string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	if(ch==s[0]){
		reverse(s.substr(1), ans);
	}
	reverse(s.substr(1), ch+ans);
}

int main(){
	reverse("aaaabbbeeecdddd", "");
}
