#include <bits/stdc++.h>
using namespace std;
int findmin(int x){
    if(x==1)return 1;
    if(x==2)return 1;
    if(x==3)return 3;
    while(x>3){
        if(x%2==0){
            x/=2;
        }
        else{
            x-=3;
        }
        if(x==2)return 1;
        if(x==3)return 3;
    }
    return x;
}
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    cout<<findmin(x)<<endl;
}
}
