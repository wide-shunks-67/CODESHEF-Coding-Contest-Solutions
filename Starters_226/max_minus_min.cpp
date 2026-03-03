#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    multiset<long long> s;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }
    
    long long min_diff = -1;

    long long original_max = *s.rbegin();

    while (true) {
        long long current_min = *s.begin();
        long long current_max = *s.rbegin();
        
        long long current_diff = current_max - current_min;
        
        if (min_diff == -1 || current_diff < min_diff) {
            min_diff = current_diff;
        }
        
 
        if (current_min >= original_max) {
             break;
        }

        
        s.erase(s.begin());
        s.insert(current_min * 2);
}
    
    cout << min_diff << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}