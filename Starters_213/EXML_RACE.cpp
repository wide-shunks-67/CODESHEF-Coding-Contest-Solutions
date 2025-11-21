#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int max_speed=-1;
    int winning_label=-1;
    for(int i=1;i<=n;i++){
        int d,t;
        cin>>d>>t;
        int speed = d/t;
        if(speed>max_speed){
            max_speed=speed;
            winning_label=i;
        }
    }
    cout<<winning_label<<endl;
}
}