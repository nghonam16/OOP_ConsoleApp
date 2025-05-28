#ifndef UTILS_H
#define UTILS_H
#include <vector>
#include <string>


/**
 * @brief Kiểm tra một số có phải số nguyên tố không.
 * 
 * @param number Số nguyên cần kiểm tra.
 * @return true Nếu là số nguyên tố.
 * @return false Nếu không phải số nguyên tố.
 */
bool isPrime(int number);



/**
 * @brief In ra màn hình một chuỗi kèm theo mảng số nguyên.
 * 
 * @param prompt Chuỗi tiêu đề hiển thị trước khi in mảng.
 * @param primes Mảng các số nguyên cần in.
 */
void print(const std::string& prompt, const std::vector<int>& numbers);

#endif // UTILS_H