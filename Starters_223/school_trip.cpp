#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,x,k;
    cin>>n>>x>>k;
    int no_of_students=x%k;
    int ans;
    if(x + k - no_of_students<=n){
        ans= min(no_of_students, k - no_of_students);
        cout<<ans<<endl;
    }
    else{
        cout<<no_of_students<<endl;
    }
}
}