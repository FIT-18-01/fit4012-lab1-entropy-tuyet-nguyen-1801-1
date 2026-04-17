# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.
Cài đặt và hiểu ý nghĩa của thuật toán tính Entropy/Redundancy để đánh giá lượng thông tin và độ dư thừa. Thực hành áp dụng thuật toán Euclid mở rộng để lập trình tìm nghịch đảo modulo trong C++, phục vụ làm nền tảng cho các hệ mật mã.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---|---|---|
| aaaa | 0 | 8 | Chuỗi chỉ có 1 loại ký tự nên hoàn toàn có thể đoán trước (entropy = 0), độ dư thừa đạt tối đa. |
| abcd | 2 | 6 | Bốn ký tự phân bố đều (mỗi ký tự 25%), độ ngẫu nhiên tăng lên so với `aaaa` nên dư thừa giảm. |
| hello world | 2.84535 | 5.15465 | Phân bố phức tạp hơn với các khoảng trắng và ký tự lặp lại (l, o), phản ánh đúng đặc tính của ngôn ngữ tự nhiên. |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---:|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Khong ton tai |

## 4. Kết luận
Bài lab giúp em củng cố kiến thức vững chắc về lý thuyết thông tin và số học module. Khó khăn lớn nhất là việc xử lý giá trị âm khi trả về từ thuật toán Euclid mở rộng để đưa về đúng khoảng [0, m-1]. Việc đối chiếu giữa tính toán lý thuyết và code chạy thực tế giúp em hiểu rất sâu bản chất của hai khái niệm này trong an toàn bảo mật thông tin.
