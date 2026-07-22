#include <bits/stdc++.h>
using namespace std;
// Requires Sorted Array: No

// Time Complexity
// Best: O(1)
// Average: O(n)
// Worst: O(n)

// Space Complexity
// O(1)
int linearSearch(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return i;
    }
    return -1;
}
int main() {
    int n, x, a[100]; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    int pos = linearSearch(a, n, x);
    if (pos == -1) cout << "Not Found";
    else cout << "Found at index " << pos;
    return 0;
}