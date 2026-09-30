#include <iostream>
using namespace std;

void chenPhanTu(int a[], int &n, int y, int m) {
    for (int i = n; i >= m; i--) {
        a[i] = a[i - 1];
    }
    a[m - 1] = y;
    n++;
}
int main() {
    int n, m, y;
    cout << "Nhap N: ";
    cin >> n;
    int *a = new int[n + 1];
    cout << "Nhap day: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Nhap gia tri y: ";
    cin >> y;
    cout << "Nhap vi tri m can chen: ";
    cin >> m;
    if (m < 1 || m > n + 1) {
        cout << "Vi tri khong hop le";
        delete[] a;
        return 0;
    }
    chenPhanTu(a, n, y, m);
    cout << "Day sau khi chen: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    delete[] a;
    return 0;
}
//độ phức tạp thời gian: O(1)
//độ phức tạp bộ nhớ: O(1)
