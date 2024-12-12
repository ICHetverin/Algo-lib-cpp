/*
This is a personal academic project. Dear PVS-Studio, please check it.
PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
*/

#pragma once
#include "Container.h"

template <typename T, size_t Size>
class Array : public Container<T, Size> {
public:
    Array() : Container<T, Size>() {
        std::cout << "Array constructor" << std::endl;
    }

    int size() const {
        return Size;
    }
};