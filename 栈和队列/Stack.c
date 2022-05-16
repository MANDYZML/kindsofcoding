#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

//初始化栈
void StackInit(ST* ps)//栈的指针ps
{
	assert(ps);
	ps->a = NULL;//给栈初始化为空
	ps->top = 0;//栈顶为0
	ps->capacity = 0;//容量为0
}

//销毁栈
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

//插入一个数据 -- 只能栈顶进行插入
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//看空间够不够 top是最后一个数据的下一个
	if (ps->top == ps->capacity)//说明满了
	{
		//满了就扩容 一开始先给4 之后如果满了就2倍扩容
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);//给原有的空间扩容
		//如果空间是空 就相当于malloc 异地扩容
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		//扩完容
		ps->a = tmp;//给空间新指针
		ps->capacity = newCapacity;//新容量
	}
	//放数据
	ps->a[ps->top] = x;//先给top位置放数据
	ps->top++;//在把top++
}

//删除一个栈顶元素 -- 只能栈顶进行删除
void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));//防止top减到没
	ps->top--;
}

//取栈顶的元素
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));//防止top减到没

	return ps->a[ps->top - 1];//返回栈顶元素 top前一个
}

//判断栈为不为空
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;//0就是空 不等于0就是假--非空
}
//获取栈的大小
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;//top是最后数据的下一个 作为下标角度正好是数据个数
}