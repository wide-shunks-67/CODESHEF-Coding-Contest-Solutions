#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    int total_value_1=5*a1 + b1;
    int total_value_2= 5*a2 + b2;
     if(total_value_1>=total_value_2 && (total_value_1 - total_value_2)%6==0 ){
         cout<<"yes"<<endl;
     }
     else cout<<"no"<<endl;
}
}
