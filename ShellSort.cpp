//
// Created by Administrator on 2018/3/28.
//

#include <iostream>
#include "ShellSort.h"
#include "Printer.h"

/**
 * 外面 shell 里面交换排序
 * @param a
 * @param length
 */
void shellSwapSort(int *a, int length) {
    int gap;
    for (gap = length / 2; gap > 0; gap /= 2) {

        std::cout << "gap:" << gap << std::endl;

        for (int i = gap; i < length; i++) {
            int j = i;
            while (j - gap >= 0 && a[j] < a[j - gap]) {
                int temp = a[j];
                a[j] = a[j - gap];
                a[j - gap] = temp;
                j -= gap;

                printfArray(a, 10);
            }
        }
    }
}

/**
 * 外面shell 里面 插入排序
 * @param a
 * @param length
 */
void shellInsertSort(int *a, int length) {
    int gap;
    for (gap = length / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < length; i++) {
            int j = i;
            int temp = a[j];
            while (j - gap >= 0 && temp < a[j - gap]) {
                a[j] = a[j - gap];
                j -= gap;
            }
            a[j] = temp;
        }
    }
}

