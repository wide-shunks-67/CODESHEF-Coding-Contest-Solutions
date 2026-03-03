#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
int n,m;
cin>>n>>m;
int left_over_cakes= m - n;
cout<<min(n,left_over_cakes);
return 0;
}