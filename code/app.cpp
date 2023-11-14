#include <iostream>
#include <random>
#include <array>

int main() {
    std::array<std::string, 3> words = {"apple", "banana", "cherry"};
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 2);

    std::cout << "Output:" << std::endl;
    std::cout << words[distr(gen)] << std::endl;

    return 0;
}
