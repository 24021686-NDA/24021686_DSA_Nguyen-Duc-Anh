#include <iostream>
using namespace std;
//Phần a
int tinhTong(int a[][100], int n, int m) {
    int tong = 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            tong += a[r][c];
        }
    }
    return tong;
}
//Phần b
void xoaDong(int a[][100], int &n, int m, int dongXoa) {
    if (dongXoa < 0 || dongXoa >= n) {
        cout << "Dong can xoa khong hop le!" << endl;
        return;
    }
    for (int r = dongXoa; r < n - 1; r++) {
        for (int c = 0; c < m; c++) {
            a[r][c] = a[r + 1][c];
        }
    }
    n--;
}

void inMang(int a[][100], int n, int m) {
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            cout << a[r][c] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Nhap so dong N va so cot M: ";
    cin >> n >> m;

    int a[100][100];
    cout << "Nhap cac phan tu cua ma tran (" << n << "x" << m << "):\n";
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            cin >> a[r][c];
        }
    }

    //Tính tổng
    int tong = tinhTong(a, n, m);
    cout << "\n[a] Tong cac phan tu trong mang: " << tong << endl;

    //Xóa dòng 
    int dongXoa;
    cout << "\n[b] Nhap chi so dong i can xoa (tu 0 den " << n - 1 << "): ";
    cin >> dongXoa;

    xoaDong(a, n, m, dongXoa);

    cout << "\nMang 2 chieu sau khi xoa dong " << dongXoa << ":\n";
    inMang(a, n, m);

    return 0;
}
//Độ phức tạp thời gian: tốt nhất O(1), xấu nhất O(NxM), trung bình O(NxM)
//Độ phức tạp bộ nhớ O(1)
