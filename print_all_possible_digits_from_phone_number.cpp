//print all possible digits from phone number
#include<iostream>
using namespace std;

string keypadArr[] = {".", "/", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz"};

void subseq(string s, string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	
	char ch = s[0];
	string code = keypadArr[ch - '0'];
	string ros = s.substr(1);
	
	for(int i=0; i<code.length(); i++){
		subseq(ros, ans+code[i]);
	}
}

int main(){
	subseq("23", "");
}
