#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int total_trades= a/x;
    int left= a%x;
    int total_val= left + total_trades*y + b;
    cout<<total_val<<endl;
}
}