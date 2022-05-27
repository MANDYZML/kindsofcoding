#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//插入排序
void InsertSort(int* a, int n)
{
	//[0-end]有序，把end+1位置的值插入，保持有序
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;//n-1是最后一个数的下标
		int tmp = a[end + 1];//后一个插入到前面去
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;//end 往前走
			}
			else  //tmp>end
			{
				break;
			}
		}
		//跳出以后 或者 tmp比所有值都小 一直挪 end到了 -1
		a[end + 1] = tmp;//tmp直接放到end指向的值的后面
	}
	
}

//希尔排序
//void ShelltSort(int* a, int n)
//{
//	int gap = 3;//间距为gap的是一组数据
//
//	for (int j = 0; j < gap; ++j) //算gap组
//	{
//		//算一组
//		for (int i = j; i < n - gap; i += gap)
//		{
//			int end;
//			int tmp = a[end + gap];//同组数据 后一个位置的值往前插入
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];//原本end位置的值挪到end+gap
//					end -= gap;//end往前指向 同组数据 原本end的前一个值
//				}
//				else // tmp > a[end]
//				{
//					break;
//				}
//			}
//			//要么 end一直挪到 -1 要么 tmp> a[end]
//			a[end + gap] = tmp; // 把tmp的值 放到 end+gap中
//		}
//	}
//}

//简化  gap组数据交替插入排序 
void ShellSort(int* a, int n)
{
	int gap = n;//间距为gap的是一组数据

	while (gap > 1)//预排序 最后=1是直接插入排序
	{
		gap = gap / 3 + 1;
		//算一组
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];//同组数据 后一个位置的值往前插入
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];//原本end位置的值挪到end+gap
					end -= gap;//end往前指向 同组数据 原本end的前一个值
				}
				else // tmp > a[end]
				{
					break;
				}
			}
			//要么 end一直挪到 -1 要么 tmp> a[end]
			a[end + gap] = tmp; // 把tmp的值 放到 end+gap中
		}
	}
	
}