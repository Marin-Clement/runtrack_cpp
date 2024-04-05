//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_PRINT_H
#define RUNTRACK_CPP_PRINT_H


#include <iostream>

void print();

// 1 argument version
template<typename T>
void print(const T& t);

// multiple arguments version
template<typename T, typename... Args>
void print(const T& t, const Args&... args);


#endif //RUNTRACK_CPP_PRINT_H
