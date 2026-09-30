#include <iostream>
using namespace std;

void sapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    cout << "Nhap N: ";
    cin >> n;

    int *a = new int[n];

    cout << "Nhap day: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sapXepTangDan(a, n);

    cout << "Day sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete[] a;
    return 0;
}
// độ phức tạp thời gian : O(n^2)
// độ phức tạp bộ nhớ 0(1)
