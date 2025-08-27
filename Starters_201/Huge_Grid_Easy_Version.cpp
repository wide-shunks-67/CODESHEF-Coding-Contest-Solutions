#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    long long total_sum=0;
    for( char c:a){
        total_sum+=(c-'0');
    }
    long long first_val= (a[0] - '0');
    long long last_val=(a[n-1] - '0');
    int final_result= 3* total_sum - first_val - last_val;
    cout<<final_result;
}
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    solve();
    cout<<endl;
}
}
