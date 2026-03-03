#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    int left= x- y*n;
    if(left<0)cout<<0<<endl;
    else cout<<left<<endl;
}
}