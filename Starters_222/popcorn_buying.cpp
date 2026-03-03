#include <bits/stdc++.h>
using namespace std;

int main() {
	
int x;
cin>>x;
int remaining_amnt=x-100;
if(remaining_amnt<50)cout<<0<<endl;
else cout<<floor(remaining_amnt/50)<<endl;
}