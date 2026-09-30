#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[1000], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
    return 0;
}

// thời gian:   O(N) 
// bộ nhớ: O(N) 
