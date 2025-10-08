#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int count_for_3=0;
    if(n%3==0){
      int q=n/3;
      cout<<q*5<<endl;
    }
    else if(n%3==2){
        cout<<(n/3 * 5) + 4<<endl;
    }
    else if(n%3==1){
        cout<<((n/3 - 1)*5) + 2*4<<endl;
    }
}
}
