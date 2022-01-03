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
//struct Book
//{
//
//	char name[20];//书得有名字
//	float price;  //书得有定价
//	char id[30];  //书得有书号
//};
//int main()
//{
//	struct  Stu s = {"张三",20,85.5};  //创建了一个学生 但是不知道学生的名字，年龄和成绩
//	                   //给 学生s 赋值了  //结构体的创建和初始化//赋值后想打印出来
//	printf("1:%s %d %lf\n",s.name, s.age, s.score);//.操作符 （找到要打印的结构体的成员s  再找到s的成员）
//	     // 名字  年龄， （float）成绩    //结构体变量 .  成员变量
//	struct  Stu*ps = &s;  //ps是结构体的值  *ps 变指针  ps指s s的类型是 struct Stu 所以ps也是
//	//struct  Stu*  这是结构体的指针
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	//打印第二次 不直接用s值  *ps是s 
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//ps是个指针，他指向那个对象的名字
//														  //ps-> = *ps 一样的
//	//通过ps先找到表达对象  然后在找到成员里的内容    结构体指针->  成员变量名
//	return 0;
//}



//作业
//局部变量的作用域是?
//局部变量是大括号内部
//正解:局部变量所在的局部范围

//void test()
//{
//	int b = 0;//这个b也是局部变量
//}
//int main()
//{
//
//	int a = 10;//a是局部变量
//	return 0;
//}
// 
// 
 //C99 标准中引入一个概念：变长数组
//支持数组创建的时候，用变量指定大小，但是这个数组不能初始化
//vs2019 不支持C99中变长数组的
//int main()
//{
//	int n = 10;
//	//int arr[n] = { 0 };//初始化=0 //这个表达式错误  必须含有常量值  n是变量
//	int arr[n];
//	return 0;
//}

//求两个数的较大值
//int Max(int x, int y)  //返回类型 int //这个函数最终返回整型值 
//          //要传a,b过来 要有接收值 //int x  int y是参数值
//                   
//{
//	if (x > y)
//		return x;
//	else
//		return y;//无论返回x还是返回y 都是整型类型 因为int
//	             //之后值返回到m
//	//一般写代码不建议把函数名字写成全大写 比如 MAX
//}
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m=Max(a,b);//把a，b传给max,之后max求出a，b较大值 之后把这个值返回
//	                 //int m 保存返回值
//	printf("%d\n", m);
//	return 0;
//}

//飞机
//int main()
//{
//
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
// 
//	return 0;
//}

//int main()
//{
//
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}


//被5整除的问题--选择语句的问题
//#include<stdio.h>
//int main()
//{
//	//输入 数据
//	 int m=0;
//	scanf("%d", &m);
//	//判断并输出
//	if (m % 5 == 0)  //说明被5整除了
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}


//分支语句  12/15

//什么是语句
//int main()
//{
//
//	printf("hehe\n");
//	3 + 5;
//	;//这也是个语句  叫做空语句
//	return 0;//用；隔开的就是一句语句
//}

//int main()
//{
//	int age = 170;
//	//多分枝写法
//	if (age < 18)
//		printf("少年\n");
//	/*else if (18 <= age < 26)*///else if 如果其他情况下
//	else if (age >= 18 && age < 26)  //&&是并且的意思  age >= 18也可以写成18<=age
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");


	//if (age >= 18)
	//{
	//	printf("成年\n");
	//}
	//else
	//{
	//	printf("未成年\n");
		//printf("不能谈恋爱\n");//这句话执行不了  因为if else 默认只能控制一句话//这是独立的一句话
	//	printf("不能谈恋爱\n");
	//}  //如果想让else管两句话  就要加上{}---叫做代码块
	/*if (age >= 18)
		printf("成年\n");*/

	/*return 0;
}*/

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	else //else和离他最近的if匹配
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}
//这段代码什么都打印不出来
// 第一个if语句进到底下的if else语句里 才有第二个if和else的事
//因为第一个if a=0 但是if(a==1) 这个语句都没有进去底下的if else里所以直接就结束了

//代码风格--书
//<高质量C/C++编程>

//if书写形式的对比
//代码1
// if(condition){    //if条件满足return x
//	return x;
//}
//return y;
//
////代码2
// if (condition)     //如果条件满足  返回x
//{
//	return x;
//}
//else
//{
//	return y;    //如果条件不满足   返回y
//}

//int test()
//{
//	if (0)//为真
//		return  0;
//
//	printf("hehe\n");//按f10 这两句没执行  因为前面的return执行了后面的就不执行了
//	return 1;//把上面的if(1)改成if(0)--假 return 1 就有机会执行了
//}
//int main()
//{
//	
//	test();
//
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	//if (num = 5) 少写一个= 虽然打出来hehe 但是是错的代码 num=5 永远为真 就一直是5
//	if(5==num)//这样写能防止代码错误  少写一个= 代码没法运行 num没法赋给5
//		      //当两个整型变量进行比较的时候 把常量放左边
//		printf("hehe\n");
//
//	return 0;
//}

//判断一个数是否为奇数

//int main()
//{
//	int num = 15;//奇数是÷2 余1
//	if (num % 2 == 1)//%2 就得到余数
//		printf("奇数\n");
//
//	return 0;
//}

//输出1-100之间的奇数
//用 for
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 ==1)
//		{
//			printf("%d ", a);
//		}
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)//i初始化从1开始
//	{
//		printf("%d", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 13;
//	{
//		if (a % 2 == 1)
//		{
//			printf("奇数\n");
//		}
//		else
//		{
//			printf("偶数\n");
//		}
//	}
//	return 0;
//}

//switch 语句
// 
// int main()
//{
//int day = 0;
//scanf("%d", &day);//scanf 把数据输入到指定的变量当中
//				  //把 输入的值 %d   放到day 里
//switch (day)
//{
//case 1:   //switch 后面day是几 就进到case几
//	printf("星期1\n");
//case 2:
//	printf("星期2\n");
//case 3:
//	printf("星期3\n");
//case 4:
//	printf("星期4\n");
//case 5:
//	printf("星期5\n");
//case 6:
//	printf("星期6\n");
//case 7:
//	printf("星期天\n");
//}
//return 0;
//	}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//scanf 把数据输入到指定的变量当中
//					  //把 输入的值 %d   放到day 里
//	switch (day) //整型表达式
//	{
//	case 1:   //switch 后面day是几 就进到case几
//		printf("星期1\n");
//		break;//break 跳出 停止的意思
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//	return 0;
//}
//

//输入1-5  工作日
//6-7是休息日

// int main()
//{
//int day = 0;
//scanf("%d", &day);//scanf 把数据输入到指定的变量当中
//				  //把 输入的值 %d   放到day 里
//switch (day)
//{
//case 1:   //因为case1 后面没有break//所以从1进来也会往下走 直到遇到break
//case 2:
//case 3:
//case 4:
//case 5:
//	printf("工作日\n");
//	break;
//case 6:
//case 7:
//	printf("休息日\n");
//	break;
//default:
//	printf("输入错误\n");
//	break;
//}
//return 0;
//	}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//因为n=1 所以从case1进
//	{
//	case 1:
//		m++;  //m=3
//	case 2:  //因为case1 没有break 所以case2执行
//		n++;  //n=2 m=3
//	case 3:
//		switch (n)//这里的n是2
//		{//switch允许嵌套使用
//
//		case 1: //所以这个case1不执行
//			n++;
//		case 2://所以从case2进来
//			m++; n++;  //m=4  n=3
//			break;//这个break的跳出  只是跳出上面switch的 接着会来到case4
//		}
//	case 4:
//		m++;  //m=5 n=3
//		break;//这个break 是跳出最开头的switch的
//	default:
//		break;
//	}
//	printf("m=%d, n = %d\n", m, n);
//	return 0;
//}

//if 语句
//int main()
//{
//	while(1)// 1 为真
//		printf("hehe\n");
//	return 0;
//}

//while 语法结构
//while (表达式)
//    循环语句；


//屏幕上打印1-10
//int main()
//{
//	int i = 1;
// 
// while (i <= 10)
//		//在while循环中，break用于永久的终止循环
//		//只要break被执行，不管后面还有多少循环  都不运行了
//	{
//		if (i == 5)//本来有10次循环  但是到了第五次就不循环了  跳出
//			break;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//把break换成continue
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)//等i等于5以后  往上走  到while (i <= 10)重新往下
//            //但是 因为不到i++ ，所以i一直是5 又往上 死循环了
//			continue;//继续//这里continue的意思是跳过本次循环continue的后面代码,
//		            //直接到判断部分，判断要不要进行下一次循环
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}//打出来的是 1 2 3 4   进入死循环了


//getchar 是读取一个字符
//得到一个char 从一个留里面
//或者得到一个char 从stdin（标准输入--键盘）
//getchar的返回类型是int 类型
//如果正确读取      每个函数读到的是字符  返回到整型是返回字符的ASCII值
//如果读取的时候 读取错误或者文件结束   这个函数返回的是EOF
//EOF--end of file ---文件的结束标志  就是  -1
//int main()
//{
//	int ch = 0; //创建了  int类型  ch变量
//	while ((ch = getchar()) != EOF)//正常读取 getchar读取字符放到ch
//		                          //这个()里ch的值不等于EOF 说明不是遇到错误了 getchar读取的是正常字符
//                               //进入到while循环内部  然后 putchar
//                         //如果getchar读取的值返回到ch 是EOF 那么 循环不再继续
//                                 //!=是不等于的意思
//	{
//		putchar(ch);//打印在屏幕上
//	}
//	return 0;
//}

//代码意义就是不断在屏幕上读取字符
// 按ctrl + z  就是结束   也就是getchar 读取到了EOF



//get char 工作原理
//int main()
//{
//	int ch = getchar();//getchar 读取字符放到ch里
//	//printf("%c\n", ch);
//	putchar(ch);//输出字符
//	return 0;
//}


//int main()
//{
//	int ch = 0; 
//	while ((ch = getchar()) != EOF)//getchar 读取字符放到ch里
//		                         
//	{
//		putchar(ch);//打印在屏幕上
//	}
//	return 0;
//}


//while 循环例子
//输出1-10
//int main()
//{
//	int i = 1;//这个给 i 的初始化值不是0！！
//	while (i <= 10)//判断部分   <=
//	{
//		printf("%d ",i);
//		i++;//调整部分
//	}
//	return 0;
/*}*///三个部分任何一个部分发生变化  都会影响到循环


//for 循环

//把初始化  调整部分  循环结合在一起  不会离得太远
//for循环 语法结构
// for(表达式1；表达式2；表达式3)
      //循环语句

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;//只打印1-4 之后跳出  //for循环里的break也是用来终止循环的
//		if (i == 5)
//			continue;//(这里不会有死循环的可能性)
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//			{
//		
//				printf("%d ", i);
//				i = 5;
//			}
//		
//	return 0;
//}
//这个代码死循环 6

//循环体内改变循环变量的例子
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//
//		printf("%d ", i);//i=1 进来 打印 1
//		int j = 0;
//		for (j = 0; j < 10; i++)//打印完以后 走这个循环   每次判断j<10
//								//i++  但是j没有++ 永远都<10   所以死循环  一直打印hehe
//		{
//			printf("hehe\n");//i 打印了个1  之后就不打印了
//			                //为啥没打印 i的值   因为j的循环出不去
//		}
//	}
//	return 0;
//}
//这个代码打出来是1 3 5 7 9 
//在循环体内去改变循环变量

//int main()
//{
//	int arr[10] = { 0 }; //10个元素的数组  //数组下标从0开始
//	int i = 0;
//	for (i = 0; i < 10; i++)//i = 0是闭区间  i<10 （最大是9）开区间    左闭右开
//		                          //i<=9 这是  左右 都是  闭区间  的写法   也可以这样写 但是不建议
//		//i<10  的10相当于  循环10次
//	{
//	
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//判断部分的省略--使得循环就是死循环--判断部分恒为真
//	for (;;) //for循环三个部分  都可以省略  想省哪个省哪个
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}  //结果是打印hehe 的死循环

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");//循环9次呵呵  外层for 循环3次 内层循环3次  3x3次  所以是九次
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)//1.这里i=0 进来  //3.之后 i++一次 i=1 之后再进来
//		     //5.下面那个for循环截止了 再上来 进行i++  i=2  因为<3 又进来
//		//当i变成3 就不满足条件了  就跳出去了  整个循环就结束了
//	{
//		for (; j < 3; j++)//2. 然后 这个循环整体都要执行  之后j++  打印三次后  上去
//			//4. 等i=1进来  因为刚才 已经j=3 所以不符合<3的条件了  进不去了  这个for循环就截止了
//			//6.等i=2 进来后 还是j=3 又不打印  又上去  以此类推 
//		{
//			printf("hehe\n");//结果打印3个hehe
//		}
//	}
//	return 0;
//}
//如果给for (; j < 3; j++)  加上j=0；每一次不管上次循环j变成几 都先变回0  还能在循环3次

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//k = 0;是赋值  不是判断 因为是一个=
//		                              //k = 0; 判断部分把0赋给k  这歌表达式的结果就是0 0为假
//		                            //所以一次循环都没进
//		                            //写成k==0 就变成判断了 就能循环一次了
//		k++;
//	return 0;
//}//这个循环循环了 0次


//while 是先判断在执行
//do while循环    先执行在判断
//do 
//    循环语句;  //不一定是一条语句  可能是{}括起来的一段代码
//while(表达式);

//打印1-10
//int main()
//{
//	int i = 1;
//	do  //循环体循环要多条语句的话 用{}
//	{
//		printf("%d ", i);//首先i进来 i是几就打印几  //接着打印
//		i++;        //之后i要变化
//	} while (i<=10);//i<10 以后又上去
//
//	return 0;
//}

// do while 循环中的continue 和 break
//int main()
//{
//	int i = 1;
//	do  
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);//首先i进来 i是几就打印几  //接着打印
//		i++;        //之后i要变化
//	} while (i <= 10);//i<10 以后又上去
//
//	return 0;
//}// 打印出 1 2 3 4

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//首先i进来 i是几就打印几  //接着打印
//		i++;        //之后i要变化
//	} while (i <= 10);//i<10 以后又上去
//
//	return 0;
//}//打印1 2 3 4   跟while语句一样  死循环了
//代码死循环了  因为continue跳过 continue后面的代码  所以跳过i++  但是不跳过判断部分
//i还是5  符合i<=10 又上去  然后又continue

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

// go to 语句 12/28  
//int main()
//{
//flag://也就是去到这里
//	printf("hehe\n");//下来 打印
//	printf("haha\n");
//
//	goto flag;//goto 就是去到哪里的意思 这里是去到flag
//	return 0;
//}//最终结果  hehe haha 死循环

//关机程序
//只要运行起来 电脑就在1分钟内关机
//如果输入：我是猪，就取消关机

//关机命令 --电脑中  命令提示符中输入
//shutdown -s -t 60   s是设置关机 -t是设置时间关机   60 是设置60秒后关机
//shutdown -a 取消关机

//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system()-执行系统命令的
//	char input[20] = { 0 };//存放输入的信息--我是猪
//	system("shutdown -s -t 60");//头文件 <stdlib.h>
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);// 我是猪  是字符串 所以%s
//	//if (input == "我是猪")//两个字符串比较 不能用==的，应该使用 strcmp（）
//		                   //string compare
//	if(strcmp(input, "我是猪") == 0)//把input 和我是猪传给strcmp 进行比较
//		                   //如果发现相等 就会返回一个0
//		                 //头文件 <string.h>
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//还可以这样
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system()-执行系统命令的
//	char input[20] = { 0 };//存放输入的信息--我是猪
//	system("shutdown -s -t 60");//头文件 <stdlib.h>
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);// 我是猪  是字符串 所以%s
//		//if (input == "我是猪")//两个字符串比较 不能用==的，应该使用 strcmp（）
//							   //string compare
//		if (strcmp(input, "我是猪") == 0)//把input 和我是猪传给strcmp 进行比较
//							   //如果发现相等 就会返回一个0
//							 //头文件 <string.h>
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}

//goto语句 只能在一个函数范围内跳转，不能跨函数

//void test()
//{
//flag:
//	printf("test\n");
//}
//int main()
//{
//	//goto flag;//这是在两个函数中使用了 所以不行
//	return 0;
//}


//#include <string.h>
//函数
//strcpy
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";//现在把arr2的内容放到arr1里面去  
//							  //arr1[20] 里面能放下“hello bit”(一共9个字符，空格也算)
//	strcpy(arr1,arr2);//第二个参数是源头，第一个参数是目的地  
//	                  //所以 arr1是目的地  放到arr1里面  arr1写前头
//	printf("%s", arr1);//打印arr1这个字符串%s--以字符串的格式来打印
//
//	return 0;
//}

//memset
//int main()
//{
//	char arr[] = "hello bit";//hello bit的前五个字符 hello  换成xxxxx
//	memset(arr,'x',5);//第一个参数空间是地址，第二个是设置的整型值，第三个是前几个字节
//	printf("%s\n", arr);
//	return 0;
//}

//自定义函数
#include<stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}

//函数的组成
//ret_type fun_name(para1, *)
//{
//	statement;//语句项
//}
//
//ret_type 返回类型
//fun_name 函数名
//para1    函数参数
//{}中 叫  函数体

//例子
//写一个函数可以找出两个整数中的最大值

//定义函数
//int get_max(int x, int y)// ( )里面放的是函数参数 接受类型是整型（int）
//因为z的类型是整型  所以要明确告知函数get_max 运行以后 返回的是整型的值 所以前面加int
/*{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;*///返回z--返回较大值
//}//这个叫函数体  目的就是把x y 的较大值求出来

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max=get_max(a,b);//起的函数名--获取最大值--a和b  //获取最大的值后 返回到int max
//	printf("max=%d\n", max);
//	return 0;
//}

//例题2
//写一个函数可以交换两个整形变量的内容

//函数返回类型 的地方 写成void 表示 函数不返回任何值 也不需要返回

//Swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
// 改变形参，不能改变实参
//void Swap1(int x, int y)
/*{
	int z = 0;
	z = x;
	x = y;
	y = z;
}*///这个函数只需要交换  并不像上一题一样需要返回数
//这么写代码有问题
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数--交换两个整形变量的值
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(a, b);//Swap 交换
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}


//指针的概念
//int main()
//{
//	int a = 10;//内存中创了4个字节的空间
//	int* pa = &a;//pa就是一个指针变量   //把a的地址交给了pa变量  pa里面存放的是a的地址（&a）
//	*pa=20;//pa前面加* 就是通过pa里面存的地址 找到所表达的对象  *pa=a  
//	       //现在*pa 给了个20  也就是a现在=20
//	printf("%d\n",a);
//
//	return 0;
//}//可以通过指针变量来找到  存在指针变量中的对象


//函数返回类型 的地方 写成void 表示 函数不返回任何值 也不需要返回
//void Swap(int* pa,int* pb)//创建指针变量   指针变量大小也是固定的  要不4个字节 要不8个字节
//                          //*pa=a *pb=b
//{
//	int z = 0;
//	z = *pa;//通过*pa 来找a  之后把值-10 放到z里面   z=10
//	*pa = *pb;//把b的值放到a里面  把20 放到a-10里面  也就是现在*pa=20
//	*pb = z;//把z=10 放到*pb 里面  现在*pb=20  
//	//现在交换了
//	
//}//这个函数只需要交换  并不像上一题一样需要返回数
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数--交换两个整形变量的值
// 
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(&a, &b);//Swap 交换
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}

//void Swap1(int x, int y)----传值调用
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//void Swap2(int* pa, int* pb)---传址调用
// //创建指针变量   *pa=a *pb=b
//{
//	int z = 0;
//	z = *pa;//通过*pa 来找a  之后把值-10 放到z里面   z=10
//	*pa = *pb;//把b的值放到a里面  把20 放到a-10里面  也就是现在*pa=20
//	*pb = z;//把z=10 放到*pb 里面  现在*pb=20  
//}

//1/1
//函数的嵌套调用和链式访问

//每一个函数都应该在{}外独立存在  
//int test1()
//{
//	int test2()
//	{
//	
//	}
//
//}  这样是不对的 不能一个函数的{}里面嵌套另一个函数

//函数是不能嵌套定义的
//但是函数可以嵌套调用
//void test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();//又在test2里面调用了test3
//	return 0;
//}
//int main()
//{
//	test2();//在梦函数里调用了test2
//	return 0;
//}


//链式访问
//求字符串长度
//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abc");//求长度
//	//printf("%d\n", len);
// //    另一种写法
//	//链式访问
//	//printf("%d\n", strlen("abc"));//strlen的返回值做了printf的参数
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = { "bit"};
//	////strcpy(arr1, arr2);//把arr1的内容填充成arr2,也就是把arr2拷贝
//	//printf("%s\n", strcpy(arr1, arr2));//strcpy的返回值做了printf的参数
//
//	printf("%d", printf("%d", printf("%d", 43))); //打印出来的是4321
//	//printf函数返回的是打印在屏幕上的字符的个数
//	//所以 最后的 printf("%d", 43) 首先打出来43
//	//43 是两个字符 所以第二个printf打出来的是 2
//	//然后 因为第二个 printf打出来的2 只有一个字符
//	//所以第一个printf打出来的是1 ---一个字符
//	return 0;
//}

//函数的定义

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//当定义在后面时 应函数声明--告知
//	int Add(int, int);//add函数的两个参数是int类型  返回类型也是int
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数定义
//int Add(int x,int y)
//{
//	return x + y;
//}

//1/2
//递归
//#include<stdio.h>
//int main()//梦函数是函数
//{
//	printf("hehe\n");
//	main();//在梦函数中调用一个自己
//	       //这个函数也需要调用  上去调用main
//	return 0;
//}//错误的递归--栈溢出   但是也是一种递归

//例题1.
//接受一个整型值(无符号)，按照顺序打印它的每一位。例如：输入：1234，输出1 2 3 4

//打印一千两百三十四 1234  先要求出来
//1234 中 4 最容易拿   
//            1234%10=4
//1234/10=123 123%10 =3
//123/10    = 12 %10 =2
//12/10   =     1%10 =1
// 1/10   =  0//当结果变成0的时候  说明每一位都被拿到了
// 但是拿到的每一位是倒着拿的 先拿4 在321  
// 本来十需要正着打印  1234
//磨十除十   磨十得到一位  除十去掉一位

//用递归怎么做
//把大事化小 打印1234 可以拆
//print(1234)
//print(123) 在打印个4
//print(12) 在打印 3  4
//print(1)  在打印2 3 4
//只要参数部分 大于9 是两位数的时候 就要拆分成小问题  
//参数剩余一位数的时候  就不需要拆了  直接打印
//void print(unsigned int n)//void是不需要返回的意思
//{
//	if (n > 9)//假设现在n是1234  >9
//	{
//		print(n / 10);//首先借用print函数把n/10 得到123 的每一位 
//		           //之后 n得到123 在传给unsigned int n  然后在判断n>9 进到if语句
//		 //又判断 >9 /10  12  上去  又判断 又进到if语句 /10 这次n=1
//		//上去 这回n=1 就不进去if语句了 到了下面
//	}
//
//	printf("%d ", n % 10);//之后打印1234  的最后一位 4
//	//n=1 到了这里打印1 现在是 1 空格
//	// 之后 返回 当n=12 %10 =2 打印2  现在是 1 2空格
//	//再返回  n=123  %10 =3 打印三    现在是 1 2 3 空格
//	//再返回  n=1234 %10 =4
//	//所以 打印出来 1 2 3 4
//}
//int main()
//{
//	unsigned int num = 0;//unsigned 是无符号的
//	scanf("%u", & num);//%u是无符号整型  //假设输入 1234
//	//要写递归形式--函数自己调用自己
//	print(num);//设print函数可以打印参数部分数字的每一位
//	//当把num传给print 这个函数就会把num的每一位打印在屏幕上  而且是按照顺序的 1234
//
//	return 0;
//}

//错误代码--栈溢出 例子
//在内存中的栈区为main开辟空间
//也为test开辟空间
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);//在调用时 并没有结束递归 所以要开辟空间
//	}//如果每一次都要为新的test开辟空间 栈区总有空间用完的时候
//	//就会出现栈溢出现象
//}
//int main()
//{
//	test(1);//传过去1 用n接收
//
//	return 0;
//}

//写递归代码的时候
//1.死递归（没有跳出条件）所以 不能死递归,需要有跳出条件，每次递归要逼近跳出条件
//2.即使有跳出条件和逼近跳出条件  递归的层次也不能太深


//例题2.
//编写函数不允许创建临时变量，求字符串的长度。
//#include <string.h>
//普通求字符串的长度
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']  算长度时不算 \0
//	printf("%d\n", strlen(arr));//求arr数组字符块的长度
//
//	return 0;
//}// 结果 3

//模拟实现一个strlen函数
//int my_strlen(char* str)//因为要算出长度  长度是整型 而且算出来的数要返回 要有return
//                   //所以my_strlen函数参数 是整型
//{
//	int count = 0;//字符个数
//	while (*str != '\0')// str是指针    *str 就是通过指针拿到的字符 
//                //最开始指针指向的就是首元素  拿到的是['b']
//	{
//		count++;
//		str++;//str是判断['b']是不是\0 不是的话count就+1 
//		      //判断完b后 str++   现在*str就是 i 
//			  //要从底下数组中上来判断bit 所以不能是if语句 要是while语句 
//			  //i!=0 所以进到语句中 count++ 
//		      //然后str++   变成['t'] 判断t  然后现在*str=t 接着判断
//	}
//	return count;//把计算出来的长度返回
//} //因为题目是不允许创建临时变量 所以这种算法不符合要求

//用递归
//用my_strlen求（'bit'）的长度
//首先'b'是首元素 能判断他是不是\0 因为不是 所以字符串最少有1
//其次 1+my_strlen('it') 在it中也能判断i是不是\0 
//然后 1+1+my_strlen('t')
//     1+1+1+my_strlen('')空字符块
//     1+1+1+0=3
//大事化小
//int my_strlen(char* str)//当my_strlen第一次开始工作时 str向后看到的是 bit\0
//{
//	if (*str != '\0')//第一次str 指向b  *str !=\0  进来
//		return 1 + my_strlen(str + 1);//就 return 1 + my_strlen(str + 1)
//	                            //str+1 就是i的地址 然后上去
//	//现在给char* str传的就是i的地址  *str就是i  !=0 进来 // 向后看就是it\0 
//	// 然后 return 1 + my_strlen(str + 1)  str+1 就是t的地址
//	                //  现在给char*str传的就是t的地址  *str就是t  //向后看就是 t\0
//	// 然后 return 1 + my_strlen(str + 1)  str+1 就是\0的地址
//	// 现在给char*str传的就是\0的地址  *str=\0  就不进if语句了 走了else return 0;
//	// 然后开始返回 每个的return 1 + my_strlen(str + 1) 1+0   1+1   1+2=3
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']
//	printf("%d\n", my_strlen(arr));//arr数组在传参的时候 传的是首元素的地址
//	                                //也就是b的地址 b是字符 所以传过去的是字符的地址
//
//	return 0;
//}


//例题3. ---递归与迭代
//求n的阶乘（不考虑溢出）--n! 1*2*3...n
int main()
{
	int n = 0;//输入算n的阶乘
	scanf("%d", &n);
	int i = 0;
	int ret = 1;//ret 打印字符数量
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;//累计乘
	}
	printf("%d\n", ret);//结果
	return 0;
}
