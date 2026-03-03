#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=2){
            cout<<"-1\n";
        }
        else{
        vector<vector<int >>grid(n,vector<int>(n,0));
        // 1. Build the top-left 2x3 Block
        //as from (1,1) to (2,3) we can get 3 possible ways to proceed
        grid[0][0] = 1; grid[0][1] = 1; grid[0][2] = 1;
        grid[1][0] = 1; grid[1][1] = 1; grid[1][2] = 1;
        // taking 3nd colums to last column in 2nd row to fill 1s
         for(int j=3;j<n;j++){
            grid[1][j]=1;
         }
         // taking 2nd row to last row and last column to fill 1s
        
         for(int i=2;i<n;i++){
            grid[i][n-1]=1;
         }

        // Print the grid
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
                }
            cout<<"\n";
            }
        }
    } 
}