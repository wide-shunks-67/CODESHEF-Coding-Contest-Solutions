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
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>v[i];
        freq[v[i]]++;
    }
    int max_freq=0;
    
    for(auto& [color,count]: freq){
        max_freq = max(max_freq, count);
    }
     int cost_1= n - freq[1];
     int cost_2=1 + (n - max_freq);

    cout<<min(cost_1,cost_2)<<endl;
}
}
