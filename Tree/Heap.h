#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

//ʵ�ֶ� --����һ������
typedef int HPDataType;
typedef struct Heap //�� --��ʵ��������
{
	HPDataType* a; //����һ������
	int size;
	int capacity;// ����  ����
}HP;

//�ѵĻ�������

//����
void Swap(HPDataType* p1, HPDataType* p2);
//��ӡ
void HeapPrint(HP* php);
//��ʼ��
 void HeapInit(HP* php);
//���ٶ�
void HeapDrstroy(HP* php);
//��������
void HeapPush(HP* php, HPDataType x);
//�Ѷ��������ɾ�� 
void HeapPop(HP* php);
//ȡ�Ѷ������� --ȡ��������
HPDataType HeapTop(HP* php);
//���
bool HeapEmpty(HP* php);
//�ѵĴ�С
int HeapSize(HP* php);