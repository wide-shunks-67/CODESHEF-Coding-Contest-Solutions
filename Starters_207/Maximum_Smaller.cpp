#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

// Function to handle a single test case
void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::vector<std::pair<int, int>> indexed_a(n);
    std::map<int, std::vector<int>> groups;

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        indexed_a[i] = {a[i], i}; // Store value and 0-based index
    }

    // Sort based on the value
    std::sort(indexed_a.begin(), indexed_a.end());

    // Group indices by value to check for uniques
    bool has_unique = false;
    for (const auto& p : indexed_a) {
        groups[p.first].push_back(p.second);
    }
    for (const auto& pair : groups) {
        if (pair.second.size() == 1) {
            has_unique = true;
            break;
        }
    }

    std::vector<int> p(n);
    int score = 0;

    if (!has_unique) {
        // CASE 1: No unique elements -> Score is N
        // Permute cyclically within each group of same-valued indices.
        score = n;
        for (const auto& pair : groups) {
            const std::vector<int>& group_indices = pair.second;
            for (size_t i = 0; i < group_indices.size(); ++i) {
                // Right cyclic shift: P[current] = next
                int current_idx = group_indices[i];
                int next_idx = group_indices[(i + 1) % group_indices.size()];
                p[current_idx] = next_idx;
            }
        }
    } else {
        // CASE 2: At least one unique element -> Score is N-1
        // Perform a single left cyclic shift on all sorted indices.
        score = n - 1; // The score is known to be n-1
        std::vector<int> sorted_indices(n);
        for(int i = 0; i < n; ++i) {
            sorted_indices[i] = indexed_a[i].second;
        }
        
        for (int i = 0; i < n; ++i) {
            // Left cyclic shift: P[current] = previous
            int current_idx = sorted_indices[i];
            int prev_idx = sorted_indices[(i - 1 + n) % n];
            p[current_idx] = prev_idx;
        }
    }

    std::cout << score << "\n";
    for (int i = 0; i < n; ++i) {
        // Output 1-based indices
        std::cout << p[i] + 1 << (i == n - 1 ? "" : " ");
    }
    std::cout << "\n";
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}