#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    bool found_small=false;
    bool found_large=false;
    bool found_equal=false;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val<x)found_small=true;
        else if(val>x)found_large=true;
        else found_equal=true;
    }
    if(found_large && found_small && !found_equal){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
}
}
