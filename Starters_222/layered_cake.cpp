#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int no_of_possible_combn=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i]<a[j]){
                no_of_possible_combn++;
            }
        }
    }
    cout<<no_of_possible_combn<<endl;
}
}