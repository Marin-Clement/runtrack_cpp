//
// Created by Clément on 02/04/2024.
//

#include "HelloWorld.h"
#include <iostream>

void HelloWorld::sayHello() {
    std::cout << "Hello, World!" << std::endl;
}

int main() {
    HelloWorld::sayHello();
    return 0;
}
