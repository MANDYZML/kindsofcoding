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
		gap = gap / 3 + 1;//+1能保证最后一次gap是1

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
		//打印数组
		printf("gap:%d->", gap);
		PrintArray(a, n);
	}
	
}

//选择排序
void SelectSort(int* a, int n)
{
	assert(a);
	int begin = 0, end = n - 1;//end是最后一个数下标
	while (begin < end)
	{
		int mini = begin, maxi = begin;//最小的数和最大的数的下标
		for (int i = begin + 1; i <= end; ++i)
		{
			if (a[i] < a[mini])//说明 a[i]更小
			{
				mini = i;//把mini的位置换成i位置的数
			}
			if (a[i] > a[maxi])//说明 a[i]更大
			{
				maxi = i;//把maxi的位置换成i位置的数
			}
		}
		Swap(&a[begin], &a[mini]);//把最小的值换到左边

		//如果begin和maxi重叠,要修正一下maxi的位置
		if (begin == maxi)
		{
			maxi = mini;
		}

		Swap(&a[end], &a[maxi]);//最大的值换到右边
		++begin;
		--end;
	}
	
}

//冒泡排序
void BubbleSort(int* a, int n)
{
	assert(a);
	for (int j = 0; j < n; ++j)
	{
		int exchange = 0;
		for (int i = 1; i < n-j; ++i)//第一次冒泡到n 之后n-1 之后n-2 n-3

		{
			if (a[i - 1] > a[i])//前一个位置大于后一个
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;//发生了交换就是1
			}
		}
		if (exchange == 0)//没有发生交换
		{
			break;
		}
	}
	
}

//快速排序
void QuickSort(int* a, int begin,int end)
{
	//当区间不存在，或者只有一个值则不需要在处理
	if (begin >= end)
	{
		return;
	}

	int left = begin, right = end;
	int keyi = left;//最左边作为key
	while (left<right)
	{
		//右边先走，找小
		while (left < right && a[right] >= a[keyi])//这个值不动
		{
			--right;//接着找前一个
		}
		//左边再走，找大
		while (left < right && a[left] <= a[keyi])//这个值不动
		{
			++left;//接着找下一个
		}

		Swap(&a[left], &a[right]);//交换左右的值
	}
	Swap(&a[keyi], &a[left]);
	keyi = left;

	QuickSort(a, begin, keyi - 1);//递归左区间
	QuickSort(a, keyi + 1, end);//递归右区间
}