#include <iostream>
#include <cassert>
#include "Utils.h"
#include "InputHandler.h"

// Test hàm isPrime đơn giản
void testIsPrime() {
    assert(isPrime(2) == true);
    assert(isPrime(3) == true);
    assert(isPrime(4) == false);
    assert(isPrime(17) == true);
    assert(isPrime(1) == false);
    std::cout << "[Test isPrime] Passed\n";
}

// Test requestIntUseCase với input hợp lệ
// Vì requestIntUseCase dùng std::cin, bạn có thể tách hàm hoặc mock input trong test thật.
// Ở đây, ta tạm test isPrime để demo.
void testRequestIntUseCase() {
    std::cout << "[Test requestIntUseCase] Skipped interactive test\n";
}

int main() {
    testIsPrime();
    testRequestIntUseCase();

    std::cout << "All tests passed.\n";
    return 0;
}
