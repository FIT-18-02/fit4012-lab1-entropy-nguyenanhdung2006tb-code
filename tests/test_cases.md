# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả qua chương trình C++.

## 1. Entropy / Redundancy
- [x] Input: `aaaa` -> Kết quả: H=0.000, R=8.000 (Chuỗi lặp lại hoàn toàn).
- [x] Input: `abcd` -> Kết quả: H=2.000, R=6.000 (Các ký tự xuất hiện đơn lẻ).
- [x] Input: `hello world` -> Kết quả: H=2.846, R=5.154 (Chuỗi có khoảng trắng).
- [x] Input: `(chuỗi rỗng)` -> Kết quả: H=0.000, R=0.000 (Kiểm tra điều kiện biên).

## 2. Modulo inverse
- [x] `a=3, m=7` -> Kết quả: 5 (3*5 mod 7 = 1).
- [x] `a=10, m=17` -> Kết quả: 12 (10*12 mod 17 = 1).
- [x] `a=6, m=9` -> Kết quả: Không tồn tại (gcd(6,9)=3 != 1).

## 3. Ghi chú và Test nâng cao
- [x] Test case thực tế (RSA): `a=17, m=3120`. Kết quả chương trình: `2753`. 
- [x] Xác nhận: Chương trình đã xử lý tốt các giá trị x âm từ thuật toán Euclid mở rộng bằng công thức `(x % m + m) % m`.