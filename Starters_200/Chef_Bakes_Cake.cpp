#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n,x,y;
cin>>n>>x>>y;
int cakes_per_vehicle=y/x;
if(n%cakes_per_vehicle==0 ){
    cout<<n/cakes_per_vehicle;
}
else cout<<( n/ cakes_per_vehicle) + 1;
}
