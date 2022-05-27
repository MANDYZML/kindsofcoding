#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//����ʵ��

//ǰ������
struct BinaryTreeNode;//�������Ǹ��ṹ��
typedef struct BinaryTreeNode* QDataType; //����������Ľڵ��ָ��

//����һ���ڵ�
typedef struct QueueNode
{
	//����һ��������
	struct QueueNode* next;
	QDataType data;
}QNode;

//��������ָ��--һͷһβ �����������
typedef struct Queue  //һ������ �и�ͷָ��βָ��
{
	QNode* head;
	QNode* tail;

}Queue;

//��ʼ��
void QueueInit(Queue* pq);
//��������
void QueueDestroy(Queue* pq);
//������ -- ֻ���Ƕ�β
void QueuePush(Queue* pq, QDataType x);
//������ -- ֻ�ܳ���ͷ������
void QueuePop(Queue* pq);
//ȡ��ͷ������
QDataType QueueFront(Queue* pq);
//ȡ��β������
QDataType QueueBack(Queue* pq);
//�������Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);
//�� ������
int QueueSize(Queue* pq);