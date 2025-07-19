#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        unordered_set<int> collected;
        for (int i = 0; i < N; ++i) {
            int type;
            cin >> type;
            collected.insert(type);
        }
        int notCollected = M - collected.size();
        cout << notCollected << endl;
    }
    return 0;
}
