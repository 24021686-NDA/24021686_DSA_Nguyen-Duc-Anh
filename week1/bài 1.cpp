#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;

    int a[1000];
    int tong = 0;

    cout << "Nhập" << n << "phần tử";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tong += a[i];
    }

    cout << "Tổng các phần tử trong dãy là:" << tong << endl;
    return 0;
}
