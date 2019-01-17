//
//  sort.c
//  cT
//
//  Created by zfz on 2018/10/30.
//  Copyright © 2018 zfz. All rights reserved.
//

#include "sort.h"
#include <stdlib.h>
#include "baseTools.h"

// 冒泡排序
void popSort (int count, int *arr) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

// 选择排序
// 每次选择出剩余数据中的最大值或者最小值
/*
 选择排序（Selection sort）是一种简单直观的排序算法。它的工作原理如下。首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。
 */

void selectSort(int arr[], int length) {
    
    for (int i = 0; i < length - 1; i++) {
        int min = i; // 先标记 找到最小的只替换一次
        for (int j = i + 1; j < length; j++) {
            if (arr[min] < arr[j]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

//int main(int argc, const char * argv[]) {
//
//    int i = atoi("10");
//    printf("%d\n", i);
////    int arrayToSort[] = {99, 23, 12, 55, 52, 6543, 676, 123 ,7 , 7542, 123, 543, -95, -13532, 584930};
////    int count = sizeof(arrayToSort)/sizeof(int);
////
////    popSort(count, arrayToSort);
////
////    for (int i = 0; i < count; i++) {
////        printf("%d\n", arrayToSort[i]);
////    }
//    return 0;
//}
