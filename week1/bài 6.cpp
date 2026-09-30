#include <iostream>
using namespace std;
//Phần a
void xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        cout << "Vi tri k khong hop le!" << endl;
        return;
    }
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

//Phần b
void chenPhanTu(int a[], int &n, int y, int m) {
    if (m < 0 || m > n) {
        cout << "Vi tri m khong hop le!" << endl;
        return;
    }
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }
    a[m] = y;
    n++;
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //Xóa phần tử
    int k;
    cout << "Nhap vi tri k can xoa (0 den " << n - 1 << "): ";
    cin >> k;
    xoaPhanTu(a, n, k);

    cout << "Day sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    //Chèn phần tử
    int y, m;
    cout << "Nhap gia tri y va vi tri m can chen (0 den " << n << "): ";
    cin >> y >> m;
    chenPhanTu(a, n, y, m);

    cout << "Day sau khi chen: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
//Độ phức tạp thời gian: tốt nhất: O(1), xấu nhất: O(n), trung bình: O(n)
//Độ phức tạp bộ nhớ O(1)
