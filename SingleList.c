
//  lianbiao.c
//  cT
//
//  Created by zfz on 2018/10/27.
//  Copyright © 2018 zfz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// 单链表练习
// 链表要带头结点： 作用： 1.让所有节点都有pre 2.如果删除首个数据head不会变化
// 实现： 创建链表  增 删 改 查

typedef int Data;

typedef struct node {
    Data data; // 数据域
    struct node *next; // 指针域，指向自身数据类型
}Node;

Node *head = NULL;
Node *last = NULL;



// 1.头插法 头结点为空
// 新节点先指向头结点后的节点，再将头节点指向新节点

Node * createListH () {
    
    head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    return head;
}

void insertDataH(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    
    newNode->next = head->next;
    head->next = newNode;
}

void traverseH () {
    Node *idx = head->next;
    do {
        printf("data:%d\n", idx->data);
        idx = idx->next;
    } while ((idx != NULL));
}

// 2.尾插法 没有空头节点
Node * createListL () {
    head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    last = head;
    return head;
}

void insertDataL (int data) {
    Node *new = malloc(sizeof(Node));
    new->next = NULL;
    last->data = data;
    last->next = new;
    last = new;
}

void traverseL () {
    Node *idx = head;
    while (idx->next!=NULL) {
        printf("data-%d\n", idx->data);
        idx = idx->next;
    }
}

//int main(int argc, const char * argv[]) {
//    createListH();
//    insertDataH(10);
//    insertDataH(20);
//    insertDataH(30);
//    traverseH();
//    
//    
////    createListL();
////    insertDataL(456);
////    insertDataL(123);
////    insertDataL(789);
////    traverseL();
//}
