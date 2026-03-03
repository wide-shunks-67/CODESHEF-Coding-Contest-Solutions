#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    
    int n;
    cin>>n;
    unordered_map<int,int>freq;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int max_freq=-1;
    int best_color=-1;
    for(auto& color: freq){
        if(color.second>max_freq){
            max_freq= color.second;
            best_color=color.first;
        }  
        else if(color.second== max_freq){
            best_color= min(best_color, color.first);
        }
    }
    cout<<best_color<<endl;
}
}