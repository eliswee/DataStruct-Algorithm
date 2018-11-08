//
//  runoobT01.c
//  cT
//
//  Created by zfz on 2018/10/25.
//  Copyright © 2018 zfz. All rights reserved.
//

#include "runoobT01.h"
#include <stdlib.h>

typedef struct {
    int *add;
    int count;
} returnStruct;

/* 调用：
 returnStruct value = t01();
 for (int i = 0; i < value.count; i++) {
 printf("%d\n", *(value.add+i));
 }
 free(value.add);
 value.add = NULL;
 */
returnStruct t01 () {
    /*题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
     
     程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列
     */
    int cnt = 3;
    int index = 0;
    int *array = (int *)calloc(cnt, 4);
    returnStruct value = {NULL, 0};
    if (NULL == array) {
        printf("alloc error");
        return value;
    }
    
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            for (int k = 1; k < 5; k++) {
                if (i!=j&&j!=k&&i!=k) {
                    if (index >= cnt) {
                        array = realloc(array, 3);
                        if (NULL == array) {
                            printf("alloc error");
                            return value;
                        }
                        cnt+=3;
                    }
                    array[index] = i*100+j*10+k;
                    index++;
                }
            }
        }
    }
    value.add = array;
    value.count = cnt;
    return value;
}

//int main(int argc, const char * argv[]) {
//    
//}
