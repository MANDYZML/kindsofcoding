#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

//����
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//��ӡ
void HeapPrint(HP* php)
{
	assert(php);
	for (int i = 0; i < php->size; ++i)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}
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

//���ϵ��� ����С�ڸ��� �ͺ͸��׽���λ��--ջ��Ҫ��С����
void AdjustUp(HPDataType* a,int child)
{
	int parent = (child - 1) / 2;
	while (child > 0) //����
	{
		//С��Ҫ����С�ں���
		//if (a[child] < a[parent])
		if (a[child] > a[parent])//���
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
		//���һ��ʼ�����ǿ�*2���ǿ� ����һ��ʼ��4���ռ� ֮��������*2
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");//����ʧ��
			exit(-1);
		}
		//���ݳɹ�
		php->a = tmp;
		php->capacity = newcapacity;
	}
	php->a[php->size] = x;//size�������һ�����ݵ���һ��λ�õ��±�
	php->size++;

	//�²����ֵ��ô����
	AdjustUp(php->a, php->size - 1);//�����²����λ�ÿ�ʼ��
}

//���µ���
void AdjustDown(HPDataType* a, int size, int parent)
{
	//��˼·
	int child = parent * 2 + 1;//Ĭ��������
	while (child < size)//childĬ������
	{
         //ѡ�����ӵ���С���Ǹ�
		//if (child+1 < size && a[child + 1] < a[child])//����Һ���С������
		//ѡ�����ӵ��д���Ǹ�
		if (child+1 < size && a[child + 1] > a[child])//����Һ���С������
		{
			++child;//���С�����Һ���
		}
		//������ childһ����С���Ǹ�
		//���Ӹ����ױȽ�
		//if (a[child] < a[parent])//��Ϊ��С�� ����ҪС�ں���
		if (a[child] > a[parent])//��Ϊ�Ǵ�� ����Ҫ���ں���
		
		{
			Swap(&a[child], &a[parent]);
			parent = child;//�ø��׵����ӵ�λ����
			child = parent * 2 + 1;//�ٽ�����������㺢���㺢��
		}
		else //˵�� С�ĺ��Ӷ����ڸ���  �����Ӷ����ڸ���
		{
			//���õ���
			break;
		}
	}

	/*int leftchild = parent * 2 + 1;
	int rightchild = parent * 2 + 2;
	while (leftchild < rightchild)
	{
		if (leftchild < parent)
		{
			Swap(&a[leftchild], &a[parent]);
			parent = leftchild;
		}
		else
		{
			break;
		}
	}*/
	
}

//�Ѷ��������ɾ�� 
void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&(php->a[0]),&(php->a[php->size - 1]));//����ͷ��β������
	php->size--;//�ѶѶ������ݽ�������β �ڰ���ɾ��

	//���µ���
	AdjustDown(php->a, php->size, 0);
}
//ȡ�Ѷ������� --ȡ��������
HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	return php->a[0];//�±�Ϊ0������ ����ջ��
}
//���
bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
//�ѵĴ�С
int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}