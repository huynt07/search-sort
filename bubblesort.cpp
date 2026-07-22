#include <bits/stdc++.h>
using namespace std;
// Time Complexity
// Best: O(n^2)
// Average: O(n^2)
// Worst: O(n^2)

// Space Complexity
// O(1)

// Stable: Yes
// In-place: Yes
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main() {
    int n, a[1000]; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    bubbleSort(a, n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}