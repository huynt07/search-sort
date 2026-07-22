#include <bits/stdc++.h>
using namespace std;
// Requires Sorted Array: Yes

// Time Complexity:
// Best:    O(1)
// Average: O(log n)
// Worst:   O(log n)

// Space Complexity:
// O(1)
int binarySearch(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return m;
        else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
int main() {
    int n, x, a[1000]; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    int pos = binarySearch(a, n, x);
    if (pos == -1) cout << "Not Found";
    else cout << "Found at index " << pos;
    return 0;
}