#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    long long n,s;
    cin>>n>>s;
    if(s<=5*n){
        cout<<6*n<<endl;
    }
    else{
        long long score= 6*n - (s - 5*n);
        cout<<score<<endl;
    }
}
}