[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/WTyCYlbL)

# FIT4012 – Lab 1: Entropy, Redundancy và Nghịch đảo Modulo

## Thông tin sinh viên
- **Họ và tên:** Nguyễn Anh Dũng
- **Mã số sinh viên (MSSV):** 1871020167

## Trạng thái hoàn thiện (Status)
- [x] **Q1 & Q2**: Hoàn thiện tính toán Entropy và độ dư thừa (Redundancy) trong `src/entropy_redundancy.cpp`.
- [x] **Q3**: Cài đặt thành công nghịch đảo Modulo bằng thuật toán Euclid mở rộng trong `src/mod_inverse.cpp`.
- [x] **Testing**: Đã kiểm thử qua ít nhất 5 test cases tại `tests/test_cases.md`.
- [x] **Reporting**: Đã hoàn thành báo cáo chi tiết tại `report-page.md`.

## Cấu trúc bài làm
- `src/`: Chứa mã nguồn C++ hoàn thiện.
- `tests/`: Chứa danh sách các trường hợp kiểm thử đã chạy.
- `logs/`: Nhật ký thực hiện bài lab.
- `report-page.md`: Báo cáo kết quả chi tiết.

## Ghi chú
Hệ thống tự động kiểm tra được thiết lập qua **GitHub** Actions để xác nhận tính chính xác của thuật toán.

## Hướng dẫn chạy chương trình (Quick Start)

1. **Biên dịch:**
   - Entropy: `g++ -std=c++17 src/entropy_redundancy.cpp -o entropy`
   - Modulo: `g++ -std=c++17 src/mod_inverse.cpp -o modinv`

2. **Chạy:**
   - Entropy: `./entropy`
   - Modulo: `./modinv`