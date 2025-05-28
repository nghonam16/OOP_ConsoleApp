#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H
#include <string>
#include <vector>
#include <expected>


/**
 * @brief Yêu cầu người dùng nhập một số nguyên trong khoảng [min, max].
 * 
 * Hàm trả về giá trị số nguyên nếu nhập hợp lệ, hoặc lỗi mô tả nếu không hợp lệ.
 * 
 * @param prompt Chuỗi yêu cầu nhập dữ liệu hiển thị cho người dùng.
 * @param min Giá trị nhỏ nhất cho phép.
 * @param max Giá trị lớn nhất cho phép.
 * @return std::expected<int, std::string> Giá trị số nguyên hợp lệ hoặc chuỗi lỗi.
 */
std::expected<int, std::string> requestIntUseCase(const std::string& prompt, int min, int max);





/**
 * @brief Yêu cầu người dùng nhập một số nguyên tố trong khoảng [min, max].
 * 
 * Hàm kiểm tra tính nguyên tố và miền giá trị.
 * 
 * @param prompt Chuỗi yêu cầu nhập dữ liệu.
 * @param min Giá trị nhỏ nhất.
 * @param max Giá trị lớn nhất.
 * @return std::expected<int, std::string> Giá trị số nguyên tố hợp lệ hoặc lỗi.
 */
std::expected<int, std::string> requestPrimeUseCase(const std::string& prompt, int min, int max);


/**
 * @brief Yêu cầu nhập một số nguyên trong khoảng [min, max] đến khi hợp lệ.
 * 
 * Hàm sẽ lặp nhập lại nếu dữ liệu không hợp lệ.
 * 
 * @param prompt Chuỗi yêu cầu nhập dữ liệu.
 * @param min Giá trị nhỏ nhất.
 * @param max Giá trị lớn nhất.
 * @return int Giá trị số nguyên hợp lệ.
 */
int requestIntUntilValidUseCase(const std::string& prompt, int min, int max);




/**
 * @brief Yêu cầu nhập một số nguyên tố trong khoảng [min, max] đến khi hợp lệ.
 * 
 * Hàm sẽ lặp nhập lại nếu dữ liệu không hợp lệ hoặc không phải số nguyên tố.
 * 
 * @param prompt Chuỗi yêu cầu nhập dữ liệu.
 * @param min Giá trị nhỏ nhất.
 * @param max Giá trị lớn nhất.
 * @return int Giá trị số nguyên tố hợp lệ.
 */
int requestPrimeUntilValidUseCase(const std::string& prompt, int min, int max);




/**
 * @brief Yêu cầu nhập n số nguyên tố, mỗi số trong khoảng [min, max].
 * 
 * Hàm yêu cầu người dùng nhập tuần tự n số nguyên tố hợp lệ.
 * 
 * @param n Số lượng số nguyên tố cần nhập.
 * @param prompt Chuỗi yêu cầu nhập dữ liệu tổng quát.
 * @param min Giá trị nhỏ nhất.
 * @param max Giá trị lớn nhất.
 * @return std::vector<int> Mảng chứa các số nguyên tố đã nhập.
 */
std::vector<int> requestPrimesUseCase(int n, const std::string& prompt, int min, int max);
#endif // INPUT_HANDLER_H