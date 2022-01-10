#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//输入 数据
//	int m = 0;
//	scanf("%d", &m);
//	//判断并输出
//	if (m % 5 == 0)  //说明被5整除了
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int m = 0;
	scanf("%d ", &m);
	if (m % 5 == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}