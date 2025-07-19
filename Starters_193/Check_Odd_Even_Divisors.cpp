#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a==0){
        cout<<"no"<<endl;
    }
    else if(b%a==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
}

