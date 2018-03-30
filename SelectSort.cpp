//
// Created by Administrator on 2018/3/27.
//
#include "SelectSort.h"

void selectSort(int a[], int length) {
    int mindIdx; //最小元素的索引
    for (int i = 0; i < length - 1; i++) {
        mindIdx = i;
        for (int j = i + 1; j < length; j++) {
            if (a[j] < a[mindIdx]) {
                mindIdx = j;
            }
        }
        int temp = a[i];
        a[i] = a[mindIdx];
        a[mindIdx] = temp;
    }

}




