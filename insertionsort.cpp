#include <bits/stdc++.h>
using namespace std;
// Time Complexity
// Best: O(n)
// Average: O(n^2)
// Worst: O(n^2)

// Space Complexity
// O(1)

// Stable: Yes
// In-place: Yes
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int x = a[i], pos = i - 1;
        while (pos >= 0 && x < a[pos]) {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }
}
int main() {
    int n, a[1000]; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    insertionSort(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}