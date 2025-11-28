#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    long long min_address= min(y,z);
    cout<<(2*min_address)<<endl;
}
}
