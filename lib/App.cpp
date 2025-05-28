#include "App.h"
#include "InputHandler.h"
#include "Utils.h"
#include <iostream>
#include <format>

void appConfig() {
    // Hàm cấu hình (dự kiến sử dụng trong tương lai)
}

void appRun() {
    int min = 2;
    int max = 10;
    int n = requestIntUntilValidUseCase(
        std::format("Nhập số nguyên n thuộc [{}, {}]: ", min, max),
        min, max
    );

    min = 1;
    max = 100;
    std::vector<int> primes = requestPrimesUseCase(
        n,
        std::format("Nhập {} số nguyên tố thuộc [{}, {}]", n, min, max),
        min, max
    );

    print("Các số nguyên tố vừa nhập là: ", primes);
}
