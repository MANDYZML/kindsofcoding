#pragma once
#include<stdio.h> 
#include<stdlib.h> 
#include<assert.h>

//#define N 100  //����һ���� ����Ŀռ��С
//typedef int SLDataType;//SL��ǰ׺ �Ժ�ṹ�������������ȫ��int���ͷ����
//
////����˳���--��̬˳���
//// ���⣺N̫С�����ܲ����ã�N̫�󣬿����˷ѿռ�
////����һ���ṹ�� -- һ������������˶��ٸ�������
//struct SeqList
//{
//	SLDataType a[N];//����һ������
//	int size;//��ʾ�ж�������
//
//};

//����
typedef int SLDataType;//SL��ǰ׺ �Ժ�ṹ���������������int���ͷ����

//����˳���--��̬˳���
// ���⣺N̫С�����ܲ����ã�N̫�󣬿����˷ѿռ�
//����һ���ṹ�� -- һ������������˶��ٸ�������
typedef struct SeqList
{
	SLDataType* a;//ָ��̬���������ָ��
	int size;    //��Ч���ݸ���
	int capacity;//���� --�ռ��С
}SL;

//��ӡ����
void SLPrint(SL* ps);

//˳���� ��ɾ���
//void SeqListInit(SL s);//��˳�����г�ʼ��
void SLInit(SL* ps);

//��Խ��  ���������free
void SLDestory(SL* ps);


//�������
void SLCheckcapacity(SL* ps);

//���Ա�Ļ������� --- ͷ��/ͷɾ/β��/βɾ -- STL
//β��βɾ ʱ�临�Ӷ� O(1)
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

//ͷ��ͷɾ ʱ�临�Ӷ� O(N)
void SLPushFront(SL* ps, SLDataType x);//ͷ��
void SLPopFront(SL* ps);//ͷɾ

//��ĳ��λ�ý��� ���� ɾ��
void SLInsert(SL* ps, int pos, SLDataType x);//pos���±�
void SLErase(SL* ps, int pos);

//���� �޸�
int SLFind(SL* ps, SLDataType x);
void SLModify(SL* ps, int pos, SLDataType x);