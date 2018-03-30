//
// Created by Administrator on 2018/3/30.
//

#include <iostream>
#include "MergeSort.h"
#include "Printer.h"


void sort(int *array, int low, int high);

void merge(int *array, int low, int high);


void mergeSort(int *array, int length) {
    sort(array, 0, length - 1);
}

void sort(int *array, int low, int high) {
//    std::cout << low << " " << high << std::endl;
    int dividedIndex;           // 分治位置索引变量
    if (low < high) {
        dividedIndex = (low + high) / 2;
        sort(array, low, dividedIndex);
        sort(array, dividedIndex + 1, high);
        merge(array, low, high);
    }
}

void merge(int *array, int low, int high) {
    std::cout << low << " " << high << std::endl;
    int nBegin1;
    int nEnd1;
    int nBegin2;
    int nEnd2;
    int *pTemp = NULL;  //临时数组
    int i = 0;

    nBegin1 = low;
    nEnd1 = (low + high) / 2;
    nBegin2 = nEnd1 + 1;
    nEnd2 = high;
    std::cout << nBegin1 << " " << nEnd1 << " " << nBegin2 << " " << nEnd2 << std::endl;
    pTemp = (int *) malloc(sizeof(int) * (high - low + 1));

    //合并 i = 0;
    while (nBegin1 <= nEnd1 && nBegin2 <= nEnd2) {
        if (array[nBegin1] < array[nBegin2]) {
            pTemp[i++] = array[nBegin1++];
        } else {
            pTemp[i++] = array[nBegin2++];
        }
    }


    //将有剩余的数组元素放入临时数组
    while (nBegin1 <= nEnd1) {
        pTemp[i++] = array[nBegin1++];

    }

    while (nBegin2 <= nEnd2) {
        pTemp[i++] = array[nBegin2++];
    }

    //将临时数组元素放回原数组
    for (i = 0; i < high - low + 1; i++) {
        array[i + low] = pTemp[i];
    }

    printfArray(pTemp, 10);
    printfArray(array, 10);

    std::cout << "_________________________" << std::endl;

    //释放
    free(pTemp);

}