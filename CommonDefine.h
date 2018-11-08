//
//  CommonDefine.h
//  cT
//
//  Created by zfz on 2018/11/2.
//  Copyright © 2018 zfz. All rights reserved.
//

#ifndef CommonDefine_h
#define CommonDefine_h

#include "stdlib.h"

//#define OK      1
//#define Error   0

#define True    1
#define False   0

typedef enum Status{
    Error,
    OK
} Status;

// 有序数组
int sortedData[] ={ 1, 3, 6, 8, 10, 22, 23, 50 ,70, 99, 120, 240, 350 };

// 无序数组
int unsortedData[] = {22, 33, 11, 00, 99, 123, 321, 874, 1, 5, 3, 9999, 233, 44, 22 , 1 , 987, 120};

#endif /* CommonDefine_h */
