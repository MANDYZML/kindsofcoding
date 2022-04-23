#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//ͷ�ļ��е�ʵ��

//��ӡ˳��������
void SLPrint(SL* ps)
{
	//������� psָ�벻Ϊ��
	//assert(ps != NULL);
	assert(ps);

	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);//�ӵ�һ��λ�õĿ�ʼ��ӡ
	}
	printf("\n");
}

//˳��� ��ʼ��
void SLInit(SL* ps)//�β�   test.c sl�ĵ�ַ������ps
{
	assert(ps);

	ps->a = NULL;//����a  size  Ҳ���Ƿ���sl����
	ps->size = ps->capacity = 0 ;

}

void SLDestory(SL* ps)
{
	assert(ps);

	if (ps->a)//�����ڿ� ����
	{
		free(ps->a);
		ps -> a = NULL;
		ps->capacity = ps->size = 0;
	}
}

//�������
void SLCheckcapacity(SL* ps)
{
	//��������ռ�--��ֹԽ��,���˾�����
	if (ps->size == ps->capacity)
		//��Ч����==������С�������Ч������+1��Խ����
		//��Ҫ������
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//ÿ������ 2��
		//���size capacity ��0 �Ǿ���ǰ���ռ��4��
		//�������0 �͸�2��
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		//����ԭ��������a  newCapacity�Ǳ������� ��4�����ݵ�8��  ���ǲ���Ҫ�󴫵�λ �ֽ�
		//�����һ�ν��� ԭ�������������ǿգ��ͺ�mallocһ�� �ڴ��Ҹ��ռ����¿�
		//������ǿ�  ������newCapacity �µĴ�С

		if (tmp == NULL)//����ʧ�� -- û���㹻�ڴ�
		{
			printf("realloc fail\n");
			exit(-1);//����������
		}

		//����  �������¿ռ�
		ps->a = tmp;//���ݵ������¿ռ�
		ps->capacity = newCapacity;//�����¿ռ�
	}

}



//β��-����Ч���ֺ�һ������
void SLPushBack(SL* ps, SLDataType x)
{
	//assert(ps);
	//SLCheckcapacity(ps);

	//ps->a[ps->size] = x;//size�����ݸ���
	////�����size������һ���� Ҳ���Ǽ�������������±�����
	////���� ps->size Ҳ����ָ���� �±�Ϊsize���� Ҳ���� ������Ч���ݵ���һ��
	//ps->size++;//��Ч����++

	SLInsert(ps, ps->size, x);
}

//ͷ��
void SLPushFront(SL* ps, SLDataType x)
{
	//assert(ps);

	//SLCheckcapacity(ps);
	////Ų������
	//int end = ps->size - 1;//size����Ч���ݵ���һ��λ��
	//while (end >= 0)//��Ч�������һλ��end ��>=0 ��Ҫ����Ų
	//{
	//	ps->a[end + 1] = ps->a[end];//����Ų end Ų��end+1��λ��
	//	--end;
	//}

	////������
	//ps->a[0] = x;
	//ps->size++;//���ݸ���++

	SLInsert(ps, 0, x);
}

//βɾ
void SLPopBack(SL* ps)
{
	//assert(ps);

	////������
	//if (ps->size == 0)//û������
	//{
	//	printf("SeqList is empty\n"); 
	//	return;
	//}
	////��������
	//assert(ps->size > 0);//Ϊ��ͼ�����Ϊ�پͱ���

	//ps->size--;//size����Ч���� size-- ���ǴӺ��ȥһ����Ч����

	SLErase(ps, ps->size - 1);

}

//ͷɾ 0 1 2 3 4  ��1��ʼ һ��һ����ǰŲ  ���ǰѵ�һ��������
void SLPopFront(SL* ps)
{
	//assert(ps);

	////������� size--  ��û��Խ��
	//assert(ps->size > 0);

	//int begin = 1;
	//while (begin < ps->size)//size�����һ����Ч������һ��
	//{
	//	ps->a[begin - 1] = ps->a[begin];
	//	++begin;
	//}
	//ps->size--;

	SLErase(ps, 0);
}

//��ĳ��λ�ý��в���
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);//Ҫ�������Χ�ڲ���
	//pos ��Ҫ�������ݵ��Ǹ�������
	//     pos   end
	//0  1  2  3  4
	//0  1     2  3  4
	
	SLCheckcapacity(ps);

	//Ų������
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		//��һ�ε�ʱ�� pos-end �������� 2 3 4 ����Ų
		//��ʱ�� end����3 > pos ����Ų
		//�ڶ��� end��2 pos��end�ص��� ����ֹ�� ����Ų��
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

//��ĳ��λ�ý���ɾ��
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	//     pos   end 
	//0  1  2  3  4
	//     begin
	//0  1  3  4
	//        begin
	//0  1  3  4
	//            begin


	//int begin = pos;
	//while (begin < ps->size)
	//{
	//	ps->a[begin] = ps->a[begin + 1];
	//	++begin;
	//}


	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}
//����
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)//�ҵ���
			return i;//�����±�

	}
	//û���ҵ�
	return -1;//��Ϊ�±겻������-1
}

//�޸�
void SLModify(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	ps->a[pos] = x;

}