#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>P(n);
    //make first k values distinct
    for(int i= 0; i<n;++i){
        P[i]=i + 1;
    }
   reverse(P.begin(),P.begin() +( n-k + 1));
    for(int i=0;i<n;++i){
        cout<<P[i]<<" ";
    }
    cout<<endl;
}
}
