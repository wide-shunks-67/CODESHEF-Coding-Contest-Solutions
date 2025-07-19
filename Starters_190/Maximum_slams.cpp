#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	int no_of_grand_slam_needed=25-x;
	if(no_of_grand_slam_needed%4==0){
	    cout<<no_of_grand_slam_needed/4;
	}
	else{
	    cout<<no_of_grand_slam_needed/4 + 1;
}
}
