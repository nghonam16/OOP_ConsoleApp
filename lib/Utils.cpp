#include "Utils.h"
#include <iostream>


// Kiểm tra một số nguyên có phải là số nguyên tố hay không
// Trả về true nếu là số nguyên tố, ngược lại trả về false
bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i < number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

void print(const std::string& prompt, const std::vector<int>& numbers) {
    std::cout << prompt;
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}
