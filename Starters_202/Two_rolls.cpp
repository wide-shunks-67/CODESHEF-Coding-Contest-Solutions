#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    bool flag=false;
    int arr[]={y,y+1,y+2,y+3,y+4,y+5};
    for(int i=0;i<6;i++ ){
     for(int j=i;j<6;j++){
         if(x==(50- arr[i] - arr[j])){
             flag=true;
             break;
         }
     }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
}
}
