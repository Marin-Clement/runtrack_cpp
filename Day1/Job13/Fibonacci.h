//
// Created by Clément on 02/04/2024.
//

#ifndef RUNTRACK_CPP_FIBONACCI_H
#define RUNTRACK_CPP_FIBONACCI_H

template <int N>
struct Fibonacci {
    static const int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template <>
struct Fibonacci<0> {
    static const int value = 0;
};

template <>
struct Fibonacci<1> {
    static const int value = 1;
};

#endif //RUNTRACK_CPP_FIBONACCI_H
