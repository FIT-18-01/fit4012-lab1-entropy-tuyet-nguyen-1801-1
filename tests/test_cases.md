# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [x] Input: `aaaa` -> entropy thấp, redundancy cao  
  Kết quả: Entropy = 0, Redundancy = 8  

- [x] Input: `abcd` -> entropy cao hơn `aaaa`  
  Kết quả: Entropy = 2, Redundancy = 6  

- [x] Input: `hello world` -> entropy và redundancy được tính hợp lệ  
  Kết quả: Entropy ≈ 2.85, Redundancy ≈ 5.15  

## 2. Modulo inverse
- [x] `a=3, m=7` -> nghịch đảo modulo là 5  
  Kiểm chứng: 3 × 5 mod 7 = 1  

- [x] `a=10, m=17` -> nghịch đảo modulo là 12  
  Kiểm chứng: 10 × 12 mod 17 = 1  

- [x] `a=6, m=9` -> không tồn tại nghịch đảo modulo  
  Lý do: gcd(6,9) = 3 ≠ 1  

## 3. Ghi chú
- Nhóm đã bổ sung kiểm tra nhiều trường hợp khác nhau để đảm bảo chương trình hoạt động đúng.  
- Kết quả phù hợp với lý thuyết đã học về entropy và nghịch đảo modulo.
