#define _CRT_SECURE_NO_WARNINGS 1

//引用方法的意思
#include <stdio.h>

//int main()
//{
//	printf("mandyz\n"); 
//
//	return 0;
//}


////'a' --字符a
////创建空间
//
//int main()
//{
//	//char 字符类型
//	char ch = 'a';
//	//整型(描述整数  下面是年龄)
//	int age = 20;
//	//短整型
//	short num = 10
//	// long
//	// long long
//	// folat 单精度浮点型 (带有小数点)
//	float weight = 55.5
//	//双精度浮点型
//	double d = 0.0;
//	return 0;
//		 
//}



//int main()
//{
//	//printf("呵呵\n");
//	//printf("比特\n");
//	//printf("%d\n", 100);    //打印一个整数--%d  这里是打印100
//	//sizeof--关键字 =c 语言的 操作符--计算类型或者变量所占空间大小  意思是。。。的大小（看他后面那个单词）
//	//打印char类型大小
//	printf("%d\n", sizeof(char)); 
//	printf("%d\n", sizeof(short)); 
//	printf("%d\n", sizeof(int)); 
//	printf("%d\n", sizeof(long)); 
//	printf("%d\n", sizeof(long long)); 
//	printf("%d\n", sizeof(float)); 
//	printf("%d\n", sizeof(double)); 
//	//这里快捷键是 ctrl＋d
//
//	return 0;
//}


//int main()
//{
//	//创建的一个变量
//	//int 是类型  age是变量的名字 ＝（赋值）0；// 推荐
//	//类型 变量的名字； // 语法允许  不推荐
//	int age = 20;
//	double weight = 75.3; //这是变量的创建 意味着数据可改
//
//		age = age+1;
//		weight = weight - 10;
//		printf("%d\n", age);       //%d 是  整型
//		printf("%lf\n", weight);   //%f 是  float   // %lf 是 double
//		return 0;
//}

// 在大括号外  所以是全局变量
//int a = 100;
//
//int main()
//{
//	//在大括号内部的变量 都是 局部变量
//	//所以 这里的a 是 局部变量
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//		printf("%d\n", a); //这里的a 指的是 打印的括号内a的
//	return 0;
//
//}

 //写个代码  求两个整数的和
 //scanf函数是 输入函数
int main()
{
	int a = 0; //初始int ＝0 是赋值 给予一个初始值// 0 也相当于没有
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);  //a和b 的内容 get
	sum = a + b;
	printf("sum =%d\n", sum);  //%d 表示 打印整数
	return 0;
}