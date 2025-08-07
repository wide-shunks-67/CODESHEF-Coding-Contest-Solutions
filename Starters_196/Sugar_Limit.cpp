#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int max_satisfaction = 0;
    // try all l values from 0 to 100
    for(int l=0; l<101;l++){
        int sum_tastiness=0;
        for(int i=0;i<n;i++){
            if(b[i]<=l && a[i]>0){
                sum_tastiness+=a[i];
            }
        }
        max_satisfaction=max(sum_tastiness - l , max_satisfaction);
    }
    cout<<max_satisfaction<<endl;
}
    
}
