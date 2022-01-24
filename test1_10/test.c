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
#include <stdio.h>
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };

	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];//一个一个交换
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;
}