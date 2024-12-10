#include <iostream>
#include <vector>
using namespace std;

// Hàm tìm giá trị lớn nhất trong các cột lẻ
int findMaxNumber(const vector<vector<int>> &A, int n, int m) {
    // Gán max với giá trị đầu tiên của cột lẻ cần tìm
    int maxNumber = A[0][0]; // Giả định cột 0 luôn tồn tại (cột lẻ đầu tiên)

    // Duyệt qua các cột lẻ
    for (int j = 0; j < m; j += 2) { // Cột đầu tiên là cột lẻ nên +2 đến cột tiếp theo
        for (int i = 0; i < n; i++) {
            if (A[i][j] > maxNumber) {
                maxNumber = A[i][j];
            }
        }
    }

    return maxNumber;
}

int main() {
    int n, m;
    cout << "Nhap so hang (n): ";
    cin >> n;
    cout << "Nhap so cot (m): ";
    cin >> m;

    // Khởi tạo ma trận
    vector<vector<int>> A(n, vector<int>(m));

    // Nhập dữ liệu cho ma trận
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Hiển thị ma trận
    cout << "\nMa tran A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    // Tìm giá trị lớn nhất trong các cột lẻ
    int maxNumber = findMaxNumber(A, n, m);

    // In kết quả
    cout << "\nGia tri lon nhat trong cac cot le la: " << maxNumber << endl;

    return 0;
}
