#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//���� ����
//	int m = 0;
//	scanf("%d", &m);
//	//�жϲ����
//	if (m % 5 == 0)  //˵����5������
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


//һ��ȫ�ֱ���������ʼ���Ļ���Ĭ�ϻᱻ��ʼ��Ϊ0
//#include<stdio.h>
//int a;//ȫ�ֱ���
//
//int main()
//{
//	//һ���ֲ�����������ʼ���Ļ���Ĭ�������ֵ--0xcccccc
//	int b;
//	printf("%d\n", b);//�ֲ�����
//	//printf("%d\n", a);
//	return 0;
//}//��ӡ������0


//��ҵ
//����һ������ ��ʾ1�������� �������>=140 �����Genius��
//�������룡��
//#include<stdio.h>
//
//int main()
//{
//	int iq = 0;
//	//����
//	while (scanf("%d", &iq) != EOF)
//	{
//	//���
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int iq = 0;
//	����
//	while (scanf("%d", &iq) == 1)
//	{
//		���
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


//#define ADD(x,y) ((x)+(y))// ��a b ������x y  ֮����һ�� 
////������ADD ������x y  ��x+y���Ǻ���
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
//	int i = 0;//��Լ��
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
//		int j = 0;//��
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//����
//			{
//				break;
//			}
//		}
//		//����
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
//	printf("һ���У�%d\n", count);
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


//�˷���
//#include<stdio.h>
//int main()
//{
//	int i = 0;//��
//	int j = 0;//��
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


//���н׳˼�һ��
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
//		for (i = 1; i <= n; i++)//��һ�ν׳�
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d", sum);
//	return 0;
//}


//��������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
////�˵�
//void menu()
//{
//	printf("**********************\n");
//	printf("******  1.play  ******\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//}

//��������Ϸ��ʵ��

//ʱ���
//time ����--����һ��ʱ���
//void game()
//{
//	int guess = 0;
//	//1.����һ�����ֵ
//	int ret = rand() % 100 + 1;//1-100֮�������
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("������:>\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//�� һֱ�����仯��ֵ
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);//1 0 ����
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//���ֲ���
//��д������һ���������������в��Ҿ����ĳ����
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	//�� k
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
////���������С(�ֽ�) 4���ֽ�*10��Ԫ�� /  ��һ��Ԫ�ش�С--4    
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;//�м�Ԫ���±�
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)//arr[mid]  �м�Ԫ��
//		{
//			//˵��Ҫ�ҵ�Ԫ�����м�Ԫ���ұ�
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			//���м�Ԫ�����
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//		printf("�Ҳ�����\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	//�� k
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
//			printf("�ҵ��ˣ��±���: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�����\n");
//	return 0;
//}
// 1/17  ��ҵ
//ת������ASCII��Ϊ��Ӧ�ַ���������ǡ�
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int sz = sizeof(arr) / sizeof arr[0];//��Ԫ�ظ���
//    int i = 0;// i�� �����±� ���� <sz
//    for (i = 0; i < sz; i++)
//    {
//        putchar(arr[i]);
//    }
//
//    return 0;
//}

//С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�
//����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
//�����С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩

//#include <stdio.h>
//int main()
//{
//    int n = 0;//n����
//    int t = 0;//ʱ��
//    scanf("%d", &n);
//    while (n / 12 != 0)// !0  �ȵ��ݵ���������12
//    {
//        t += 4;//ʱ���4����
//        n -= 12;//����12��
//    }
//    printf("%d\n", t + 2);
//    return 0;
//}


//ʵ����ĸ�Ĵ�Сдת�����������������
//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    //�����д
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

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������

// ���� 1  ������
// ���� 0 ��������
//#include <stdio.h>
//#include <math.h>
//int is_prime(int x)
//{
//	// ƽ�� �Գ�  2-ƽ�� ����
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;//��������
//		}
//	}
//	//������
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++) 
//	{
//		//�ж� i �ǲ�������
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//ʵ�ֺ����ж�year�ǲ������ꡣ
//1000-2000��

//#include <stdio.h>
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;//������
//	else
//		return 0;//����
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//�ж� i �ǲ�������
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//ʵ��һ�������������������������ݡ�
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
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//
//	swap(&a, &b);//����  ��a b ��ַ
//	printf("������a=%d.b=%d\n", a, b);
//	return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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

//��ӡһ��������ÿһλ--�ݹ�
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)//��λ����������
//	{
//		print(n / 10);//1234 
//					  //n/10 --123 ��ӡ
//	}
//	printf("%d ", n % 10);//��ӡ4
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);//print�������԰�num��ÿһλ��ӡ����
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	// 1 2 3 4
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//#include <stdio.h>
//�ǵݹ�
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

//�õݹ�
//#include <stdio.h>
//fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//fac(int n)//�ǵݹ�
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
//	int ret = fac(n);//��n�Ľ׳� �ŵ�ret
//	printf("%d\n", ret);
//	return 0;
//}
//�ݹ�͵�������ͬʱ����


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include <stdio.h>

//�ǵݹ�-������ʱ����
//int my_strlen(char* str)//��������Ԫ�ص�ַ-a
//{
//	int count = 0;//ͳ���ַ�����
//	while (*str != "\0")
//	{
//		count++;
//		str++;
//	}
//	return count;//����
//
//}
//�õݹ�
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


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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
//�õݹ�
//abcdef
//����a��f,reverse_string����("bcde")
//����b e  ����c d
//����c d
//#include <stdio.h>
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;//�ѵ�һ���ַ�����
//	*str=*(str + len - 1);//�����һ���ַ��ŵ���һ��
//	*(str + len - 1) = '\0';//�����������һ���ַ�����\0
//	if(strlen(str + 1) >= 2)//��󿴵����ַ�>=2
//	reverse_string(str + 1);//�����м��
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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
//	DigitSum(n);//�����ĺ�
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//#include <stdio.h>
//�ݹ�
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) +fib(n - 2);
//}
//�ǵݹ�
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


//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//#include <stdio.h>
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;//�ҵ��±�Ϊi��Ԫ�أ���ֵ��0
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
//	int left = 0;//���±�
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
//	//����
//	reverse(arr,sz);
//	print(arr, sz);
//	//��ʼ��
//	//init(arr,sz);
//	//print(arr, sz);
//	return 0;
//}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//�������ǵ�ַ
#include <stdio.h>
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };

	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];//һ��һ������
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;
}