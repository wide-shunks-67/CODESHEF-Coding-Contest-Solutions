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
    int x=s.find('0');
    int count=0;
    if(x!=string::npos){
    for(int i=x+1;i<n;i++){
        if(s[i]=='1'){
            count++;
        }
    }
    }
    cout<<count<<endl;
}
}
