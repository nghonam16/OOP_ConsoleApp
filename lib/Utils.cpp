#include "Utils.h"
#include <iostream>

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
