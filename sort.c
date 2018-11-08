//
//  sort.c
//  cT
//
//  Created by zfz on 2018/10/30.
//  Copyright © 2018 zfz. All rights reserved.
//

#include "sort.h"
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void popSort (int count, int *arr) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr + j, arr + j + 1);
            }
        }
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
