#include<iostream>
#include<string> // Include the string header for to_string
using namespace std;

void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    int code = ch;
    
    subseq(ros, ans);
    subseq(ros, ch+ans);
    subseq(ros, ans + to_string(code)); // Use to_string to convert int to string
}

int main(){
    subseq("AB", "");
    return 0; // Add return statement to main
}

