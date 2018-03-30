//
// Created by Administrator on 2018/3/28.
//
#include <iostream>
#include "Printer.h"

void printfArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}