# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作用域和生命周期
//哪里可以使用 那里就是作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程
/*int g_val = 2021; */ //这是全局变量


//int main()
//{
//	printf("1.%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2.%d\n", g_val);
//
//		int a = 10;
//		printf("a = %d\n", a);  //代码可以运行 所以这就是变量a的作用域
//	}
//	    printf("3.%d\n", g_val);
//	return 0;
//}
// 执行性的代码 必须放到函数大括号里面

//声明一下变量
//extern int g_val;
//
//int main()
//{
//
//	printf("%d\n", g_val);
//
//	return 0;
//}

//生命周期
//变量的生命周期 就是 变量的创建和销毁的时间段
//局部变量的生命周期：进入局部范围（进去大括号） 生命周期开始，出局部范围（出大括号） 生命周期结束
//全局变量的生命周期：一个程序的生命周期


//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//
//	}
//
//	return 0;
//}

//常量

/*#define MAX 100000*/ //（定义）写大括号里外都可以
//int main()
//{
//	//1.字面常量
//	//3.14;//这就是个常量  常数  不会变
//	//10;
//	//'a'; //这都是常量
//	//"abcdef";// 这也是
//
//	//2.const 修饰的常变量（本质上还是个变量 只不过具有了常属性）
//	//int num = 10; //这是变量  因为 sum 可变 num 是常变量--具有常属性（不能被改变的属性）
//	//num = 20;
//	//printf("num = %d\n", num);  //把num 打印  20
//	//int arr[10] = {0};  //创建数组 arr是数组名字 可以随便取 //10个元素
//
//	//const int n = 10;//n 本质上是变量 被const修饰了  所以是常变量（不能变了）
//	//int arr2[n] = { 0 };//n是变量 这里运行不成功  n需要是常量
//
//	//3.#difine 定义的标识符常量
//	//int n = MAX;//max 是个常量   MAX 就是 #difine 定义的标识符常量
//	//printf("n = %d\n", n);


	//性别
	/*enum Sex */  //enum 枚举关键字
//	{
//		//这种枚举类型的变量的未来可能取值
//		//这三个值就是枚举常量
//		MALE = 3, //这是赋初值，最开始给他的值 这里给他值并不是在改变它的值  即使是常量 最开始也得有个值
//		FEMALE,
//		SECRET
//
//	};  // 大括号这一代码段 是一个语法结构
//
//	//4.枚举常量
//	//可以一一列举的常量  （血型  性别  星期）
//
//	//enum Sex s = MALE;  //取s变量  可能取值就是MALE;  还可取FEMALE SECRET  三个值当中一个
//
//	//printf("%d\n", MALE);
//	//printf("%d\n", FEMALE);
//	//printf("%d\n", SECRET);
//
//	//return 0;
//}


//字符串就是一串字符  ——用双引号括起来的一串字符

//int main()
//{
//	"abcdef"; //这就是字符号
//	"hello bit"  //这也是
//
//	return 0;
//}
//#include <string.h> 
//int main()
//{
//	//字符数组———数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了 一个\0的字符
//	//\0 是字符串的结束标志  （每一个字符串后面都隐藏了\0）
//	// 按 F10 启动 调试  窗口 监视 监视1
//	//char arr[] = "hello"; //这都是字符
//	char arr1[] = "abc";     //双引号引起来的是一串字符
//	char arr2[] = {'a','b','c', '\0'};  //单引号引起来的是一个字符
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//int len = strlen("abc");  //string length
//	//printf("%d\n", len);
//	//strlen("abc") 是求 abc字符串的长度
//	//把长度求出来  放到了 len 里 
//	
//	//打印个字符号   //%s 表示字符串
//	//printf("%s\n", arr1);   
//	//printf("%s\n", arr2);
//	return 0;
//}

//转义字符
//int main()
//{
//	//printf("c:\test\test.c");
//	/*printf("ab\ncd");  */ //这里也不是 /+n (两个字符)的意思了
//	//printf(" % c\n", '\'');  //两个单引号中间的单引号本来是不行的  但是在单引号前面加上\ 就可以了
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");  //同理  想让双引号中间的一个双引号是个字符，能够运行起来  那么双引号前面加\
//	//printf在打印数据的时候，可以指定打印的格式
//	printf("%s\n", "'");  //双引号之间是单引号 就不需要加\了  因为不会和前面后面双引号组成一对
//	printf("c:\\test\\test.c");  // \t的意思是水平制表符的意思（Tab键）
//								 //如果想让test运行 而不是 \t的意思的话  就在\t前面在加\  变成\\t
//	printf("\a\a\a\a");  //电脑会响  这是一个警告字符  
//	return 0;
//}

//printf("%d",100);  这个是打印整型（常数）
//printf("%c",'a');  这是打印字符
//printf（"%s","abc");这是打印字符号

//int main()
//{
//
//	//printf("%c\n", '\130');  //8进制的130是十进制的多少？
//	//x—— ascii码值是88
//	/*printf("%c\n", '\101');*///a-65-8进制是：101
//
//	/*printf("%c\n", '\x30');*///30 的十六进制  48-'0'
//	printf("%d\n", strlen("abc")); //3
//	printf("%d\n", strlen("c:\test\328\test.c")); //答案是14
//	return 0;
//}



//注释
//int main()
//{
//
//	//int a = 10;   //这种注释是C++注释风格
//	/*
//	 int b = 0;
//	 */             //这是C语言的注释风格   缺陷--不支持嵌套注释（注释里有个注释就不行）
//	return 0;
//}

//选择语句
//int main()
//{
//	int input = 0;  //int 类型的变量    存放输入的值
//	printf("加入比特:>");
//	printf("你要好好学习吗(1/0)?>:");
//	scanf("%d",&input);    //&  要的取缔值input  这时整数已经放进input里了  //scanf是一个格式输入函数
//	if (input == 1)    //进行判断 选1或者0   //这里要俩个= ==  一个不行
//		printf("好offer\n");
//	else //这是 if else 语句
//	{
//		printf("卖红薯\n");   //这就是选择语句 两个选项
//	}
//		   
//	return 0;
//}

//循环语句
//每天重复做的事情

// 假设  比特 -敲30000代码--找一个不错的工作
//int main()
//{
//	int line = 0;   //int 变量（line） 记录敲了多少行
//	//while 表示循环
//	while (line < 30000)
//	{
//		printf("每天写代码:%d\n",line);  //小于三万行每天做的事情  //%d表示我的行数
//		line++;  //每多敲一行 就加
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}

////函数
//int Add(int x,int y) //创建整型x,y  将num1 和 num2  传递到 x,y
////因为z是整型  所以 Add形式的返回类型 也得弄成整型 Add前加上int
////Add 就是个函数模板
//{
//	int z = 0;
//	z = x + y;   //z 存放结果
//	return z; //z是整型 //return z 是（输出/复制）返回给sum 
//
//}
//int main()
//{
//	int num1 = 0;  //因为是和 所以 num
//	int num2 = 0;  // 两个整数变量
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;     //把两个变量加起来放到 和（sum）里  没有sum 所以定义一个  前面加int
//		//把后面的结果放到了sum里
//	//函数的方式解决   其实也是要算num1和num2的和
//	int sum = Add(num1, num2);  //委托add算出来他俩的和 然后得返回放到 sum里
//
//	printf("%d\n", sum);
//	return 0;
//}

//数组
//要存储1-10的数字  怎么存储
//如果用变量的话
int main()
{

	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	////……一直到10

	//数组-- 一组相同类型的元素的集合
	//现在要把10个整型  1-10  存起来
	//数组是用下标来访问的
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//创建了个空间  名字叫arr 有10个元素  每个元素类型叫int
	//这个就是数组 赋值 用大括号{} 用,隔开  这是数组创建和转换
	int i = 0;
	while (i < 10)
	{

		printf("%d", arr[i]);
		i++;
	}
	//char ch[5] = {'a','b','c'};  //首先 这是字符数组 是char  然后名字是ch 5个元素 用单引号''
	//大括号里只写了三个元素  因为这是不完全初始化 //剩下没写出来的 默认为 0 
	//按F10 调试 窗口 监视   输入 arr ch

	return 0;

}