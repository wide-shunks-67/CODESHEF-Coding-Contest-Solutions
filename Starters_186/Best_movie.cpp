#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    bool fuel=true;
    for(int j=0;j<n;j++){
        if(a[j]>=7){
            v.push_back(b[j]);
            fuel=false;
        }
    }
    if(fuel==true){
        cout<<-1<<endl;
    }
    else{
     auto minelement =min_element(v.begin(),v.end());
     int minvalue=*minelement;
        cout<<minvalue<<endl;
    }
}
}
