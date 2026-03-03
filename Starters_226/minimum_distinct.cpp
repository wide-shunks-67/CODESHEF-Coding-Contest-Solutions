#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>a(n);
	    unordered_map<int,int>freq;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        freq[a[i]]++;
	    }
	    int prt= a[0];
	    vector<int>count;
	    for(auto cnt:freq){
	        if(cnt.first!=prt){
	        count.push_back(cnt.second);
	        }
	    }
	    int distinct_elemts= count.size() + 1;
	    sort(count.begin(),count.end());
	    for(int cnt:count){
	        if(k>=cnt){
	            k-=cnt;
	            distinct_elemts--;
	        }
	        else{
	            break;
	        }
	    }
	    if(distinct_elemts<1)distinct_elemts=1;
	    cout<<distinct_elemts<<endl;
	}
}