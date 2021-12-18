#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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

//举例子
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");//密码假设是字符块    //:>  没有意思
//	scanf("%s", password);// 假设输入密码为  123456     
//						  //本来用到scanf 后面就会有&
//	                      //但是password前面为什么没有&
//	                      //因为password本身是个数组，数组的数组名本来就是个数组
//	                      //所以没有&
//	printf("请确认密码(Y/N):>");//在确认密码的时候  输入y 或者 n  来确认
//	int ch = getchar();//输一个字符  然后获取字符--getchar
//	if (ch == 'Y')  //因为是字符 所以用''括起来
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//这串代码   到请确认密码的地方  直接确认失败了  有问题

//getchar  scanf这样的函数  都是输入函数
//从 中间的 缓冲区 拿数据  如果缓冲区没有数据 就会等待  键盘输信息到缓冲区
//如果getchar  或者  scanf  发现缓冲区有东西  就会拿走

//为什么 没有输入N 就直接确认失败了呢----基本原理

//首先 scanf("%s", password);    scanf 进行第一次读取    这时  缓冲区没东西
// 在	printf("请输入密码:>"); 键盘输入了“123456\n”  到缓冲区     \n（回车）会触发scanf读取东西
// 当scanf读取的时候   只读取了password--123456 放到password里面   并没有读取--\n
//紧接着 下一步  printf("请确认密码(Y/N):>");
//这是本应该 getchar 等待缓冲区输入 Y/N  但是getchar到缓冲区发现 里面有东西---\n
//getchar 直接把\n读取了  放到了  ch 里面了   
//ch 现在是=\n  不等于'Y'
//走了 else
//所以  出来了  确认失败
//要让scanf  读取的时候  缓冲区没东西   没有\n

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");//密码假设是字符块    //:>  没有意思
//	scanf("%s", password,20);
//
//	printf("请确认密码(Y/N):>");//在确认密码的时候  输入y 或者 n  来确认
//
//	//清理缓冲区
//	getchar();//把 '\n' 处理  //读取后就没用了  不会放到下面ch里面
//	int ch = getchar();//这个getchar 读取的时候  缓冲区就没东西了
//	if (ch == 'Y')  //因为是字符 所以用''括起来
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
}
//这样子是成功了

//但是当密码输入 123456 abcdef
//又向刚才一样  在请确认密码的地方直接 确认失败了

//在 printf("请输入密码:>");  输入 123456 abcdef \n
//当第一次 scanf 读取的时候   只把空格前面的拿走 ---123456
//这时缓冲区还剩下好多---abcdef \n
//下面的第一个getchar  只能消耗一个字符   缓冲区还有好多字符
//第二个getchar 进行读取的时候 就会发现缓冲区还有好多字符
//所以在输入的信息里  如果很多东西放到缓冲区  一个getchar是处理不了的  
//那就放多个getchar  一直读到缓冲区没东西

int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");//密码假设是字符块    //:>  没有意思
	scanf("%s", password, 20);

	printf("请确认密码(Y/N):>");//在确认密码的时候  输入y 或者 n  来确认

	//清理缓冲区
	//getchar();//把 '\n' 处理  //读取后就没用了  不会放到下面ch里面

	int tmp = 0;//(弄个临时变量)
	while ((tmp = getchar()) != '\n');//读取一个字符放到tmp
	int ch = getchar();//这个getchar 读取的时候  缓冲区就没东西了
	if (ch == 'Y')  //因为是字符 所以用''括起来
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;