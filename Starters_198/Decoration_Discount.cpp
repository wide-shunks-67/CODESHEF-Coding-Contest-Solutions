#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    long long min_cost=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        long long cost=v[i] + (v[i+1]/2);
        min_cost=min(min_cost,cost);
    }
    sort(v.begin(), v.end());
    long long min_cost_2=v[0]+v[1];
    min_cost=min(min_cost, min_cost_2);
    cout<<min_cost<<endl;
}
}
