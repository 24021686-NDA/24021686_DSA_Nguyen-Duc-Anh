#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập N: ";
    cin >> n;

    double a[1000];
    double tong = 0;

    cout << "Nhập " << n << "số thực: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tong += a[i];
    }

    double tb = tong / n;
    cout << "Giá trị trung bình: " << tb << endl;

    cout << "Các phần tử >= trung bình: ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= tb) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
//Độ phức tạp thời gian O(n), Độ phức tạp bộ nhớ O(n)
