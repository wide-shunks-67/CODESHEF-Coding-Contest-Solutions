#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    
    bool possible = true;
    int current_max_a= INT_MIN;
    for (int i = 0; i < n; i++) {
        
        if (a[i] > b[i]) {
            possible = false;
            break;
        }
        
        if (a[i] < b[i]) {
            if (a[i] <= current_max_a) {
                possible = false;
                break;
            }
        }
        
        
        current_max_a = max(current_max_a, a[i]);
    }
    
    if (possible) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}