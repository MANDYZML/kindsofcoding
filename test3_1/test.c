#define _CRT_SECURE_NO_WARNINGS 1

//寒假作业
//day 01
//输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
//1. 用返回一个整数列表来代替打印
//2. n 为正整数，0 < n <= 5

//int* printNumbers(int n, int* returnSize) {
//    // write code here
//    *returnSize = pow(10, n) - 1;//算最大的数字
//    int* arr = (int*)malloc(sizeof(int) * (*returnSize));//malloc   分配内存块
//    int i;
//    for (i = 0; i < *returnSize; i++)
//    {
//        arr[i] = i + 1;//数组下标从0开始，数值从1 所以+1
//    }
//    return arr;
//}


//2、根据输入的日期，计算是这一年的第几天。输入保证年份为4位数且日期合法。
//输入描述：输入一行，每行空格分割，分别是年，月，日。
//输出描述：输出是这一年的第几天
#include <stdio.h>
int is_leap_year(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return 1;
	}
	return 0;
}

int main()
{
	int month_day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day;
	while (~scanf("%d %d %d", &year, &month, &day)) {
		int total_day = day;//先把当前月份天数加上
		if (is_leap_year(year) && month > 2) { //若闰年，且月份大于2月，则在平年基础上+1
			total_day += 1;
		}
		for (int i = month - 1; i > 0; i--) {
			total_day += month_day[i];//向前累加每月的天数即可
		}
		printf("%d\n", total_day);
	}
	return 0;
}
