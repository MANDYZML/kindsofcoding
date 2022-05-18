#pragma once

//ʵ�ֶ� --����һ������
typedef int HPDataType;
typedef struct Heap //��
{
	HPDataType* a; //����һ������
	int size;
	int capacity;// ����  ����
}HP;

//�ѵĻ�������

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
bool HeamEmpty(HP* php);
//�ѵĴ�С
int HeapSize(HP* php);