#include "InputHandler.h"
#include "Utils.h"
#include <iostream>
#include <regex>
#include <format>

// Yêu cầu người dùng nhập một số nguyên trong khoảng [min, max]
// Trả về std::expected chứa giá trị hợp lệ hoặc thông báo lỗi
std::expected<int, std::string> requestIntUseCase(const std::string& prompt, int min, int max) {
    std::cout << prompt;
    std::string buffer;
    std::getline(std::cin, buffer);

    if (buffer.empty()) {
        return std::unexpected("Chuỗi không thể rỗng");
    }

    std::regex pattern("^\\d+$");
    if (!std::regex_match(buffer, pattern)) {
        return std::unexpected("Không phải là định dạng số hợp lệ");
    }

    int value = std::stoi(buffer);
    if (value < min || value > max) {
        return std::unexpected("Miền giá trị không hợp lệ");
    }

    return value;
}


// Yêu cầu người dùng nhập một số nguyên tố trong khoảng [min, max]
// Trả về std::expected chứa số nguyên tố hoặc thông báo lỗi
std::expected<int, std::string> requestPrimeUseCase(const std::string& prompt, int min, int max) {
    auto result = requestIntUseCase(prompt, min, max);
    if (!result) return result;

    if (!isPrime(result.value())) {
        return std::unexpected("Không phải là số nguyên tố");
    }

    return result.value();
}


// Gọi requestIntUseCase lặp lại cho đến khi người dùng nhập hợp lệ
int requestIntUntilValidUseCase(const std::string& prompt, int min, int max) {
    std::expected<int, std::string> result;
    do {
        result = requestIntUseCase(prompt, min, max);
        if (!result) {
            std::cout << std::format("Lỗi: {}. Vui lòng nhập lại.\n\n", result.error());
        }
    } while (!result);
    return result.value();
}


// Gọi requestPrimeUseCase lặp lại cho đến khi người dùng nhập hợp lệ
int requestPrimeUntilValidUseCase(const std::string& prompt, int min, int max) {
    std::expected<int, std::string> result;
    do {
        result = requestPrimeUseCase(prompt, min, max);
        if (!result) {
            std::cout << std::format("Lỗi: {}. Vui lòng nhập lại.\n\n", result.error());
        }
    } while (!result);
    return result.value();
}


// Yêu cầu người dùng nhập `n` số nguyên tố trong khoảng [min, max]
// Mỗi số được nhập bằng cách gọi requestPrimeUntilValidUseCase
std::vector<int> requestPrimesUseCase(int n, const std::string& prompt, int min, int max) {
    std::cout << prompt << "\n";
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        std::string message = std::format(
            "Nhập số nguyên tố thứ {} thuộc [{}, {}]: ", i, min, max
        );
        int value = requestPrimeUntilValidUseCase(message, min, max);
        result.push_back(value);
    }
    return result;
}
