//This is a personal academic project. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

/*
TODO namespace
* make personal namespace with all common funcitons and algorithms
* also data structures: heap, bin tree, avl, etc.
*/

#include <iostream>
#include "../lib/Array.h"

int main() {
    Array<int, 10> array;

    std::cout << array.size() << std::endl;

    return 0;
}