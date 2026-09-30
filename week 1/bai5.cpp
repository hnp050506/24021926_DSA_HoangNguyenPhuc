#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    double *a = new double[n];
    cout << "Nhap day so thuc: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    double tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    double trungBinh = tong / n;
    cout << "Gia tri trung binh = " << trungBinh << endl;
    cout << "Cac phan tu >= trung binh: ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= trungBinh) {
            cout << a[i] << " ";
        }
    }
    delete[] a;
    return 0;
}
//độ phức tạp thời gian: O(N)
//độ phức tạp bộ nhớ : O(1)
