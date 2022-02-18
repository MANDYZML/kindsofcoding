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
//int is_leap_year(int year) {
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int month_day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int year, month, day;
//	while (~scanf("%d %d %d", &year, &month, &day)) {
//		int total_day = day;//先把当前月份天数加上
//		if (is_leap_year(year) && month > 2) { //若闰年，且月份大于2月，则在平年基础上+1
//			total_day += 1;
//		}
//		for (int i = month - 1; i > 0; i--) {
//			total_day += month_day[i];//向前累加每月的天数即可
//		}
//		printf("%d\n", total_day);
//	}
//	return 0;
//}

//day 02

//#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}
//结果是 12个
//因为 \\是一个 表示'\'  然后 123456 是6个
// \123是'{'   算一个
// \t 是  制表符 算一个

//如下函数的 f(1) 的值为（ ）
//int f(int n)
//{
//	static int i = 1;//static 使得 i 生命周期变长了 不会一直是1  i++ 之后 就变 2 3 4.。。
//	if (n >= 5)
//		return n;///返回 7
//	n = n + i;//第一次 1+1=2  第二次2+2=4    第三次 4+3=7  
//	i++;//之后 i=1+1=2   2+1=3
//	return f(n);
//}
//结果是 7

//下面3段程序代码的效果一样吗（ ）
//int b;
//(1)const int* a = &b;
//(2)int const* a = &b;
//(3)int* const a = &b;
//const在*的左边，则指针指向的变量的值不可直接通过指针改变(可以通过其他途径改变);
//;在*的右边，则指针的指向不可变。
//为"左定值，右定向"， 所以 1 2 是一样的


//1、已知函数的原型是： int fun(char b[10], int *a); ，设定义： char c[10];int d; ，正确的调用语句是（）
//A : fun(c, &d); B: fun(c, d); C: fun(&c, &d); D: fun(&c, d);
//答案是 A
//因为  参数a是指针  要接收地址  所以要取地址    所以首先排除B D
//参数b可以接收的是char*，而&c的类型是char(*)[10]，C错误


//#include <stdio.h>
//int i;
//void prt()
//{
//	for (i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//}
//int main()
//{
//	for (i = 5; i <= 8; i++)
//		prt();
//	return 0;
//}
//A: *** B: *** *** *** *** C: *** *** D: * * *
//选 A 
//首先在主函数中 i=5  之后进入 prt 进入for循环 循环 i=5 6 7三次 打印三个*
//之后跳出 回到主函数 进行第二次调用 再次进入prt  i<8 为假  执行一次\t i++  i=9
// 回到主函数 i<=8 为假  循环结束

//int main()
//{
//	int a = 3;
//	printf("%d\n", (a += a -= a * a));// a+=a-=a*a等价于a=a+(a=a-a*a) 所以先算括号里 3-3*3=-6  然后-6+（-6）=-12
//	return 0;
//}
//A: -6 B : 12 C : 0 D : -12
//结果是 D 所以是-12 

