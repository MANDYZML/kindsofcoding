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
//int main()
//{
//
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	////……一直到10
//
//	//数组-- 一组相同类型的元素的集合
//	//现在要把10个整型  1-10  存起来
//	//数组是用下标来访问的
////	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//创建了个空间  名字叫arr 有10个元素  每个元素类型叫int
////	//这个就是数组 赋值 用大括号{} 用,隔开  这是数组创建和转换
////	int i = 0;
////	while (i < 10)
////	{
////
////		printf("%d", arr[i]);
////		i++;
////	}
////	//char ch[5] = {'a','b','c'};  //首先 这是字符数组 是char  然后名字是ch 5个元素 用单引号''
////	//大括号里只写了三个元素  因为这是不完全初始化 //剩下没写出来的 默认为 0 
////	//按F10 调试 窗口 监视   输入 arr ch
////     return 0;
//
//	//操作符
//
//	/*int a = 9 / 2; */ //这里结果是4  因为商是4  余1  没有小数
//	//float a = 9 / 2.0;   //除号两端都是整数  执行的叫整数除法  所以除出来的是4  是整数 
//					   //除号两端有一个小数  执行的是小数除法  除出来的就是小数
//	int a = 9 % 2;    //% 叫 取模/取余   取模操作符得到的是余数   9/2 商4余1  所以a是1
//
//	printf("%d\n", a);   
//	return 0;

//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;  //结果放到b里
//	printf("%d\n", b);
//
//	return 0;
//}
 
//int main()
//{
//	int a = 2;
//	a = a + 5;  //这是赋值
//	a = 6;  // = 也是赋值
//	a += 5;  //+= 是复合赋值
//
//	a = a - 3;
//	a -= 3;
//	  
//	a = a % 3;  //a模3
//	a %= 3;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	// 0表示假  非0 表示真
//	int a = 0;  //那么a = 10 就是非0  //如果a=0  非0的数非常多
//	printf("%d\n", !a); //！的意思就是 能把真变成假，也能把假变成真
//	                    //a如果是10 那么！就把他变成假    那么！a就是0
//						//如果a=0  非0的数非常多 但是当把假变成真 规定非0的数就是  1
//	
//if (a)  //为真 要去做一件事情
//{
//
//
//}
//
//if (!a)//如果a为假  那么！a就为真   做一件事
//{
//
//
//}
//a = -5;
//a = -a; //这个负号
//a = +a;//  这个+（正号）其实可以省略
//         return 0;
//}

//int main()
//{
//	//sizeof 是一个操作符
//	//计算 类型或者变量的大小   //他不是函数  //函数后面的括号不能省略
//	int a = 10;
//	printf("%d\n", sizeof(int));  //计算整型的大小  //int 的括号不能省略  这是语法错误
//	printf("%d\n", sizeof(a));  //a的类型就是int  这两个式子大小一样
//	                          //sizeof 后面的括号可以省略  但是一般不省略
//	return 0;
//}


//计算 sizeof 数组大小  和元素个数
//int main()
//{
//	//这10个元素 每个元素都是整型  总大小是多大
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//数组名字叫arr　//计算的是数组的总大小  单位是字节
//	printf("%d\n", sizeof(arr[0]));//这个数组的第一个元素
//								   // 每个元素都是整形 所以第一个元素也是整型
//	                               // 结果是  4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	printf("%d\n", ~a);  //~ 按位取反
//	return 0;
//}

//int main()
//{
//
//	//int a = 10;
//	//int b = ++a;  //放在a的前面 这是前置++   //先++，后使用 
//	//   //a的值是10  10先+1  所以a先变成11  之后b因为++a  所以是11  
//	//printf("%d\n", b);  //答案  11
//	//printf("%d\n", a);  //11
//
//	//int a = 10;
//	//int b = a++;  //后置++     //先使用  在++
//	//   //a的值是10 先用 所以b是10  之后因为++  所以a是11
//	//printf("%d\n", b);  //10
//	//printf("%d\n", a);  //11
// //   return 0;
//}


//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;   //ctrl +F7  3.14是double类型  想把它强转成int类型  3.14前面放(int)就行了
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//
//	int a = 1;//取0以外的数 这个数都是真   反之取0  就是假
//	int b = 2;//结果为0   并且里有一个为假  结果就是加
//	/*int c = a && b;*///b=5 结果为1  非零即对，零为否
//	int c = a || b;//  ||是或者的意思 只要两边只要有一个是真  即为真
//	printf("%d\n", c);
//	//if (a && b)   //a并且b  意思是&左右都为真 中间才为真 整个表达式才为真
//	//{
//
//	//}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//    int b = 3;
//	int max = 0;
//	//求出a和b的较大值
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
// //用三目操作符表达
//	max= a > b ? a : b;  
//	//如果表达式a>b成立，那么a的结果赋给max，反之不成立，就b的结果赋给max
//	printf("%d\n", max);
//return 0;
//}

//int main()
//{
//	//(2, 4 + 5, 6);  //这就是逗号表达式
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	       //a=5        c=5-1=1    b=1+2=3   然后b的结果赋给了d
//	int d = (a = b + 2, c = a - 4, b = c + 2); //括号里的就是括号表达式 特点是 从左到右依次计算
//						  //整个逗号表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//
//	return 0;
//}

//下标引用操作符
//int main()
//{
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",arr[5]);//arr[5] 就是第六个元素 数组是由下标来访问的 从零开始的
//	return 0;
//}

////函数调用操作符
//int main()
//{
//	//调用函数的时候，函数名后面的（）就是函数调用操作符
//	printf("hehe\n");
//	printf("%d\n", 100);
//	//这个操作符 可以传一个参数 可以两个，可以好几个
//	return 0;
//}


 //常见关键字
//int main()
//{
//	//int char; 做个标量名字叫char   这是不行的
//	{
//		auto int a = 10; //这个a是在这个括号 自动创建，自动销毁的--自动变量
//						 //auto 基本都是省略的
//						 //新的C语言中也有其他用法-暂时不考虑
//	}
//
//	return 0;
//}

//int main()
//{
//	//大量平凡被使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议num的值存放在寄存器中
//
//	return 0;
//}

//typedef  类型重定义/类型重命名
//typedef unsigned int u_int;  //typedef 是把unsigned int 重新起了名字 叫u_int
//
//int main()
//{
//
//	unsigned int num = 100;
//	u_int num2 = 100;//这俩代码是一样的意思
//	return 0;
//}

//static --静态的  3个用法
//1.static 修饰局部变量
//2.static 修饰全局变量
//3.static 修饰函数

//void test()
//{//每一次去调test函数
//	static int a = 1;//a是局部变量  特点是 test函数进入a  a创建 //第二次在新创建a  //a又是1
//	a++; //变成2  //再次a++ ---2
//	printf("%d ", a); //2  //再次打印--2   以此类推10次 结果是10个2  
//}//出了局部范围以后  a就要销毁了 再往下走
//
//int main()   //！！代码从这开始！！
//{
//	int i = 0;
//	while (i<10) //while循环 <10
//	{
//		test(); //test函数  //去调test函数，然后往上走
//		//再次进来之后 i++   <10 又上去
//		i++;
//	}
//	return 0;
//}
//int a 加了static后  结果变成2-11
//第一次调test 函数 往上走 创建a a=1，++后变2 所以打印出来第一个数是2
//因为 static 出了局部范围后 a没有销毁    说明生命周期变长了
//下一次进入函数的时候 a 还在  那么static int a = 1;就没有意义了 因为a不等于1了
//然后a=2 a++是3 然后以此类推10次  所以打印出来是2 3 4 5 6 7 8 9 10 11

//声明  extern用来声明外部符号//（符号来自于其他地方）
//extern int g_val; //不需要指定值 //只需要指定名字，类型
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//声明函数
//extern int Add(int x, int y);
// int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//define 是一个预处理指令 两个用途
//1.define 定义符号 定义标识符常量

//#define MAX 1000//（MAX就是定义的一个符号）
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//
//}

////2.define 定义宏
//#define ADD(X,Y)  ((X)+(Y))  //宏是有参数（X ,Y） 的  x+y
//                    //这是一个宏体  如果那括号括起来整个了的话 ×4是乘的是一个结果
//int main()
//{
//	
//	printf("%d\n", 4*ADD(2,3));
//	return 0;
//}


////指针
//int main()
//{
//
//	int a = 10; //a在内存中要分配空间--4个字节
//	printf("%p\n",&a); //&a拿到的是四个字节的每一个 第一个地址 //%p 是专门用来打印地址
//	//打印出来的地址会一直变的
//	int *pa = &a; // pa是用来存放地址的，在C语言中 pa 叫指针变量 //&a的地址是个值 值放到变量pa里
//	//指针变量的定义方式是 int*
//	//* 说明 pa是指针变量
//	//int 说明pa指向的对象是int 类型
//	//这里因为pa指向的对象是a  而a的类型是int（整型）所以 pa前面是int
//
//	char ch = 'w';
//	char* pc = &ch;//这是pc的类型
//	//pc前面有*  说明pc是指针   前面的char指向的变量的对象（ch）的类型是 char类型
//
//	return 0;
//}
//指针变量能够存在自身地址？
//int main()
//{
//	int* pa = &pa; //(&pa 就变成二进制的了)
//
//	return 0;
//}
//这很奇怪

//&a  就是单目操作符
//int main()
//{
//
//	int a = 10;
//	int* pa =&a;//(拿到a的地址，之后放到pa里) pa里有a的地址，想通过pa里a的地址找到a
//	           //怎么找
//	*pa = 20;//因为pa里存的a的地址，所以*pa就是通过pa里的地址找到a
//	        //  * 叫做解引用操作  *pa就是通过pa里边的地址，找到a
//	printf("%d\n", a);//算a  因为*pa是20  所以a是20
//	                //改a可以不通过a改变  只要把a的地址交给pa 
//	             //然后pa解引用   就可以找到a  这是间接改变
//
//	return 0;
//}
//指针变量的大小
//int main()
//{
//	//指针有类型  类型有各种各样
//	printf("%d\n", sizeof(char*));  //字符指针用char*来计算
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));  //单精度浮点数
//	printf("%d\n", sizeof(double*));  //双精度浮点数
//	return 0;
//}

//结构体可以让C语言创建新的类型出来
//用类型创建出来一个个变量

//想创建  学生  这个类型

struct Stu    //创造一个类型（学生）
{

	char name[20];//学生得有名字  //名字是字符串 所以用char（字符数组）
	int age;
	double score;  //double (带小数点)
};  //学生  描述完了    一个学生是由几个数据组成的 
   //这三个 name age score  是这个结构体里的成员变量

//创建一个书的类型
struct Book
{

	char name[20];//书得有名字
	float price;  //书得有定价
	char id[30];  //书得有书号
};
int main()
{
	struct  Stu s = {"张三",20,85.5};  //创建了一个学生 但是不知道学生的名字，年龄和成绩
	                   //给 学生s 赋值了  //结构体的创建和初始化//赋值后想打印出来
	printf("1:%s %d %lf\n",s.name, s.age, s.score);//.操作符 （找到要打印的结构体的成员s  再找到s的成员）
	     // 名字  年龄， （float）成绩    //结构体变量 .  成员变量
	struct  Stu*ps = &s;  //ps是结构体的值  *ps 变指针  ps指s s的类型是 struct Stu 所以ps也是
	//struct  Stu*  这是结构体的指针
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	//打印第二次 不直接用s值  *ps是s 
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//ps是个指针，他指向那个对象的名字
														  //ps-> = *ps 一样的
	//通过ps先找到表达对象  然后在找到成员里的内容    结构体指针->  成员变量名
	return 0;
}