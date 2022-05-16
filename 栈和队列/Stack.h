#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//#define N 10  //��̬�� 
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType a[N];//��̬��ջ
//	int top;//��ʶջ����λ��
//}ST;

//��̬��
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;//��̬��ջ--a
	int top;//��ʶջ����λ��
	int capacity;//ջ������
}ST;

//��ʼ��ջ
void StackInit(ST* ps);

//����ջ
void StackDestroy(ST* ps);

//����һ������ -- ֻ��ջ�����в���
void StackPush(ST* ps,STDataType x);

//ɾ��һ������ -- ֻ��ջ������ɾ��
void StackPop(ST* ps);

//ȡջ����Ԫ��
STDataType StackTop(ST* ps);

//�ж�ջΪ��Ϊ��
bool StackEmpty(ST* ps);

//��ȡջ�Ĵ�С
int StackSize(ST* ps);
