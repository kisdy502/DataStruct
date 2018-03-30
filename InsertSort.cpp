//
// Created by Administrator on 2018/3/27.
//

#include "InsertSort.h"
#include "Printer.h"
#include <iostream>

void insertSort(int* a, int length) {
    int prevIdx;
    int current;
    for (int i = 1; i < length; i++) {
        prevIdx = i - 1;
        current = a[i];
        std::cout << "----begin while-----" << i << std::endl;
        while (prevIdx >= 0 && a[prevIdx] > current) {
            a[prevIdx + 1] = a[prevIdx];
            prevIdx--;
            printfArray(a, 5);
        }
        a[prevIdx + 1] = current;
        std::cout << "----end while-----" << std::endl;
        printfArray(a, 5);
        std::cout << "-----end for----" << std::endl;
    }
}


void sort(int a[], int length) {
    int prevIndex;      //带插入的位置
    int current;        //带插入的元素
    for (int i = 1; i < length; i++) {
        prevIndex = i - 1;
        current = a[i];
        // find the bigger element than current
        while (prevIndex >= 0 && a[prevIndex] > current) {
            a[prevIndex + 1] = a[prevIndex];
            prevIndex--;    //pos move to prevIndex postion
        }
        a[prevIndex + 1] = current;
    }
}