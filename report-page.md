# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Bài lab yêu cầu thực hiện các chức năng sau:
- Tính entropy của một chuỗi ký tự.
- Tính độ dư thừa thông tin (redundancy) dựa trên entropy.
- Tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng.
- Chạy thử và ghi lại kết quả.

## 2. Cách làm
- Đọc lại mã nguồn mẫu `entropy_redundancy.cpp` để hiểu cách tính entropy.
- Bổ sung hàm `calculate_redundancy()` theo công thức `R = log2(N) - H(X)` với N là kích thước bảng chữ cái.
- Hoàn thiện hàm `mod_inverse()` sử dụng `extended_euclid()` để tính nghịch đảo modulo.
- Biên dịch và kiểm tra kết quả với các test case mẫu.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 | 8 | Chuỗi đồng nhất, entropy thấp nhất, redundancy cao nhất |
| abcd | 2 | 6 | Tất cả ký tự xuất hiện đều nhau, entropy trung bình |
| hello world | 2.845 | 5.155 | Chuỗi có độ tự nhiên cao hơn, entropy lớn hơn và redundancy thấp hơn |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận
Tôi đã học được cách tính entropy của chuỗi ký tự và cách chuyển đổi thông tin thành độ dư thừa bằng công thức `log2(N) - H(X)`. Việc cài đặt nghịch đảo modulo giúp tôi hiểu rõ hơn về thuật toán Euclid mở rộng và điều kiện tồn tại nghịch đảo. Khó khăn lớn nhất là đảm bảo kết quả modulo dương sau khi tính x từ Euclid mở rộng, nhưng đã giải quyết được bằng cách chuẩn hóa về phạm vi `[0, m-1]`.
