#include <iostream>

using namespace std;

void solve() {
    long long N;
    cin >> N;

    if (N % 2 == 0) {
        // Even N formula: ((N-2)/2)^2
        long long k = (N - 2) / 2;
        cout << k * k << endl;
    } else {
        // Odd N formula: ((N-1)/2) * ((N-3)/2)
        // Which simplifies to: (N-1)*(N-3) / 4
        long long ans = ((N - 1) * (N - 3)) / 4;
        cout << ans << endl;
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}