#include <iostream>

using namespace std;

int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1; y = 0;
        return a;
    }
    int x1, y1;
    int g = extended_euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);
    if (g != 1) {
        return (0 - 1);
    }
    return (x % m + m) % m;
}

int main() {
    int a, m;
    if (!(cin >> a >> m)) return 0;
    int res = mod_inverse(a, m);
    if (res == -1) cout << "Khong ton tai" << endl;
    else cout << res << endl;
    return 0;
}