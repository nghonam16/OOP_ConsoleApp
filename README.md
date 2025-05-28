# Lab_Week02 – OOP Project

## 💡 Cải tiến so với mã nguồn ban đầu

### 1. Tổ chức lại cấu trúc dự án:
- Di chuyển các file `.h` và `.cpp` vào thư mục `lib/`, giúp mã nguồn gọn gàng, dễ quản lý hơn.
- Đặt file `main.cpp` và `main_tests.cpp` trong thư mục `source/`, thể hiện rõ vai trò là mã nguồn chính và mã kiểm thử.
- Tạo thư mục `out/` chứa file thực thi `program` và `tests`, dễ dàng phân biệt giữa mã nguồn và kết quả biên dịch.

### 2. Tách mã thành các module rõ ràng:
- Tách code thành các file như `Utils.cpp/h`, `InputHandler.cpp/h`, `App.cpp/h`, giúp tăng khả năng tái sử dụng và bảo trì.

### 3. Thêm tài liệu tự động bằng Doxygen:
- Chỉ cần ghi chú trong các file `.h` là đủ.
- Sử dụng Doxygen để sinh ra file `docs/index.html`, giúp người đọc hiểu rõ cấu trúc và chức năng của từng module trong mã nguồn.

### 4. Viết test case cơ bản:
- Tạo file `main_tests.cpp` để kiểm thử các hàm chính trong chương trình.
- Biên dịch riêng file tests thành file thực thi `out/tests`, dễ dàng kiểm tra độc lập.

## 📷 Đã push thành công mã nguồn lên GitHub

![Push thành công lên GitHub](repo.png)

---

