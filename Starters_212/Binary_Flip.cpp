#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int cnt00=0;
    int cnt11=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='0' && s[i + 1]=='0'){
            cnt00++;
        }
        else if(s[i]=='1' && s[i + 1]=='1'){
            cnt11++;
        }
    }
    if(cnt11>=cnt00){
        cout<<0<<endl;
        continue;
    }
    
    int needed= cnt00-cnt11;
    int flips=0;
    
    int c0_edges=0;
    int c0_internal=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(i==0 || i==n-1){
                c0_edges++;
            }else{
                c0_internal++;
            }
        }
    }
    
    int num_internal_flips= min(c0_internal,(needed + 1)/2);
    flips+= num_internal_flips;
    needed= needed- num_internal_flips*2;
    
    if(needed>0){
        int num_edge_flips= min(c0_edges,needed);
        flips+= num_edge_flips;
    }
    cout<<flips<<endl;
}
}
