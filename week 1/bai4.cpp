#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void rutGonPhanSo(int &a, int &b) {
    int ucln = UCLN(a, b);
    a = a / ucln;
    b = b / ucln;
    if (b < 0) {
        a = -a;
        b = -b;
    }
}
int main() {
    int a, b;
    cout << "Nhap tu so a: ";
    cin >> a;
    cout << "Nhap mau so b: ";
    cin >> b;
    if (b == 0) {
        cout << "Mau so phai khac 0";
        return 0;
    }
    rutGonPhanSo(a, b);
    cout << "Phan so sau khi rut gon: " << a << "/" << b;

    return 0;
}
//độ phức tạp thời gian: O(log(N))
//độ phức tạp bộ nhớ : O(1)
