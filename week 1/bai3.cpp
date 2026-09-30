#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap n: ";
    cin >> n;

    if (n < 0) {
        cout << "Khong ton tai giai thua cua so am";
        return 0;
    }

    long long gt = 1;

    for (int i = 1; i <= n; i++) {
        gt *= i;
    }

    cout << n << "! = " << gt;

    return 0;
}
//độ phức tạp thời gian: O(N)
//độ phức tạp bộ nhớ : O(1)
