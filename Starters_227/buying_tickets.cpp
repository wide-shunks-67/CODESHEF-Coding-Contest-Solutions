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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    string s;
	    cin>>s;
	    vector<int>arr;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0'){
	            arr.push_back(a[i]);
	        }
	    }
	    if(arr.size()<k){
	        cout<<-1<<endl;
	    }
	    else{
	        sort(arr.begin(),arr.end());
	            int sum=0;
	            int i=0;
	            while(k--){
	                sum+=arr[i];
	                i++;
	            }
	            cout<<sum<<endl;
	        }
	}
	
}