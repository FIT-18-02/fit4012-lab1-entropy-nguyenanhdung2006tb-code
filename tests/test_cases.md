# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [x] Input: `aaaa` -> entropy thấp, redundancy cao (H=0, R=8)
- [x] Input: `abcd` -> entropy cao hơn `aaaa` (H=2, R=6)
- [x] Input: `hello world` -> entropy và redundancy được tính hợp lệ

## 2. Modulo inverse
- [x] `a=3, m=7` -> nghịch đảo modulo là 5
- [x] `a=10, m=17` -> nghịch đảo modulo là 12
- [x] `a=6, m=9` -> không tồn tại nghịch đảo modulo

## 3. Ghi chú
- [x] Test thêm của sinh viên: `a=17, m=3120` -> nghịch đảo modulo là 2753 (Test case chuẩn bị cho hệ mật RSA sau này).