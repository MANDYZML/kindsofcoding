#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

//��ʼ��ջ
void StackInit(ST* ps)//ջ��ָ��ps
{
	assert(ps);
	ps->a = NULL;//��ջ��ʼ��Ϊ��
	ps->top = 0;//ջ��Ϊ0
	ps->capacity = 0;//����Ϊ0
}

//����ջ
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

//����һ������ -- ֻ��ջ�����в���
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//���ռ乻���� top�����һ�����ݵ���һ��
	if (ps->top == ps->capacity)//˵������
	{
		//���˾����� һ��ʼ�ȸ�4 ֮��������˾�2������
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);//��ԭ�еĿռ�����
		//����ռ��ǿ� ���൱��malloc �������
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		//������
		ps->a = tmp;//���ռ���ָ��
		ps->capacity = newCapacity;//������
	}
	//������
	ps->a[ps->top] = x;//�ȸ�topλ�÷�����
	ps->top++;//�ڰ�top++
}

//ɾ��һ��ջ��Ԫ�� -- ֻ��ջ������ɾ��
void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));//��ֹtop����û
	ps->top--;
}

//ȡջ����Ԫ��
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));//��ֹtop����û

	return ps->a[ps->top - 1];//����ջ��Ԫ�� topǰһ��
}

//�ж�ջΪ��Ϊ��
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;//0���ǿ� ������0���Ǽ�--�ǿ�
}
//��ȡջ�Ĵ�С
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;//top��������ݵ���һ�� ��Ϊ�±�Ƕ����������ݸ���
}