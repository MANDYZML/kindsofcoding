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
int main()
{
	//1.字面常量
	//3.14;//这就是个常量  常数  不会变
	//10;
	//'a'; //这都是常量
	//"abcdef";// 这也是

	//2.const 修饰的常变量（本质上还是个变量 只不过具有了常属性）
	//int num = 10; //这是变量  因为 sum 可变 num 是常变量--具有常属性（不能被改变的属性）
	//num = 20;
	//printf("num = %d\n", num);  //把num 打印  20
	//int arr[10] = {0};  //创建数组 arr是数组名字 可以随便取 //10个元素

	//const int n = 10;//n 本质上是变量 被const修饰了  所以是常变量（不能变了）
	//int arr2[n] = { 0 };//n是变量 这里运行不成功  n需要是常量

	//3.#difine 定义的标识符常量
	//int n = MAX;//max 是个常量   MAX 就是 #difine 定义的标识符常量
	//printf("n = %d\n", n);





	//性别
	enum Sex   //enum 枚举关键字
	{
		//这种枚举类型的变量的未来可能取值
		//这三个值就是枚举常量
		MALE = 3, //这是赋初值，最开始给他的值 这里给他值并不是在改变它的值  即使是常量 最开始也得有个值
		FEMALE,
		SECRET

	};  // 大括号这一代码段 是一个语法结构

	//4.枚举常量
	//可以一一列举的常量  （血型  性别  星期）

	enum Sex s = MALE;  //取s变量  可能取值就是MALE;  还可取FEMALE SECRET  三个值当中一个

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}
