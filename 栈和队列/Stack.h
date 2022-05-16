#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//#define N 10  //静态的 
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType a[N];//静态的栈
//	int top;//标识栈顶的位置
//}ST;

//动态的
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;//静态的栈--a
	int top;//标识栈顶的位置
	int capacity;//栈的容量
}ST;

//初始化栈
void StackInit(ST* ps);

//销毁栈
void StackDestroy(ST* ps);

//插入一个数据 -- 只能栈顶进行插入
void StackPush(ST* ps,STDataType x);

//删除一个数据 -- 只能栈顶进行删除
void StackPop(ST* ps);

//取栈顶的元素
STDataType StackTop(ST* ps);

//判断栈为不为空
bool StackEmpty(ST* ps);

//获取栈的大小
int StackSize(ST* ps);
