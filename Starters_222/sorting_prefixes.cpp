#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool found= false;
    int ans=0;
    for(int i= n-1;i>=0;i--){
        if(a[i]!= i + 1){
            found= true;
            ans= a[i];
            break;
        }
    }
    if(found)cout<<ans<<endl;
    else cout<<0<<endl;
}
}