#include <iostream>
using namespace std;
void TangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhập N: ";
    cin >> n;

    int a[1000];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    TangDan(a, n);

    cout << "Dãy sau khi sắp xếp ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
//Độ phức tạp thời gian O(n^2), Độ phức tạp bộ nhớ O(1)
