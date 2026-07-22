#include <bits/stdc++.h>
using namespace std;
// Time Complexity
// O(n + k)

// Space Complexity
// O(k)

// Stable: No
// In-place: No
int main() {
    int n, a[1000]; cin >> n;
    int cnt[1000] = {0}, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        mx = max(mx, a[i]);
    }
    for (int i = 0; i <= mx; i++) {
        if (cnt[i] != 0) {
            for (int j = 0; j < cnt[i]; j++) {
                cout << i << " ";
            }
        }
    }
    return 0;
}