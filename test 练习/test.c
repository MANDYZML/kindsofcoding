#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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


//getchar
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

//举例子  1.
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
// 这串代码 到 请确认密码的地方  直接确认失败了  有问题

//getchar  scanf这样的函数  都是输入函数
//从 中间的 缓冲区 拿数据  如果缓冲区没有数据 就会等待  键盘输信息到缓冲区
//如果getchar  或者  scanf  发现缓冲区有东西  就会拿走

//为什么 没有输入N 就直接确认失败了呢----基本原理

//首先 scanf("%s", password);    scanf 进行第一次读取    这时  缓冲区没东西
// 在	printf("请输入密码:>"); 键盘输入了“123456\n”  到缓冲区     \n（回车）会触发scanf读取东西
// 当scanf读取的时候   只读取了password--123456 放到password里面   并没有读取--\n
//紧接着 下一步  printf("请确认密码(Y/N):>");
//这时本应该 getchar 等待缓冲区输入 Y/N  但是getchar到缓冲区发现 里面有东西---\n
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
//}
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

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");//密码假设是字符块    //:>  没有意思
//	scanf("%s", password);//如果一个字符串有空格  还可以用 gets(读一行 连空格都能读)
//
//	printf("请确认密码(Y/N):>");//在确认密码的时候  输入y 或者 n  来确认
//
//	//清理缓冲区--的一个多余字符
//	//getchar();//把 '\n' 处理  //读取后就没用了  不会放到下面ch里面
//
//	//清理缓冲区的多个字符内容
//	int tmp = 0;//(弄个临时变量)
//	while ((tmp = getchar()) != '\n');//读取一个字符放到tmp                        
//	{
//		;//如果读取的字符不等于 \n  这个字符就扔了
//		 //然后一直读  直到getchar最后读了\n 放到了tmp  tmp 就是\n
//		 // 这时 \n !=(不等于) \n  为假
//		 //就跳出去了  这就相当于把缓冲区所有东西都清掉了
//	}
//
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
//}

//例子 2
//int main()
//{
//
//	int ch = 0;
//	while ((ch=getchar()) !=EOF)//首先getchar 读取一个字符
//		     //ch是getchar的返回值  然后  把值放到ch里  和EOF比较 如果!=EOF 那么进去
//	{
//		if (ch < '0' || ch>'9') // ||或者
//			      //根据ASCII的表 0在表中是第48位  <0 就是 48位之前
//			      //9在表中是57位    >9  就是   57位以后    也就是非数字字符
//			continue; //如果不在这个范围内，不是数字字符
//		              //跳过本次循环 不打印 底下的putchar
//		//如果是数字字符的话  就没有进入if语句
//		//然后就打印 ---打印数字
//		putchar(ch);//否则就putchar（输出一个字符）
//	
//	}
//	return 0;
//} //所以这个代码只打印数字字符


//循环练习题
//1.计算n的阶乘 ---就是1x2x3x4x5x6.....xn
//5的阶乘就是  1x2x3x4x5
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//累计乘到一个数 算的是阶乘
//	scanf("%d", &n);//输入想算出的阶乘
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//2.计算1！+2!+3!+……10！的和  ！是阶乘的意思
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;//累计乘到一个数 算的是阶乘
//	int sum = 0;
//	while (n <= 10)
//	{
//		printf("%d ", n);
//		n++;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//累计乘到一个数 算的是阶乘
//	int sum = 0;
	//3!=3*2*1=3*2!
	//2!=2*1

	//for (n = 1; n <= 3; n++) //n=3  就是求1的阶乘加2的阶乘加3的阶乘  1+2+6=9
	//{
	//	ret = 1;//所以应该每一次求n的阶乘之前  让ret初始化成1
	//	for (i = 1; i <= n; i++)//求的是阶乘
	//	{
	//		ret *= i;//应该每次都从1开始乘  但是这里ret是累计乘
	//		         //比如说  当n=2 阶乘是2 此时ret=2  之后又上去  n=3 
	//		         //这时算3的阶层  应该只1x2x3  但是ret没有变成1 而是 累计
	//		        //2x1x2x3
	//	}
	//	sum += ret;
	//}

	//改进  这个更简洁
//	for (n = 1; n <= 3; n++) //n=3  就是求1的阶乘加2的阶乘加3的阶乘  1+2+6=9
//	{                       //然后 上来 n++ n变成2 并且<=3
//		
//			ret *= n;//当ret最开始是1的时候  把ret乘等n  n是1 就是乘1  就是1的阶乘
//			// 然后ret已经是1的阶乘了 乘以2 就是2的阶乘
//		sum += ret;//最开始sum是0 加上1的阶乘  等于1
//		           //2的阶乘加上sum 也就是一的阶乘加上2的阶乘的和
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//这个代码有问题  应该算出来9  运行出来是15
//n是一共几个阶乘   第一个for算的是一共多少个阶乘 加起来的和
//第二个for 算的是  一个阶乘 的积 比如说算2的阶乘  就是1x2
//ret 算的也是 积  n如果是3  那么 ret算的就是 1x2x3 

//3.在一个有序数组中查找具体的数字n
//假设给了数组是  1 2 3 4 5 6 7 8 9 10  在这组数中找个数字7
//折半查找  二分查找--效率很高

//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//有序数组
//	int k = 7;//要查找的数字
//          //目标是  在arr数组中 查找k（7）的值
//	      //就是 看arr 这个数组中有没有7
//	//首先确定数组中的 左下标 和右下标
//	//sizeof 计算元素大小和元素个数  
//	//sizeof(arr)计算整个数组大小
//	//sizeof(arr[0]) 计算一个元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//总大小除以一个元素大小=数组的元素个数
//
//	int left = 0;
//	int right =sz-1;//因为下标从0开始  最右边一个的下标 要比数组最后一个数小1
//	           //现在要找到左下标和右下标的平均值（mid）
//
//	int mid = (left + right) / 2;//现在左边（left）=0   右边（right）=9  加起来/2   
//	                             //mid=（0+9）/2=4  4 放到了mid里
//	                          //0作为下标的元素是1   4作为下标的元素是5
//	if (arr[mid] < k)
//	{
//		left = mid + 1;//现在被查找的范围 left现在是5
//	}
//		//5和7 进行对比  5比7小  说明要找的元素在5的右边
//	    //5左边的元素都不需要了 被查找的范围变成6-10
//	    //右边下标不变  左边的下标变成 mid+1 刚才是4  现在是5 也是元素6
//	    //新一次的平均值  是 (5+9)/2=7(mid)  元素就是8
//	    //现在找到的mid 比要找的元素 7    要大  所以被查找范围不会再8的右边
//	    //现在找的mid比要找的还要大 说明在8 左边  被查找范围 是6-7
//	    //左下标还是5 有下标变成7的下标 6
//	   //然后（5+6）/2= 5  下标是5的元素是数字6  说明比要找的要小  那么剩下只有7
//	   // 7 的下标是6 (6+6)/2= 6
//	else if(arr[mid]>k)
//	{
//		right = mid - 1;
//	}
//	else
//	{
//		printf("找到了：%d\n", mid);
//	}
//	
//	return 0;
//}//以上代码是一次查找 而找出来  需要进行多次
//
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//有序数组
//	int k = 7;//要寻找的数
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//总大小除以一个元素大小=数组的元素个数
//
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//每次都要拿到新的左右下标
//		if (arr[mid] < k)//之后和相求的数 进行比较
//			             //说明要找的数在右边
//		{
//			left = mid + 1;//左下标被调整
//		}
//		
//		else if (arr[mid] > k)//说明要找的数在左边
//		{
//			right = mid - 1;//否则是右下标被调整
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;//找到了就不用在循环了
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//4.多个字符从两端移动，向中间汇聚
//假如说想在屏幕上打印   welcome to bit !!!!!!!
//打出来的步骤是

//#######################
//w#####################!
//we###################!!
//wel#################!!!  以此类推
//welcome to bit !!!!!!!！
//直到全部漏出来

//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!!!";//首先必须得有两个数组arr
//	char arr2[] = "#######################";
//
//	int left = 0;
//	int right = strlen(arr1)-1; //strlen求字符长度
//	                            //strlen(arr1)-1  求的是最后一个！的下标
//	// 如果求
//	//把w拿下来放在第一个#  //把arr1 放到 arr2
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	left++;
//	right--;
//	return 0;
//}


//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!!!";//首先必须得有两个数组arr
//	char arr2[] = "#######################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1; //strlen求字符长度
//								//strlen(arr1)-1  求的是最后一个！的下标
//								
//	while (left<=right)//如果还有元素要往下那  条件就是left<=right
//	{
//		// 如果求
//		//把w拿下来放在第一个#  //把arr1 放到 arr2
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //Sleep函数 单位是毫秒  1000毫秒就是1秒  作用是休眠一秒 动态的显示
//		             //加了Sleep 是 一行一行显示
//		system("cls");//执行一个指令 ---清空屏幕
//		               //作用是 只有一行  w#####################!   两边往中间走
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5.模拟用户登录 ，只允许登陆三次。（只允许输入三次密码，如果密码正确则提示登陆成功）
//三次都错误，则退出程序

//
//#include<string.h>
//strlen    求字符串长度
//strcmp  （字符串比较函数）专门用来比较字符块
//都属于字符串函数
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串“123456”
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);//把内容读取放到password
//		//if (password == "123456")//判断密码是否正确
//			//这样的写法是错误的。 两个字符串比较，不能使用==  
//			//应该使用strcmp（字符串比较函数）专门用来比较字符块
//		   //password前面没加& 因为是字符数组  字符数组如果没加[]那么本身就是地址
//		if(strcmp(password,"123456") == 0)
//			//把password,"123456"同时传给strcmp
//			// strcmp就会把password和123456 比较一下
//			//如果strcmp发现password和123456 相等 就说明密码输对了
//			//函数strcmp 就会返回一个0 如果判断返回值=0  那么就是密码输对了
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	//当i=3  三次密码都输错了 也会跳到这
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//
//	return 0;
//}

//12/26  练习题
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//之后i++ 变成6 <10 又进来了
//	{
//		if (i = 5)//一个=是赋值 i等于5  然后打印一个5 上去
//			//又赋值成5 有打印  循环了起来  因为乍一看是循环10次  但是
//			//每次进来都是 i都被赋值成5  之后上去i++  变成六 没有机会 达到10
//			printf("%d", i);
//	}
//	return 0;
//}//死循环打印5


//第二题
//int func(int a)
//{
//	int b;//b没有赋值 
//	switch (a)//func(1)就是a是1 也就是从case1进去
//	{
//	case 1:b = 30;//进来之后 b=30 因为没有break 所以底下的case都要执行
//	case 2:b = 20;
//	case3:b = 16;
//	default:b = 0;//一直到这  然后switch语句结束 跳出  结果也就是0
//	}
//	return b;
//}
//
////func(1)= 0
//
//int main()
//{
//	printf("%d\n", func(1));
//
//	return 0;
//}

//F10 ---逐语句
//F11 ---逐过程

//第三题
//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) //x=3 3%2 余1 所以
//	{
//	case 1://从case1 进去
//		switch (y)//y=3 所以不会进case 0 和case 1
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");//那么就会打印hello  之后嵌套的switch语句就结束了
//		}
//	case 2://因为大的case 1后面没有出现break 所以case 2 也会执行
//		printf("third");
//	}
//	return 0;
//}//最终打印出来 hello  和 third


//编程题
//将三个代码从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入数据
//	scanf("%d%d%d", &a, &b, &c);
//
//	//调整顺序--保证a是最大 c最小
//	if (a < b)//a和b中的较大值
//	{
//		int tmp = a;
//		a = b;//a里面放b
//		b = tmp;
//	}
//	if (a < c)//把a和c中较大值放到a中
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//从大到小 输出
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//输入数据
	scanf("%d%d%d", &a, &b, &c);//从小到大
	if (a > b)
	{
		int tmp = a;
		a = b;//a里面放b
		b = tmp;
	}
	if (a > c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	
	printf("%d%d%d\n", a, b, c);
	return 0;
}