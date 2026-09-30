#include <iostream>
using namespace std;

void xoaPhanTu(int a[], int &n, int k) {
    for (int i = k - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}
int main() {
    int n, k;
    cout << "Nhap N: ";
    cin >> n;
    int *a = new int[n];
    cout << "Nhap day: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Nhap vi tri k can xoa: ";
    cin >> k;
    if (k < 1 || k > n) {
        cout << "Vi tri khong hop le";
        delete[] a;
        return 0;
    }
    xoaPhanTu(a, n, k);
    cout << "Day sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    delete[] a;
    return 0;
}
//độ phức tạp thời gian: O(N-k)
//độ phức tạp bộ nhớ: O(1)
