//
//  main.c
//  cT
//
//  Created by zfz on 2018/10/21.
//  Copyright © 2018 zfz. All rights reserved.
//

#include <stdio.h>
#include "CommonDefine.h"
#include "baseTools.h"
#include "sort.h"
#include <string.h>

enum haha {
    aa,
    bb
};

void hoho() {
    int a[] = {1,2,3,4,5};
    int *ptr = (int *)(&a+1);
    printf("%d  %d", *(a+1), *(ptr - 1));
}

int numUniqueEmails(char** emails, int emailsSize);

int* sortArrayByParity(int* A, int ASize, int* returnSize) {
    
    int *temp1 = (int *)calloc(ASize , sizeof(A[0]));
    int *temp2 = (int *)calloc(ASize , sizeof(A[0]));
    
    int index1  = 0, index2 = 0;
    
    for (int i = 0; i < ASize; i++) {
        if (A[i]%2 == 0) {
            temp1[index1++] = A[i];
        } else {
            temp2[index2++] = A[i];
        }
    }
    
    for (int i = 0; i < index2; i++) {
        temp1[index1++] = temp2[i];
    }
    
    *returnSize = ASize;
    return temp1;
}

int main(int argc, const char * argv[]) {
    
//    enum haha ha;
//
//    printf("%lu\n", sizeof(ha));
    
    char * target [] = {"test.email+alex@leetcode.com",
                "test.e.mail+bob.cathy@leetcode.com",
        "testemail+david@lee.tcode.com"};
    
    numUniqueEmails(target, 3);
    
//    int len = sizeof(unsortedData)/sizeof(int);
//    popSort(len, unsortedData);
//    printArr(unsortedData, len);
}


// localName: 忽略点  忽略+后面的内容
// domainName: 保留原有
int numUniqueEmails(char** emails, int emailsSize) {
 
    char** tar[emailsSize];
    
    // 过滤字符串
    for (int i = 0; i < emailsSize; i++) {
        
        char* tmp = emails[i];
        char* tar = tar[i];
        
        while (*tmp != '\0') {
            
            if (*tmp != '.' && *tmp != '+') {
                
            }
            
            
            tmp++;
        }
        
    }
    
    
    
    return 0;
}
