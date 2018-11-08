//
//  main.c
//  cT
//
//  Created by zfz on 2018/10/21.
//  Copyright © 2018 zfz. All rights reserved.
//

#include <stdio.h>

void outLingXing () {
    int temp = 7;
    for (int i = 0; i < temp; i++) {
        for (int j = 0; j < temp/2 + i; j++) {
            int half = temp/2;
            //            if (j < half) { // 上半部
            //                if (i % 2 == 0) { // 奇数行
            //
            //                } else { // 偶数行
            //                    if () {
            //                        <#statements#>
            //                    }
            //                }
            //            } else { // 下半部
            //
            //            }
            if (j < half-i+1) {
                printf("*");
            }else {
                printf(" ");
            }
        }
        putchar(10);
    }
}

//int main(int argc, const char * argv[]) {
//    
//}

//int main(int argc, const char * argv[]) {
//
//    char first [30] = "jim";
//    char last [] = "green";
//    
//    char * p;
//    for (p = first; *p != '\0'; p++);
//    for (char *q = last; *q != '\0';printf("-%c\n", *q), (*p = *q),p++, q++);
//    *(p++) = '\0';
//    
//    printf("%s\n", first);
//    return 0;
//}
