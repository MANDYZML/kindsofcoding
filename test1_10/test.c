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

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d ", &m);
//	if (m % 5 == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("\a\a\a\a\a");
//	return 0;
//}
//
//#include<stdio.h>
//int max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int n = max(a, b);
//	printf("%d\n", n);
//	return 0;
//}
// 

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int m = a / b;
//    int n = a % b;
//    printf("%d %d", m, n);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 40;
//    int c = 212;
//    int b = (-8 + 22) * a - 10 + c / 2;
//    printf("%d\n", b);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d\n", &a);
//    if (a >= 140)
//    {
//        printf("Genius\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


//一个全局变量不给初始化的话，默认会被初始化为0
//#include<stdio.h>
//int a;//全局变量
//
//int main()
//{
//	//一个局部变量不给初始化的话，默认是随机值--0xcccccc
//	int b;
//	printf("%d\n", b);//局部变量
//	//printf("%d\n", a);
//	return 0;
//}//打印出来是0


//作业
//输入一个整数 表示1个人智商 如果智商>=140 输出“Genius”
//多组输入！！
//#include<stdio.h>
//
//int main()
//{
//	int iq = 0;
//	//输入
//	while (scanf("%d", &iq) != EOF)
//	{
//	//输出
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int iq = 0;
//	输入
//	while (scanf("%d", &iq) == 1)
//	{
//		输出
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    float s1 = 0;
//    float s2 = 0;
//    float s3 = 0;
//    scanf("%f %f %f", &s1, &s2, &s3);
//    float sum = s1 + s2 + s3;
//    float aver = (s1 + s2 + s3) / 3;
//    printf("%.2lf %.2lf", sum,aver);
//   
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d %d", &a, &b) == 2)
//    {
//        if (a == b)
//            printf("%d = %d\n");
//        else if (a > 0)
//            printf("%d>0\n");
//        else if (a < b)
//            printf("%d<%d\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while ((scanf("%d %d", &a, &b)) != EOF)
//    {
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d", &n);//1234
//    a = n % 10;//4
//    b = (n / 10) % 10;//3
//    c = (n / 100) % 10;//2
//    d = n / 1000;//1
//    printf("%d%d%d%d", a, b, c, d);
//    return 0;
//}


//#define ADD(x,y) ((x)+(y))// 把a b 传给了x y  之后在一加 
////宏名是ADD 参数是x y  （x+y）是宏体
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = ADD(a, b);//int sum = (a+b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include<stdio.h>
//float max3(int x, int y, int z)
//{
//    if (x > y && x > z)
//        return x;
//    else if (y > x && y > z)
//        return y;
//    else 
//        return z;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%.2f\n", max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    float s1 = 0;
//    float s2 = 0;
//    float s3 = 0;
//    float s4 = 0;
//    float s5 = 0;
//    float sum = s1 + s2 + s3 + s4 + s5;
//    scanf("%.1f %.1f %.1f %.1f %.1f", &s1, &s2, &s3, &s4, &s5);
//    for (i = 0; i <= 5; i++)
//    {
//        printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", s1, s2, s3, s4, s5, sum);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    float a = 0;
//    float b = 0;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f ", &a);
//        b += a;
//    }
//    printf("%.2f", b / 5);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        while (a)
//        {
//            printf("*");
//                a--;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 5; i++)
//    {
//        float s1 = 0;
//        float s2 = 0;
//        float s3 = 0;
//        float s4 = 0;
//        float s5 = 0;
//        float sum = s1 + s2 + s3 + s4 + s5;
//        for (i = 0; i < 5; i++)
//        {
//            scanf("%.1f %.1f %.1f %.1f %.1f", &s1, &s2, &s3, &s4, &s5);
//            printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", s1, s2, s3, s4, s5, sum);
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    char a[10] = 0;
//    scanf("%c\n",&a);
//    printf("      %c  \n", a);
//    printf("   %c    %c\n", a);
//    printf("  %c  %c  %c\n", a);
//    printf(" %c %c  %c %c\n", a);
//    printf("%c %c %c %c %c\n", a);
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for(i=1;i<=100;i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//			
//		}
//		i++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d %d %d", &x,&y,&z);
//	if (x < y)
//	{
//		int i = x;
//		x = y;
//		y = i;
//	}
//	if (x < z)
//	{
//		int i = x;
//		x = z;
//		z = i;
//	}
//	if (y < z)
//	{
//		int i = y;
//		y = z;
//		z = i;
//	}
//	printf("%d %d %d\n", x,y,z);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//		
//			printf("%d ", i);
//		}
//	
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 0;//公约数
//	if (a > b)
//	{
//		i = b;
//	}
//	else
//		i = a;
//	while (1)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//			i--;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//			{
//				printf("%d ", i);
//			}
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;//除
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//不是
//			{
//				break;
//			}
//		}
//		//素数
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("一共有：%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//乘法表
//#include<stdio.h>
//int main()
//{
//	int i = 0;//行
//	int j = 0;//列
//	for (i = 1; i <= 9; i++)
//	{
//		for (j=1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",j,i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//所有阶乘加一块
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)//算一次阶乘
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d", sum);
//	return 0;
//}


//猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
////菜单
//void menu()
//{
//	printf("**********************\n");
//	printf("******  1.play  ******\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//}

//猜数字游戏的实现

//时间戳
//time 函数--返回一个时间戳
//void game()
//{
//	int guess = 0;
//	//1.生成一个随机值
//	int ret = rand() % 100 + 1;//1-100之间随机数
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("猜数字:>\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//传 一直发生变化的值
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);//1 0 其他
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//二分查找
//编写代码在一个整形有序数组中查找具体的某个数
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	//找 k
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
////整个数组大小(字节) 4个字节*10个元素 /  第一个元素大小--4    
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;//中间元素下标
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)//arr[mid]  中间元素
//		{
//			//说明要找的元素在中间元素右边
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			//在中间元素左边
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//		printf("找不到了\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	//找 k
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了\n");
//	return 0;
//}
// 1/17  作业
//转换以下ASCII码为对应字符并输出他们。
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int sz = sizeof(arr) / sizeof arr[0];//求元素个数
//    int i = 0;// i是 数组下标 所以 <sz
//    for (i = 0; i < sz; i++)
//    {
//        putchar(arr[i]);
//    }
//
//    return 0;
//}

//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
//电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
//请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）

//#include <stdio.h>
//int main()
//{
//    int n = 0;//n个人
//    int t = 0;//时间
//    scanf("%d", &n);
//    while (n / 12 != 0)// !0  等电梯的人数大于12
//    {
//        t += 4;//时间加4分钟
//        n -= 12;//人少12个
//    }
//    printf("%d\n", t + 2);
//    return 0;
//}


//实现字母的大小写转换。多组输入输出。
//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    //输入大写
//    while (a != EOF)
//    {
//        getchar();
//        if (a >= 65 && a <= 90)
//        {
//            a += 32;
//            printf("%c\n", a);
//        }
//    }
//    return 0;
//}

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。

// 返回 1  是素数
// 返回 0 不是素数
//#include <stdio.h>
//#include <math.h>
//int is_prime(int x)
//{
//	// 平方 试除  2-平方 的数
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;//不是素数
//		}
//	}
//	//是素数
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++) 
//	{
//		//判断 i 是不是素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//实现函数判断year是不是润年。
//1000-2000年

//#include <stdio.h>
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;//是闰年
//	else
//		return 0;//不是
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//判断 i 是不是闰年
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//实现一个函数来交换两个整数的内容。
//#include <stdio.h>
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d,b=%d\n", a, b);
//
//	swap(&a, &b);//交换  传a b 地址
//	printf("交换后：a=%d.b=%d\n", a, b);
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//#include <stdio.h>
//void mult_table(int *pa)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= *pa; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	mult_table(&a);
//	return 0;
//}

//打印一个整数的每一位--递归
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)//两位数以上数字
//	{
//		print(n / 10);//1234 
//					  //n/10 --123 打印
//	}
//	printf("%d ", n % 10);//打印4
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);//print函数可以把num的每一位打印出来
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	// 1 2 3 4
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#include <stdio.h>
//非递归
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//用递归
//#include <stdio.h>
//fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//fac(int n)//非递归
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n); 
//	int ret = fac(n);//求n的阶乘 放到ret
//	printf("%d\n", ret);
//	return 0;
//}
//递归和迭代可以同时进行


//递归和非递归分别实现strlen
//#include <stdio.h>

//非递归-创建临时变量
//int my_strlen(char* str)//传数组首元素地址-a
//{
//	int count = 0;//统计字符个数
//	while (*str != "\0")
//	{
//		count++;
//		str++;
//	}
//	return count;//个数
//
//}
//用递归
//int my_strlen(char* str)
//{
//	if (*str != '\0');
//	{
//		return 1 + my_strlen(str + 1);
//	}
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//		int len = strlen(arr);
//		printf("%d\n", len);
//
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。

//#include <stdio.h>
//int my_strlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//void reverse_string(char* string)
//{
//	int left = 0;
//	int right = my_strlen(string)-1;
//	while (left < right)
//	{
//		char tmp = string[left];
//		string[left] = string[right];
//		string[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char temp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = temp;
//		left++;
//		right--;
//	}
//}
//用递归
//abcdef
//交换a和f,reverse_string逆序("bcde")
//交换b e  逆序c d
//交换c d
//#include <stdio.h>
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;//把第一个字符保存
//	*str=*(str + len - 1);//把最后一个字符放到第一个
//	*(str + len - 1) = '\0';//交换完后给最后一个字符赋上\0
//	if(strlen(str + 1) >= 2)//向后看到的字符>=2
//	reverse_string(str + 1);//逆序中间的
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//计算一个数的每位之和（递归实现）
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//#include <stdio.h>
//DigitSum(int n)
//{
//	int ret = 0;
//	if (n > 9)
//	{
//		ret = DigitSum(n / 10);
//	}
//	return (n % 10) + ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	DigitSum(n);//求数的和
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。
//#include <stdio.h>
//int squart(int x, int y)
//{
//	int i = 1;
//	if (y > 1)
//	{
//		i = squart(x, y - 1);
//	}
//	return x * i;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	squart(n, k);
//	printf("%d\n", squart(n, k));
//	return 0;
//}

//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//#include <stdio.h>
//递归
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) +fib(n - 2);
//}
//非递归
//int fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	printf("%d\n", fib2(n));
//}


//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//#include <stdio.h>
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;//找到下标为i的元素，赋值成0
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;//左下标
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right]= tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	//逆序
//	reverse(arr,sz);
//	print(arr, sz);
//	//初始化
//	//init(arr,sz);
//	//print(arr, sz);
//	return 0;
//}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//数组名是地址
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];//一个一个交换
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


//求两个数二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int a = m ^ n;
//	int count = 0;
//	int i = 0;
//	for(i = 0; i < 32; i++)
//	{
//		if ((a & 1)==1)
//		{
//			count++;
//		}
//		a=a >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include <stdio.h>
//void printbit(int num)
//{
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)//打印16位
//	{
//		printf("%d ", (num >> i) & 1);//奇数
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);//偶数
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
	//int odd = 0;//奇数
	//int even = 0;//偶数
	//int i = 0;
	/*for (i = 0; i < 32; i++)
	{
		if ((num & 1) == 1)
		{
			odd++;
		}
		else
			even++;
		num = num >> 1;
	}
	printf("奇数位：%d\n偶数位：%d\n", odd, even);*/
//	printbit(num);
//	return 0;
//}


//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m & 1) == 1)
//		{
//			count++;
//		}
//		m = m >> 1;
//	}
//	printf("%d个1\n", count);
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)//直到num都是0000000   就会跳出循环
//	{
//		num = num & (num - 1);//每次-1 都会去掉num 最右边的1 然后就会有越来越多的0
//		count++;//累计按位与 之后 1的个数
//	}
//	printf("%d\n", count);
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("交换前：%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//void print(int* p,int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	print(p,len);
//	return 0;
//}


//写一个函数，可以逆序一个字符串的内容。
//void reverse(char* str, int len)
//{
//	char* left = str;
//	char *right = str + (len - 1);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = strlen(arr);//包括 \0
//	reverse(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}


//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)//i=2 i+1=22*10+22
//	{
//		tmp = tmp * 10 + a;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//2/19 结构体
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{
//	int money = 20;
//	int drink = 0;//喝了的瓶
//	int empty = 0;//空瓶
//	drink = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		drink += empty / 2;//每次喝的+喝了的/2  换来的新的
//		empty = (empty / 2) + (empty % 2);// 5瓶/2 换两瓶 1空瓶
//	}
//	printf("%d\n", drink);
//	return 0;
//}


//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//
//
//	return 0;
//}


//模拟实现库函数strlen
#include<stdio.h>
#include<assert.h>
//int my_strlen(const char*str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//模拟实现库函数strcpy
//char*my_strcpy(char*dest,const char*src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[] = "xxxxxxxxxxxxxxxxxxx";
//	char* p = NULL;
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}

//考试题
//#include<stdio.h>
//int cnt = 0;
//int fib(int n)//fib(8) 也就是n=8
//{
//	cnt++;//就是求 n进来一共求了多少次
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);//n=8 进到这 递归
//}

//                      8 --1
//                   7     6  n-1  n-2 --2
//               6        5          5        4  --4
//           5     4    4   3     4     3   3    2  --8
//        4    3   3   2   3    2   2   1  3   2   2  1  2 1 1 0  --16
//      3  2  2 1  2  1 1 0 2 1 1 0 1 0   2  1 1 0  1 0  1 0      --22
//    2 1 1 0 1 0 1 0      1  0         1 0                      -- 12
//   1 0                                                         -- 2
//1+2+4+8+16+22+12+2=67
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//
//}

//以下程序的输出结果
//#include<stdio.h>
//int x = 1;
//do{
//	printf("%2d\n", x++);//x=1 打印1 之后++ 变成2
//} while (x--);//x=2 判断 之后x-- 是 1为真 又上去 打印1 ++变成2
//也就是一直 判断的时候为2 打印的时候是1
//所以结果是 陷入死循环

/*int i = 1;
int j;
j = i++;*///后置++ 所以i先把x=1赋给j j=1 之后i自增=2
//i是2，j是1


//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;//局部优先  这里的a是2 +=之后 a=3
//}//但是a=3 出来以后 就销毁了 
//int main()
//{
//	test();
//	printf("%d\n", a);//所以这里的打印是打印全局的a
//	return 0;
//}


//编程题
//最小公倍数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//   //找出输入的两个数的较大值
//	int m = (a > b ? a : b);//较大值放到m
//	//假设M是最小公倍数，去试除 较大数
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)//说明m是最小公倍数
//		{
//			break;
//		}
//		m++;//较大值一直++  直到能同时除以两个数
//	}
//	printf("%d\n", m);
//	return 0;
//}

//优化
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b != 0)//假设 输入 5 7 每次5*1   5*2进来  
//		                //直到5*7 % 7 =0 说明 a*i这个数既能整除5 也能整除7  这个数就是最小公倍数
//	{
//		i++;
//	}
//	printf("%d\n", a*i);
//	return 0;
//}

//倒置字符串
//i like beijing.
//beijing. like i
//#include<stdio.h>
//#include<assert.h>
//reverse(char *l,char*r)
//{
//	assert(l && r);
//	while (l < r)
//	{
//		char tmp = *l;
//		*l = *r;
//		*r = tmp;
//		l++;
//		r--;
//	}
//}//1.逆序整个字符串
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%[^\n]", arr);//这样也行
//	//输入
//	gets(arr);//不能用scanf 因为它不能读空格后头的
//	int len = strlen(arr);
//	//逆序
//	//1.逆序整个字符串
//	char* left = arr;
//	char* right = arr + len - 1;
//	reverse(left,right);//逆序函数
//
//	//2.逆序每个单词
//	char* cur = arr;//数组名首元素地址 赋给cur
//	char* start = arr;
//	
//	while (*cur !='\0')
//	{
//		//这是一个单词的逆序
//		while (*cur != ' ' && *cur!='\0')//不等于空格就让他往后走
//			//这里的判断方式 是当逆序完全部字符串后 停下来
//		{
//			cur++;//cur是字符串中的一个单词 +空格
//		}
//		reverse(start, cur - 1);//start 是逆序单词的起始地址
//		//cur-1 是要逆序的单词的最后一个的地址
//	  //当要逆序第二个单词的时候
//		start = cur + 1;//cur是到空格 +1 是到空格的下一个单词的起始位置 
//		if(*cur!='\0')//如果cur已经等于\0 再++ 就是把\0跳过去了 
//			//就有问题了 可能会导致代码不会停下来
//		cur++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = {0};
//	
//	while (1)
//	{
//		gets(arr);
//		int len = strlen(arr);
//		if (len != 0)
//		{
//			printf("请输入姓名:hello %s !\n", arr);
//		}
//		else 
//		{
//			printf("请输入姓名:输入错误\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	 
//
//
//
//	return 0;
//}

//#include <stdio.h>
//int i;//全局变量如果没有初始化，默认会被初始化为0
//int main()
//{
//	i--;//-1
//	if (i > sizeof(i))//sizeof 算出来是4
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}//结果是>
//sizeof 是一个操作符，这个操作符返回的结果是size_t
//sizeof的返回类型是size_t--是无符号整型
//当表达式出现 有符号和无符号进行比较，要发生--算术转换
//int会被转换成 无符号
//-1的补码 11111111111111111111111111111111
//把-1 进行算术转换成无符号 就会被认为这是无符号的二进制序列
//那么就是非常大的正数 会大于4
//所以输出 >

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//print(int* p, int sz)
//{
//		int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			printf("%d ", *(p + i));
//			
//		}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	
//	return 0;
//}

//#include<stdio.h>
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	while (left< right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char str[10000] = { 0 };
//	gets(str);
//	int len = strlen(str);
//	reverse(str, str + len - 1);
//	printf("%s\n", str);
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp= tmp * 10 + a;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//	//判断i是否是自幂数
//		//1.计算i的位数-n位
//		int n = 1;//数字最少一位数 假设输入1234  /10 之后=123  12  但是当i=1时 1/10 商0就进不去了
//		//所以少一位  所以n从1开始
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算每一位的n次方之和
//		tmp = i;//1234
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);//拿下数的每一位 算n次方
//		//算出来每一位的平方 加起来放到 sum
//			tmp /= 10;//算完1234 之后 /10 算123
//		}
//	//比较 i是否是自幂数
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印菱形
//int main()
//{
//	int n = 0;//输入上半部分的菱形
//	scanf("%d", &n);
//	//打印上半部分菱形--n行
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//	//打印一行
//	//打印空格--一次打印一个空格
//		int j = 0;
//		for (j = 0;j < n - 1 - i;j++)
//		{
//			printf(" ");
//		
//		}
//	//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*"); 
//		}
//		printf("\n");
//	}
//
//	//打印下半部分  n-1行  
//	//因为只有奇数的行数 才能打印出来菱形
//	for (i = 0; i < n-1; i++)
//	{
//		//打印一行
//		//打印空格--一次打印一个空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//
//		}
//		//打印*
//		for (j = 0; j <(n-1-i)*2-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a=(int)pow(2, n);
//	printf("%d\n", a);
//	
//	return 0;
//}
//#include<stdio.h>
//void reverse(char* left, char* right)
//{
//   char tmp = 0;
//    while (left < right)
//    {
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//		left++;
//		right--;
//    }
//   
//}
//int main()
//{
//    char str[10000] = { 0 };
//    gets(str);
//    int len = strlen(str);
//    reverse(str, str + len - 1);
//	printf("%s\n",str);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%d", ch);
//}

//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	a = getchar();
//	printf("%d\n", a);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	int i = 0;
//	for (i = 0; i < 4; i++)//行
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)//列
//		{
//			printf("%c", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	//打印上半部分菱形
//	//打印空格
//	int i = 0;
//	int n = 5;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1-i; j++)//总行数-当前行数
//		{
//			printf(" ");
//		}
//		//打印符号
//		for (j = 0; j = 2 * i + 1; j++)//2*当前行数-1
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)//空格数=当前行数
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (n-1 - i)*2-1; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//喝汽水问题
//1瓶汽水1元，2个空瓶可以换一瓶汽水，20元 可以换多少汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);//20
//	int total = money;//用钱买的瓶
//	int empty = money;//用钱买完喝了的空瓶
//
//	//置换
//	while (empty >= 2)//只要2个空瓶就可以换一瓶汽水
//	{
//		total += empty / 2;//总共喝了瓶数 + =空瓶/2（=可以换几瓶新的）
//		empty = empty / 2 + empty % 2;//空瓶=换回来的+剩余的1个没换的
//		                   //比如剩5个空瓶 /2  换回两个  剩下一个空瓶
//	}
//	printf("%d\n", total);//一共换了多少瓶
//	return 0;
//}

//另一种写法
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);//20
//	int total = 0;
//	if (money <= 0)
//		total = 0;
//	else
//	 total = money*2-1;//相当于1个空瓶0.5 20/0.5=40个空瓶 -1 可以喝39瓶
//	printf("%d\n", total);//一共换了多少瓶
//	return 0;
//}


//调整奇数偶数顺序
//调整数组使奇数全部位于偶数前面
//void move(int arr[],int sz)//arr里面是首元素地址
//{
//	int left = 0;//下标
//	int right = sz - 1;
//
//	while (left < right)//进行多次交换
//	{
//		//从左到右找偶数
//		while ((left < right) && arr[left] % 2 == 1)//%2余1是奇数
//			//如果不加上(left < right) 如果数组全是奇数 就要一直进来 left++
//			//可能会造成往右 越界访问
//		{
//			left++;
//		}
//		//从右往左找奇数
//		while ((left < right) && arr[right] % 2 == 0)//如果是偶数 就进来-- 找下一个
//			//如果数组全是偶数 从右往左都会进来一直-- 
//			//可能会造成 往左越界访问
//		{
//			right--;
//		}
//		//奇偶交换
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);//arr传的是首元素地址
//	print(arr, sz);
//	return 0;
//}

//杨辉三角
//           1
//          1 1
//         1 2 1
//        1 3 3 1
//       1 4 6 4 1
//   .....

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//行
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)//列
//		{
//			if (j == 0)
//				arr[i][j] = 1;//所有第0列 不同的行赋值成1
//			if (i == j)
//				arr[i][j] = 1;//对角线 第二行第二个元素 第三行第三个元素 
//			                  //。。。 赋值成1
//			//计算三角中的数字
//			if (i >= 2 && j >= 1)//行从第二行(0 1 2) 并且列从第1列(0 1 )才开始计算
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//要计算的元素的上一行两个元素相加
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)//行
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)//列 第几行就打印几个数
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//		 
//	}
//
//	return 0;
//}

//猜凶手 
//A 说 不是我 ---  killer ！= 'a' 如果这个表达式结果是1就是真
//B说 是C       --- killer == 'c'  如果表达式是0就为假
//C说 是D         --- killer=='d'
//D说 C在胡说   --- killer != 'd'
//已知3人说了真话，1人说了假话--也就是有三个表达式是1 一个表达式是0
//int main()
//{
//	int killer = 0;//凶手
//	//凶手 a b c d
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//	//killer++ 就是ASCII值+1 a+1 变b
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三； b=2 a=3
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)//a选手肯定是1-5名中间
//	{
//		for (b = 1; b <= 5; b++)//b也是
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							//1*2*3*4*5=120
//							if(a*b*c*d*e == 120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				} 
//			}
//		}
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
    int y = 0;
    int m = 0;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    while (scanf("%d %d", &y, &m) == 2);
    {
        int day = days[m - 1];
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            if (m == 2)
                day += 1;
        }

        printf("%d\n", day);
    }
    return 0;
}