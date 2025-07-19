#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int even_count=0;
    int odd_count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(i%2==0){
                even_count++;
            }
            else{
                odd_count++;
            }
        }
    }
    cout<<odd_count<<" "<<even_count<<endl;
}
}
