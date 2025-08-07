#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
string s;
cin>>s;
int c=0,a=0,t=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='c')c++;
    if(s[i]=='a')a++;
    if(s[i]=='t')t++;
}
if(c==a && c==t && c==1 && s.length()==3){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO";
}
}
