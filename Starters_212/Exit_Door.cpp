#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>position(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        position[a[i]]=i;
    }
    long long total_disturbances=0;
    for (int k=n;k>=1;k--){
        int current_seat=position[k];
        
        int left_count=0;
        for(int i=0;i<current_seat;i++){
            if(a[i]<k){
                left_count++;
            }
        }
        
        int right_count=0;
        for(int i=current_seat+1;i<n;i++){
            if(a[i]<k){
                right_count++;
            }
        }
        
        total_disturbances+= min(right_count,left_count);
    }
    cout<<total_disturbances<<endl;
}
}
