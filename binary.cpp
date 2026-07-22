#include <bits/stdc++.h>
using namespace std;
// Requires Sorted Array: Yes

// Time Complexity
// Best: O(1)
// Average: O(log n)
// Worst: O(log n)

// Space Complexity
// O(1)
int binarySearch(int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int main() {
    int n, x, a[100]; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    int pos = binarySearch(a, n, x);
    if (pos == -1) cout << "Not Found";
    else cout << "Found at index " << pos;
    return 0;
}