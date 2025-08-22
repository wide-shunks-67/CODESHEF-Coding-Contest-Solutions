#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     for (int j = 0; j < n; ++j) {
            // Print A[i,j] = (i + j) % N
            cout << (i + j) % n << (j == n - 1 ? "" : " ");
        }
        cout<<endl;
    }
}
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    solve();
}
}
