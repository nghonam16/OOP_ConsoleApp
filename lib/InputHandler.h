#pragma once
#include <string>
#include <vector>
#include <expected>

std::expected<int, std::string> requestIntUseCase(const std::string& prompt, int min, int max);
std::expected<int, std::string> requestPrimeUseCase(const std::string& prompt, int min, int max);
int requestIntUntilValidUseCase(const std::string& prompt, int min, int max);
int requestPrimeUntilValidUseCase(const std::string& prompt, int min, int max);
std::vector<int> requestPrimesUseCase(int n, const std::string& prompt, int min, int max);
