#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int min_dist=INT_MAX;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        int current_dist= abs(a-x)+abs(y-b);
        min_dist=min(min_dist,current_dist);
    }
    cout<<min_dist<<endl;
}
}
