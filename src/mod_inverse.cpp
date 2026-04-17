#include <iostream>
using namespace std;

// Giữ nguyên gcd
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Giữ nguyên Euclid mở rộng
int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int d = extended_euclid(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return d;
}

// ✅ Q3: hoàn thiện hàm này
int mod_inverse(int a, int m) {
    int x, y;

    int g = extended_euclid(a, m, x, y);

    // Không tồn tại
    if (g != 1) {
        return -1;
    }

    // Đảm bảo kết quả dương
    return (x % m + m) % m;
}

int main() {
    int a, m;
    cout << "Nhap a va m: ";
    cin >> a >> m;

    int result = mod_inverse(a, m);

    if (result == -1) {
        cout << "Khong ton tai nghich dao modulo" << endl;
    } else {
        cout << "Nghich dao modulo: " << result << endl;
    }

    return 0;
}
