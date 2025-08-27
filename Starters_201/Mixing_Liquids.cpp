#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=1;i<=a;i++){
        if(i*2<=b){
            sum++;
        }else break;
    }
    cout<<(sum*3)<<endl;
}
}
