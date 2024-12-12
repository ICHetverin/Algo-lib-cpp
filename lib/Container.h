/*
This is a personal academic project. Dear PVS-Studio, please check it.
PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
*/

/*
TODO fix initialization in Container
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
    T* ReAlloc(size_t size) {
        if (size == 0) {
            data = new T[size];
        }
        return data;
    }
public:
    Container() : size(Size), capacity(Size) {
        data = ReAlloc(Size);
    }

};