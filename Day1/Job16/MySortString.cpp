//
// Created by Clément on 02/04/2024.
//

#include "MySortString.h"

#include <cstring>
#include <iostream>

// Sorting: Bubble sort
void MySortString::sortString(char **str, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                char *temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    const char *str[] = {"Hello", "World", "C++", "Programming", "Language"};
    int n = sizeof(str) / sizeof(str[0]);
    MySortString::sortString(const_cast<char **>(str), n);
    for (int i = 0; i < n; i++) {
        std::cout << str[i] << std::endl;
    }
    return 0;
}