#include <iostream>
#include "SelectSort.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "InsertSort.h"
#include "Printer.h"
#include "ShellSort.h"
#include "MergeSort.h"


int main() {

    int array[] = {7, 4, 12, 25, 6, 9, 5, 17, 2, 0};
    int left = 0;
    int length = sizeof(array) / sizeof(int);
    int right = length - 1;
    std::cout << "left:" << left << std::endl;
    std::cout << "right:" << right << std::endl;
    std::cout << "source array:" << std::endl;
    printfArray(array, length);


//    std::cout << "sorting:" << std::endl;
//    bubleSort(array, length);
//    std::cout << "after sort:" << std::endl;
//    printfArray(array, length);



//    std::cout << "sorting:" << std::endl;
//    selectSort(array, length);
//    std::cout << "after sort:" << std::endl;
//    printfArray(array, length);


//    std::cout << "sorting:" << std::endl;
//    quickSort(array, 0, right);
//    std::cout << "after sort:" << std::endl;
//    printfArray(array, length);



//    std::cout << "sorting:" << std::endl;
//    insertSort(array, length);
//    std::cout << "after sort:" << std::endl;
//    printfArray(array, length);

//    std::cout << "sorting:" << std::endl;
//    shellInsertSort(array, length);
//    std::cout << "after sort:" << std::endl;
//    printfArray(array, length);


    std::cout << "sorting:" << std::endl;
    mergeSort(array, length);
    std::cout << "after sort:" << std::endl;
    printfArray(array, length);

    return 0;
}



