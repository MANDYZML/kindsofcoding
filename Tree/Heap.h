#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

//实现堆 --堆是一个数组
typedef int HPDataType;
typedef struct Heap //堆 --其实就是数组
{
	HPDataType* a; //定义一个数组
	int size;
	int capacity;// 容量  扩容
}HP;

//堆的基本操作

//交换
void Swap(HPDataType* p1, HPDataType* p2);
//打印
void HeapPrint(HP* php);
//初始化
 void HeapInit(HP* php);
//销毁堆
void HeapDrstroy(HP* php);
//插入数据
void HeapPush(HP* php, HPDataType x);
//把堆里的数据删除 
void HeapPop(HP* php);
//取堆顶的数据 --取最大的数据
HPDataType HeapTop(HP* php);
//查空
bool HeapEmpty(HP* php);
//堆的大小
int HeapSize(HP* php);