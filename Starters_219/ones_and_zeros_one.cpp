#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int count0 = 0;
    int count1 = 0;
    int ans = 0;
    
    // Iterate once: O(N) complexity
    for(int i = 0; i < n; i++){
        if(s[i] == '0') count0++;
        else count1++;
        
        // A prefix is good if ones >= zeroes
        if(count1 >= count0){
            ans++;
        }
    }
    
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}