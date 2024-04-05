//
// Created by marin on 05/04/2024.
//

#include "Print.h++"

void print() {
    std::cout << std::endl;
}

template<typename T>
void print(const T& t) {
    std::cout << t << std::endl;
}

template<typename T, typename... Args>
void print(const T& t, const Args&... args) {
    std::cout << t << ", ";
    print(args...);
}

int main() {
    print();
    print(1);
    print(1, 2);
    print(1, 2, 3);
    print(1, 2, 3, 4);
    print(1, 2, 3, 4, 5);
    print(1, 2, 3, 4, 5, 6);
    print(1, 2, 3, 4, 5, 6, 7);
    print(1, 2, 3, 4, 5, 6, 7, 8);
    print(1, 2, 3, 4, 5, 6, 7, 8, 9);
    print(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    return 0;
}