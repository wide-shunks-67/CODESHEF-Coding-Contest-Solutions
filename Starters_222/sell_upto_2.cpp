#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<ll>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll total_profit=0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<=n-1;i++){
        pq.push(a[i]);
        pq.push(a[i]);
        
        while(pq.size()>i + 1){
            pq.pop();
        }
    }
    while(!pq.empty()){
        total_profit+=pq.top();
        pq.pop();
    }
    cout<<total_profit<<endl;
}
}