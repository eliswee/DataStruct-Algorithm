//
//  baseTools.c
//  cT
//
//  Created by zfz on 2018/11/16.
//  Copyright © 2018 zfz. All rights reserved.
//

#include "baseTools.h"

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
}

// 二分查找
int binarySearch(int *array, int length, int target) {
    
    int mid = 0, low = 0, high = length-1;
    
    while (low <= high) {
        static int count = 0;
        count++;
        mid = (low + high)/2; // 向下取整
        printf("查询第%d次，对象：%d\n", count, array[mid]);
        if (array[mid] == target) return mid;
        if (array[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
