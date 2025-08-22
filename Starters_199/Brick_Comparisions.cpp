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
    int max=INT_MIN;
    int result=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>max){
            max=v[i];
            result=i+1;
        }
    }
    cout<<result<<endl;
}
}
