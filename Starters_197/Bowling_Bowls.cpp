#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>(x-1) && arr[i]<(y+1)){
            count++;
        }
    }
    cout<<count<<endl;
    
}
}
