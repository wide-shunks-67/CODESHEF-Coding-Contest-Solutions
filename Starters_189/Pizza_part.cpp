#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int total_pizza_slices_needed=(a+1)*4 + b*3;
	if(total_pizza_slices_needed%8!=0){
	    cout<<(total_pizza_slices_needed/8) + 1;
	}
	else{
	    cout<<total_pizza_slices_needed/8;
	}
	return 0;
}
