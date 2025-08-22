#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    if(n%2!=0){
        cout<<(n+1)/2<<endl;
    }
    else cout<<n - n/4<<endl;
}
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    solve();
}
}
