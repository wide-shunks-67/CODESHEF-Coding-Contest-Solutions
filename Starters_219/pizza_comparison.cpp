#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int val_small = 100 * b; 
        int val_large = 225 * a;

        if (val_small > val_large) {
            cout << "Small\n";
        } else if (val_large > val_small) {
            cout << "Large\n";
        } else {
            cout << "Equal\n";
        }
    }
    return 0;
}