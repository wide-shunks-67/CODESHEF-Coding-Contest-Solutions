#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int c1=0;int c2=0;int c3=0;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val== 1)c1++;
        else if(val==2)c2++;
        else c3++;
    }
    int deletions=0;
    //handling 2's
    if(c2>0){
        deletions+=(c2 - 1);
    }
    
    deletions+= min(c1,c3);
    cout<<deletions<<endl;
    
}
}
