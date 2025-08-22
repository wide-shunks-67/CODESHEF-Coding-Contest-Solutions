#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    int count=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int last_parity=arr[0]%2;
    for(int i=1;i<n;i++){
       int current_parity=arr[i]%2;
       if(current_parity!=last_parity){
           count++;
           last_parity=current_parity;
       }
    }
    cout<<count<<endl;
    
}
}
