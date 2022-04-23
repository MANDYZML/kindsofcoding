#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//头文件中的实现

//打印顺序表的内容
void SLPrint(SL* ps)
{
	//暴力检查 ps指针不为空
	//assert(ps != NULL);
	assert(ps);

	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);//从第一个位置的开始打印
	}
	printf("\n");
}

//顺序表 初始化
void SLInit(SL* ps)//形参   test.c sl的地址传给了ps
{
	assert(ps);

	ps->a = NULL;//访问a  size  也就是访问sl变量
	ps->size = ps->capacity = 0 ;

}

void SLDestory(SL* ps)
{
	assert(ps);

	if (ps->a)//不等于空 进来
	{
		free(ps->a);
		ps -> a = NULL;
		ps->capacity = ps->size = 0;
	}
}

//检查容量
void SLCheckcapacity(SL* ps)
{
	//检查容量空间--防止越界,满了就扩容
	if (ps->size == ps->capacity)
		//有效数据==容量大小，如果有效数据在+1就越界了
		//需要扩容了
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//每次扩容 2倍
		//如果size capacity 是0 那就提前开空间给4个
		//如果不是0 就给2倍
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		//扩容原来的数组a  newCapacity是变量个数 从4个扩容到8个  但是参数要求传单位 字节
		//如果第一次进来 原来的数组数组是空，就和malloc一样 内存找个空间重新开
		//如果不是空  就扩到newCapacity 新的大小

		if (tmp == NULL)//开辟失败 -- 没有足够内存
		{
			printf("realloc fail\n");
			exit(-1);//结束掉程序
		}

		//扩容  开辟了新空间
		ps->a = tmp;//扩容的数组新空间
		ps->capacity = newCapacity;//容量新空间
	}

}



//尾插-在有效数字后一个插入
void SLPushBack(SL* ps, SLDataType x)
{
	//assert(ps);
	//SLCheckcapacity(ps);

	//ps->a[ps->size] = x;//size是数据个数
	////这里把size当作下一个数 也就是即将插入的数的下标来看
	////所以 ps->size 也就是指向了 下标为size的数 也就是 最后的有效数据的下一个
	//ps->size++;//有效个数++

	SLInsert(ps, ps->size, x);
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	//assert(ps);

	//SLCheckcapacity(ps);
	////挪动数据
	//int end = ps->size - 1;//size是有效数据的下一个位置
	//while (end >= 0)//有效数字最后一位是end 当>=0 就要往后挪
	//{
	//	ps->a[end + 1] = ps->a[end];//往后挪 end 挪到end+1的位置
	//	--end;
	//}

	////放数据
	//ps->a[0] = x;
	//ps->size++;//数据个数++

	SLInsert(ps, 0, x);
}

//尾删
void SLPopBack(SL* ps)
{
	//assert(ps);

	////温柔检查
	//if (ps->size == 0)//没数据了
	//{
	//	printf("SeqList is empty\n"); 
	//	return;
	//}
	////暴力做法
	//assert(ps->size > 0);//为真就继续，为假就报错

	//ps->size--;//size是有效个数 size-- 就是从后减去一个有效个数

	SLErase(ps, ps->size - 1);

}

//头删 0 1 2 3 4  从1开始 一个一个往前挪  总是把第一个数覆盖
void SLPopFront(SL* ps)
{
	//assert(ps);

	////暴力检查 size--  有没有越界
	//assert(ps->size > 0);

	//int begin = 1;
	//while (begin < ps->size)//size是最后一个有效数的下一个
	//{
	//	ps->a[begin - 1] = ps->a[begin];
	//	++begin;
	//}
	//ps->size--;

	SLErase(ps, 0);
}

//在某个位置进行插入
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);//要在这个范围内插入
	//pos 是要插入数据的那个点坐标
	//     pos   end
	//0  1  2  3  4
	//0  1     2  3  4
	
	SLCheckcapacity(ps);

	//挪动数据
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		//第一次的时候 pos-end 的三个数 2 3 4 往后挪
		//这时候 end就是3 > pos 接着挪
		//第二次 end是2 pos和end重叠了 就终止了 不不挪了
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

//在某个位置进行删除
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
//查找
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)//找到了
			return i;//返回下标

	}
	//没有找到
	return -1;//因为下标不可能是-1
}

//修改
void SLModify(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	ps->a[pos] = x;

}