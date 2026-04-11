# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Hoàn thiện các công cụ cơ bản trong an toàn thông tin bao gồm: tính toán mức độ hỗn loạn của dữ liệu (Entropy), độ dư thừa (Redundancy) và tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy: R = log2(256) - H(X).
- Hoàn thiện hàm mod_inverse() bằng cách áp dụng kết quả từ thuật toán Euclid mở rộng và xử lý số dư dương.
- Chạy thử trên nhiều test case để kiểm chứng độ chính xác của thuật toán.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0.000 | 8.000 | Chuỗi lặp lại, không có thông tin mới, độ dư thừa tối đa. |
| abcd | 2.000 | 6.000 | Các ký tự xuất hiện đều nhau, entropy tăng lên. |
| hello world | 2.846 | 5.154 | Chuỗi ngôn ngữ tự nhiên có entropy trung bình. |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | -1 (Hoặc báo lỗi gcd != 1) |

## 4. Kết luận
Qua bài lab, em đã hiểu rõ cách đo lường lượng tin và tầm quan trọng của việc xử lý số học modulo trong mật mã. Khó khăn lớn nhất là việc xử lý giá trị x âm trả về từ thuật toán Euclid mở rộng để đưa về nghịch đảo modulo dương chuẩn xác. Việc tự tay cài đặt giúp em nắm vững bản chất toán học thay vì chỉ sử dụng công thức lý thuyết.