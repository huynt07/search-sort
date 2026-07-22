#include <bits/stdc++.h>
using namespace std;
// Requires Sorted Array: Yes

// Time Complexity:
// Best:    O(1)
// Average: O(√n)
// Worst:   O(√n)

// Space Complexity:
// O(1)
int jumpSearch(int a[], int n, int x) {
    int step = sqrt(n);
    int prev = 0;
    while (prev < n && a[min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) return -1;
    }
    while (prev < min(step, n)) {
        if (a[prev] == x) return prev;
        prev++;
    }
    return -1;
}
int main() {
    int n, x, a[1000]; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    int pos = jumpSearch(a, n, x);
    if (pos == -1) cout << "Not Found";
    else cout << "Found at index " << pos;
    return 0;
}