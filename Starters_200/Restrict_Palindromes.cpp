#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s="";
    for(int i=0;i<n;i++){
        s+= ('a' + (i%3));
    }
    cout<<s<<endl;
}
}
