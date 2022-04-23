#pragma once
#include<stdio.h> 
#include<stdlib.h> 
#include<assert.h>

//#define N 100  //定义一个宏 方便改空间大小
//typedef int SLDataType;//SL是前缀 以后结构体里面如果不想全是int类型方便改
//
////管理顺序表--静态顺序表
//// 问题：N太小，可能不够用，N太大，可能浪费空间
////定义一个结构体 -- 一个数组里面放了多少个数据呢
//struct SeqList
//{
//	SLDataType a[N];//定义一个数组
//	int size;//表示有多少数据
//
//};

//改良
typedef int SLDataType;//SL是前缀 以后结构体里面如果不想是int类型方便改

//管理顺序表--动态顺序表
// 问题：N太小，可能不够用，N太大，可能浪费空间
//定义一个结构体 -- 一个数组里面放了多少个数据呢
typedef struct SeqList
{
	SLDataType* a;//指向动态开辟数组的指针
	int size;    //有效数据个数
	int capacity;//容量 --空间大小
}SL;

//打印函数
void SLPrint(SL* ps);

//顺序表的 增删查改
//void SeqListInit(SL s);//对顺序表进行初始化
void SLInit(SL* ps);

//看越界  这个函数会free
void SLDestory(SL* ps);


//检查容量
void SLCheckcapacity(SL* ps);

//线性表的基本操作 --- 头插/头删/尾插/尾删 -- STL
//尾插尾删 时间复杂度 O(1)
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

//头插头删 时间复杂度 O(N)
void SLPushFront(SL* ps, SLDataType x);//头插
void SLPopFront(SL* ps);//头删

//在某个位置进行 插入 删除
void SLInsert(SL* ps, int pos, SLDataType x);//pos是下标
void SLErase(SL* ps, int pos);

//查找 修改
int SLFind(SL* ps, SLDataType x);
void SLModify(SL* ps, int pos, SLDataType x);