#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if (n == 1) {
        cout << arr[0] << "\n" << arr[0] << "\n";
        return;
    }

    // Calculate Minimum
    ll sum_rest = 0;
    for(int i = 1; i < n; i++){
        sum_rest += arr[i];
    }
    ll minimum = arr[0] + 2 * sum_rest;

    // Calculate Maximum 
    // Formula: A[0] + 2*A[1] + 4*A[2] + 8*A[3] ...
    ll maximum = arr[0];
    ll multiplier = 2;
    
    for(int i = 1; i < n; i++){
        maximum += arr[i] * multiplier;
        multiplier *= 2; // Next element gets multiplied by next power of 2
    }

    cout << minimum <<" "<< maximum<< "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}