#include <iostream>
using namespace std;

int main() {
	// your code goes here
long long n,k,r;
cin>>n>>k>>r;
long long remaining_pizzas=n-k;
long long remaing_revenue= remaining_pizzas*r;
cout<<remaing_revenue;
}
