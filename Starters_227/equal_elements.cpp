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
    set<int>s;
    int ans=0;
    for(int x:a){
        if(s.count(x)){
            ans+=2;
            s.clear();
        }else{
            s.insert(x);
        }
    }
    cout<<ans<<endl;
}
}