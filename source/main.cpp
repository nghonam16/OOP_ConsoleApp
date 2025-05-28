#include "App.h"
#include <iostream>

int main() {
    appConfig();
    std::cout << "Chương trình thao tác với mảng số nguyên tố\n";
    appRun();

    std::cout << "\n\nChương trình đang thoát. Bấm Enter để kết thúc..";
    std::cin.get();
    return 0;
}
