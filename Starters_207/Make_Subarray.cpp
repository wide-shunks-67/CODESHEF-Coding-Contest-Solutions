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
    int count=0;
    int last_idx= s.rfind('1');
    for(int i=0;i<last_idx;i++){
        if(s[i]=='0'){
            continue;
        }
        else{
            for(int j=i+1;j<last_idx;j++){
                if(s[j]=='0'){
                    count++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<count<<endl;
}
}
