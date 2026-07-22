#include <bits/stdc++.h>
using namespace std;
// Time Complexity
// Best: O(n log n)
// Average: O(n log n)
// Worst: O(n^2)

// Space Complexity
// Average: O(log n)
// Worst: O(n)

// Stable: No
// In-place: Yes

//Phân Hoạch Lomuto
/*int partition(int a[], int l, int r) {
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (a[j] <= pivot) {
            ++i;
            swap(a[i], a[j]);
        }
    }
    ++i;
    swap(a[i], a[r]);
    return i;
}
void quickSort(int a[], int l, int r) {
    if (l >= r) return;
    int p = partition(a, l, r);
    quickSort(a, l, p - 1);
    quickSort(a, p + 1, r);
}*/

//Phân Hoạch Hoare
int partition(int a[], int l, int r) {
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while(true) {
        do {
            i++;
        } while (a[i] < pivot);
        do {
            j--;
        } while (a[j] > pivot);
        if (i < j) swap(a[i], a[j]);
        else return j;
    }
}
void quickSort(int a[], int l, int r) {
    if (l >= r) return;
    int p = partition(a, l, r);
    quickSort(a, l, p);
    quickSort(a, p + 1, r);
}
int main() {
    int n, a[1000]; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}