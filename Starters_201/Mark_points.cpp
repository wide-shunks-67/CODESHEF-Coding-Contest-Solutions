#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    bool flag= true;
    while(i<n){
        if(s[i]=='0'){
            i++;
            continue;
        }
        int j=i;
        
        while(j<n && s[j]=='1'){
            j++;
        }
        
        int length= j-i;
        if(length<3){
            flag=false;
            break;
        }
        i=j;
    }
    if(flag){
    cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
}
