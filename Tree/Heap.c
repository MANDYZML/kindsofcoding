#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

//��ʼ��
void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

//���ٶ�
void HeapDrstroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

//���ϵ��� ����С�ڸ��� �ͺ͸��׽���λ��
void AdjustUp(HPDataType* a,int child)
{
	int parent = (child - 1) / 2;
	while (child > 0) //����
	{
		//С��Ҫ����С�ں���
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);//����ֵ 
			child = parent;
			parent = (child - 1) / 2;//���㸸��
		}
		else //���Ӵ��ڸ���
		{
			break;
		}
	}
}

//��������
void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	//����
	if (php->size == php->capacity)
	{

	}
	php->a[php->size] = x;//size�������һ�����ݵ���һ��λ�õ��±�
	php->size++;

	//�²����ֵ��ô����
	AdjustUp(php->a, php->size - 1);//�����²����λ�ÿ�ʼ��
}
//�Ѷ��������ɾ�� 
void HeapPop(HP* php);
//ȡ�Ѷ������� --ȡ��������
HPDataType HeapTop(HP* php);
//���
bool HeamEmpty(HP* php);
//�ѵĴ�С
int HeapSize(HP* php);