#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//队列实现


typedef int QDataType;
//定义一个节点
typedef struct QueueNode
{
	//定义一个单链表
	struct QueueNode* next;
	QDataType data;
}QNode;

//设置两个指针--一头一尾 方便出入数据
typedef struct Queue  //一个队列 有个头指针尾指针
{
	QNode* head;
	QNode* tail;

}Queue;

//初始化
void QueueInit(Queue* pq);
//销毁链表
void QueueDestroy(Queue* pq);
//入数据 -- 只能是队尾
void QueuePush(Queue* pq, QDataType x);
//出数据 -- 只能出对头的数据
void QueuePop(Queue* pq);
//取对头的数据
QDataType QueueFront(Queue* pq);
//取队尾的数据
QDataType QueueBack(Queue* pq);
//查链表是否为空
bool QueueEmpty(Queue* pq);
//查 链表长度
int QueueSize(Queue* pq);