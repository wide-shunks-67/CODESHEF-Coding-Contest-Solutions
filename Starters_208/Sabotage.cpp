#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,x,k;
    cin>>n>>x>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x_final= x + 100*k;
    int opponents_above=0;

    for(int i=0;i<n;i++){
        if(arr[i]>x_final){
            opponents_above++;
        }
    }
    
    int r=max(0,opponents_above-k);
    int rank=r+1;
    cout<<rank<<endl;
}
}
