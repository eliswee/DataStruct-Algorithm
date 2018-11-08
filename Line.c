//
//  Line.c
//  cT
//
//  Created by zfz on 2018/11/2.
//  Copyright © 2018 zfz. All rights reserved.
//

#include "Line.h"
#include "CommonDefine.h"

// 线性表
// 创建线性表  增 删 改 查  并集 交集

int maxSize = 20;

typedef int DataType;

typedef struct Line {
    DataType data[20];  // 表容器
    int length;         // 表长度
}Line;


//// 查询线性表
//// 参数 ： 表  序号  数据接收
//Status GetElem(Line *line, int index, DataType *data) {
//    
//}
//
//// 创建线性表
//Line * CreateLine() {
//    
//    Line *line = (Line *)malloc(sizeof(Line));
//    line->length = 0;
//    
//    return line;
//}
//
//
//int main (int argc, char *argv []) {
//    
//    Line *line = CreateLine();
//    
//}
