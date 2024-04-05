//
// Created by marin on 05/04/2024.
//

#include "Max.h++"

template<typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

template int max<int>(int a, int b);
template float max<float>(float a, float b);
template double max<double>(double a, double b);
template char max<char>(char a, char b);

int main() {
    std::cout << max(1, 2) << std::endl;
    std::cout << max(1.0f, 2.0f) << std::endl;
    std::cout << max(1.0, 2.0) << std::endl;
    std::cout << max('a', 'b') << std::endl;
    return 0;
}