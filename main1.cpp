#include <iostream>
using namespace std;

int main() {
    double X = 0;  // Biến lưu giá trị tổng
    int n = 100;   // Số phần tử trong tổng
    
    // Duyệt qua tất cả các giá trị từ 1 đến 100
    for (int i = 1; i <= n; ++i) {
        X += 1.0 / (i * i);  // Thêm 1/i^2 vào tổng
    }
    
    // In kết quả
    cout << "Gia tri cua X la: " << X << endl;
    
    return 0;
}
