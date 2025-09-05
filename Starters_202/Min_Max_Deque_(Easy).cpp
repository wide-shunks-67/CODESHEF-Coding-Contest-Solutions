#include <bits/stdc++.h>
using namespace std;
	// your code goes here
	void solve(){
	    int n,q;
	    cin>>n>>q;
	    vector<int>a(n);
	    for(int i=0;i<n;i++){
	       cin>>a[i];
	    }
	    if(n==1){
	        cout<<a[0];
	        return;
	    }
	    else if(n>=3){
	       int v=a[0];
	       for(int k=2;k<n-1;k++){
	           if((k+1)%2!=0){//alice turn
	               v=max(a[k-1],v);
	           }
	           else{//bob turn
	               v=min(a[k-1],v);
	           }
	       }
	       int score= min(a[n-1], max(a[n-2],v));
	       cout<<score;
	    }
	}
	int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
       cout<<endl;
    }
}
