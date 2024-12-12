/*
This is a personal academic project. Dear PVS-Studio, please check it.
PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
*/

#pragma once
#include <stdint.h>
#include <iostream>

template <typename T, size_t Size>
class Container {
protected:
    uint32_t size; // how many elements in
    uint32_t capacity; // how many elements can be stored
    T* data; // pointer to the first segment of data
private:
    void ReAlloc(size_t size) {
        if (size == 0) {
            data = new T[size];
        }
    }
public:
    Container() : size(Size) {
        ReAlloc(Size);
    }

};