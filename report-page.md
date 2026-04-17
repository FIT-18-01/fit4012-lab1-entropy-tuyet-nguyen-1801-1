# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Hiểu và áp dụng các khái niệm cơ bản trong an toàn thông tin bao gồm entropy, độ dư thừa thông tin (redundancy) và nghịch đảo modulo. Đồng thời rèn luyện kỹ năng cài đặt chương trình C++ và kiểm thử.

---

## 2. Cách làm
- Đọc hiểu chương trình tính entropy mẫu.
- Sử dụng map để đếm tần suất xuất hiện của ký tự.
- Tính entropy theo công thức H(X) = -∑p log2(p).
- Bổ sung hàm tính redundancy theo công thức R = log2(N) - H(X).
- Cài đặt thuật toán Euclid mở rộng để tìm nghịch đảo modulo.
- Chạy thử với nhiều test case và ghi log kết quả.

---

## 3. Kết quả chính

### 3.1 Entropy và redundancy
| Input        | Entropy | Redundancy | Nhận xét |
|-------------|--------:|-----------:|----------|
| aaaa        | 0       | 8          | Chuỗi lặp hoàn toàn, dễ đoán |
| abcd        | 2       | 6          | Các ký tự khác nhau, entropy cao |
| hello world | ~2.85   | ~5.15      | Chuỗi thực tế, có lặp và không lặp |

---

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|----------------|---------------------|
| 3  | 7  | 5              | 5                   |
| 10 | 17 | 12             | 12                  |
| 6  | 9  | Không tồn tại  | Không tồn tại       |

---

## 4. Kết luận
Qua bài lab, em hiểu rõ hơn về entropy là thước đo độ ngẫu nhiên của dữ liệu, và redundancy thể hiện mức độ dư thừa thông tin. Ngoài ra, em cũng nắm được cách sử dụng thuật toán Euclid mở rộng để tìm nghịch đảo modulo – một khái niệm quan trọng trong mật mã học.

Khó khăn lớn nhất là hiểu cách hoạt động của thuật toán Euclid mở rộng. Tuy nhiên, sau khi thực hành và kiểm tra lại từng bước, em đã hiểu rõ cách tìm hệ số x, y trong phương trình ax + my = 1.

Bài lab giúp em thấy rõ mối liên hệ giữa toán học và ứng dụng trong bảo mật thông tin.
