#include <iostream>
using namespace std;

long long tinhTong(int **a, int n, int m) {
    long long tong = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tong += a[i][j];
        }
    }
    return tong;
}
void xoaDong(int **a, int &n, int m, int k) {
    for (int i = k - 1; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i + 1][j];
        }
    }
    delete[] a[n - 1];
    n--;
}
int main() {
    int n, m;
    cout << "Nhap N: ";
    cin >> n;
    cout << "Nhap M: ";
    cin >> m;
    int **a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    cout << "Nhap ma tran:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Tong cac phan tu trong mang = ";
    cout << tinhTong(a, n, m) << endl;
    int k;
    cout << "Nhap dong can xoa: ";
    cin >> k;
    if (k < 1 || k > n) {
        cout << "Vi tri dong khong hop le";
    }
    else {
        xoaDong(a, n, m, k);
        cout << "Ma tran sau khi xoa dong " << k << ":" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
//độ phức tạp thời gian: O(N*M)
//độ phức tạp bộ nhớ: O(N*M)
