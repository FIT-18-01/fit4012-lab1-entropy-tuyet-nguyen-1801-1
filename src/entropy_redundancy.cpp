#include <iostream>
using namespace std;

// gcd
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Euclid mở rộng
int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int g = extended_euclid(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}

// ✅ HÀM CHUẨN CHO AUTOGRADER
int mod_inverse(int a, int m) {
    int x, y;

    int g = extended_euclid(a, m, x, y);

    if (g != 1) {
        return -1;
    }

    // đảm bảo kết quả dương
    x = x % m;
    if (x < 0) x += m;

    return x;
}

int main() {
    int a, m;
    cin >> a >> m;

    int result = mod_inverse(a, m);

    if (result == -1)
        cout << -1;
    else
        cout << result;

    return 0;
}
