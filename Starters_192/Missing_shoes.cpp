#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int l,r;
cin>>l>>r;
if(l>r){
    cout<<l-r;
}
else if(r>l){
    cout<<r-l;
}
else{
    cout<<0;
}
return 0;
}
