//
//  binarySearch.c
//  cT
//
//  Created by zfz on 2018/11/7.
//  Copyright © 2018 zfz. All rights reserved.
//

// 二分查找

#include <stdio.h>

int data[] ={ 1, 3, 6, 8, 10, 22, 23, 50 ,70, 99, 120, 240, 350 };

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

int main(int argc, const char * argv[]) {
    
    int length = sizeof(data)/sizeof(int);
    
    int target = 50;
    
    int index = binarySearch(data, length, target);
    printf("target = %d, findIndex: %d : value:%d\n", target, index, index!=-1?data[index]:-1);
}