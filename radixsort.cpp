#include <bits/stdc++.h>
using namespace std;
// Time Complexity
// O(d × (n + k))

// Space Complexity
// O(n + k)

// Stable: Yes
// In-place: No

// Counting Sort theo một chữ số (exp = 1, 10, 100, ...)
void countingSort(int a[], int n, int exp) {
    int output[n];
    int cnt[10] = {0};
    // Đếm số lần xuất hiện của từng chữ số
    for (int i = 0; i < n; i++) {
        cnt[(a[i] / exp) % 10]++;
    }
    // Chuyển thành mảng vị trí
    for (int i = 1; i < 10; i++) {
        cnt[i] += cnt[i - 1];
    }
    // Xây mảng output (duyệt từ cuối để đảm bảo stable)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (a[i] / exp) % 10;
        output[cnt[digit] - 1] = a[i];
        cnt[digit]--;
    }
    // Sao chép lại
    for (int i = 0; i < n; i++) {
        a[i] = output[i];
    }
}
void radixSort(int a[], int n) {
    int mx = a[0];
    for (int i = 1; i < n; i++) {
        mx = max(mx, a[i]);
    }
    // Sắp xếp theo từng chữ số
    for (int exp = 1; mx / exp > 0; exp *= 10) {
        countingSort(a, n, exp);
    }
}
int main() {
    int n, a[1000]; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    radixSort(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}