#include <bits/stdc++.h>
using namespace std;
int solve(int n,int a, int b){
    if(n<a)return n;
    int len= n - a + b;
    return solve(len,a,b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n,a,b;
	cin>>n>>a>>b;
	if(n<a){
	    cout<<n<<endl;
	}
	else{
	    int final_length= solve(n,a, b);
	    cout<<final_length<<endl;
	}
	}
}