
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
//1.将三个代码从大到小输出

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
//		int tmp = a; //把较大值放a  所以写a
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

//从小到大输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入数据
//	scanf("%d%d%d", &a, &b, &c);//从小到大
//	if (a > b)
//	{
//		int tmp = a;//较小值放a里面 所以写a
//		a = b;//a里面放b
//		b = tmp;
//	}
//	if (a > c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//2.打印3的倍数
//打印1-100之间所有3的倍数的数字

//用for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//	//判断 i是否为3的倍数
//		if (i % 3 == 0)//整除3
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//不判断
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//			printf("%d ", i);//先打印3 然后+=变成6
//	}
//	return 0;
//}

//用while
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if(i%3==0)
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//3.最大公约数
//给定两个数  求这两个数的最大公约数

//第一种算法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", & m,& n);//比如m=24  n=18  找出那个数字能同时被18和24整除
//	int max = 0;//设最大公约数为max
//
//	//假设最大公约数就是m和n的较小值
//
//	if (m > n)//最大的公约数中最大能被mn整除 的就是m和n中的较小值
//		max = n;//较小值是n
//	else
//		max = m;//m和n  的较小值放到max
//
//	//先把m和n的最小值 放到max里然后 先试着除 来判断最大公约数是不是mn的最小值
//	//如果不是 那么max--  减到能同时被 m n 整除
//
//	//那究竟是不是呢--进行判断  max能不能同时整除m和n
//	while (1)//1为真  让他一直循环
//	{
//		if (m % max == 0 && n % max == 0)
//			//如果m和n 同时整除以最大公约数（max）=0  那么最大公约数就是max
//		{
//			printf("最大公约数就是:%d\n", max);
//			break;//如果能整除  就跳出循环
//		}
//		//如果不能整除 
//		max--;//-1以后接着算 上去 1为真  又进来 接着判断能否整除m和n
//		      //直到找出最大公约数
//	}
//	return 0;
//}

//第二种算法--辗转相除法

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//举例子 m=24 n=18
//	int t = 0;
//	while (m%n)//m%n 不等于0 就进来  //24 18  结果是6  进来
//	{
//		t = m % n;//把6 存到t
//		m = n;
//		n = t;
//		//当有新的m n 再上去 m%n
//		//结果为0 后 就不进来了
//	}
//	printf("最大公约数:%d\n", n);
//
//	return 0;
//}


//最小公倍数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int min = 0;
//	//假设mn最小公倍数 是mn中较大值
//	if (m > n)
//		min = m;
//	else
//		min = n;
//	while (1)
//	{
//		if (min % n == 0 && min % m==0)
//		{
//			printf("最小公倍数：%d\n",min);
//			break;
//		}
//		min++;
//	}
//
//	return 0;
//}

//最大公约数 最小公倍数（另一种方法） 一起求
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", & m,& n);//比如m=24  n=18  找出那个数字能同时被18和24整除
//	int max = 0;//设最大公约数为max
//	int min = 0;
//	//假设最大公约数就是m和n的较小值
//
//	if (m > n)//最大的公约数中最大能被mn整除 的就是m和n中的较小值
//		max = n;//较小值是n
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数就是:%d\n", max);
//			break;
//		}
//		
//		max--;
//		
//	}
//	while (1)
//	{
//		if (min = m * n / max)
//		{
//			printf("最小公倍数:%d\n", min);
//			break;
//		}
//	}
//
//	return 0;
//}

//4.打印闰年
//打印1000年到2000年之间的闰年
//int main()
//{
//	int y = 0;
//	int count = 0;//count 计算总数 的意思
//	for (y = 1000; y <= 2000; y++)
//	{
//	//判断y是不是闰年
//    //闰年判断规则
//	//1.被4整除 不能被100整除 是闰年
//	//2.能被400整除 是闰年
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount =%d\n", count);
//	return 0;
//}

//第二种算法
//int main()
//{
//	int y = 0;
//	int count = 0;//count 计算总数 的意思
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//闰年判断规则
//		//1.被4整除 不能被100整除 是闰年
//		//2.能被400整除 是闰年
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (((y%4==0) && (y%100 !=0)) || (y%400==0))//  ||--或者
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount =%d\n", count);
//	return 0;
//}


//5.打印素数
//打印100-200之间的素数
// 素数-质数 --只能被1和它本身整除
//素数的判断

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//	//判断i是否为素数
//     //2->i-1之间的数字去试除i  看能不能整除
//	//如果2->i-1之间的数字  有一个数字能整除i  那么就说明i不是素数
//		//那么怎么产生2->i-1之间的数字呢
//		int j = 0;
//		for (j = 2; j < i; j++)//这个过程中j所产生的每一个数字都在2->i-1之间
//	//比如i=100 进来后 要拿2-99的数字去除i 看看i是不是素数，能不能被整除
//	//  当i++  i=101 进来后 就要拿2=100的数字  除i
//			//所以j就是i-1
//		{
//			if (i % j == 0)
//			{
//				break;//说明i被j整除  i不是素数
//			}
//		}
//        //break 出来后  跳到这里
//		//两种情况  跳到这里
//		//1.i不是素数
//		//2. 不停的j++  直到j不小于i了（说明把2到i-1之间的数字都试除了一遍）说明i是素数
//
//		if (i == j)//不小于i  就是=i了
//		{
//			printf("%d ", i);//打印的是素数
//		}
//	}
//
//	return 0;
//}


//另一种写法
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				//如果被整除了
//				flag = 0;//说明i不是素数
//				break;//说明i被j整除  i不是素数
//			}
//		}
//		//break 出来后  跳到这里
//		//两种情况  跳到这里
//		//1.i不是素数
//		//2. 不停的j++  直到j不小于i了（说明把2到i-1之间的数字都试除了一遍）说明i是素数
//
//		if (flag == 1)//说明是素数
//		{
//			count++;
//			printf("%d ", i);//打印的是素数
//		}
//	}
//	printf("\ncount=%d\n", count);//打印素数一共有几个
//	return 0;
//}

//上一种方法的优化
//#include <math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//假如m有因子
//	//m =a*b
//	//那么a和b之间一定至少有一个数字是<= 开平方m的
//	//比如 m=16 16=2*8  4*4  16开平方是4
//	//所以在16开平方之前 如果能找到16能除以2 就没必要找到8了 因为已经知道不是素数了
//
//	//sqrt 开平方函数 
//	for (i = 100; i <= 200; i++)//sqrt 开平方的意思
////也可以for (i = 101; i <= 200; i+=2) //偶数不可能是素数  所以从把偶数都跳过去 101 103 105
//	{
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				//如果被整除了
//				flag = 0;//说明i不是素数
//				break;//说明i被j整除  i不是素数
//			}
//		}
//		//break 出来后  跳到这里
//		//两种情况  跳到这里
//		//1.i不是素数
//		//2. 不停的j++  直到j不小于i了（说明把2到i-1之间的数字都试除了一遍）说明i是素数
//
//		if (flag == 1)//说明是素数
//		{
//			count++;
//			printf("%d ", i);//打印的是素数
//		}
//	}
//	printf("\ncount=%d\n", count);//打印素数一共有几个
//	return 0;
//}


//12/31
//函数的调用--练习
//1. 写一个函数可以判断一个数是不是素数
//打印100-200之间的素数
//素数是 只能被1或者本身整除
//int is_prime(int n)//int n 来接受 i的值 i里面是100 以值传递给n  n也是100
//                   //is_prime 返回来是整型
//{
       //首先 判断n是不是素数  2-(n-1)之间的数字  试除
//	int j = 0;
//	for (j = 2; j < n; j++)//n%j
//	{
//		if (n % j == 0)//如果有n把j整除了 那么n绝对不是素数
//			return 0;
//	}
//	return 1;//在j之中 没有n能整除的数 所以就会一直j++  知道不满足j<n 跳出来到这
//	         //那么证明 n  一定是素数了
//}

//另一种写法--开平方
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)//n%j
//	{
//		if (n % j == 0)//如果有n把j整除了 那么n绝对不是素数
//			return 0;
//	}
//	return 1;//在j之中 没有n能整除的数 所以就会一直j++  知道不满足j<n 跳出来到这
//			 //那么证明 n  一定是素数了
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)//判断 是不是素数  的函数
//						  //如果i是素数  那么返回1  打印
//						  //如果为i=0  就不打印
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//2.写一个函数判断一年是不是闰年
//打印1000-2000年之间的闰年

//一个函数如果不写返回类型，默认返回int类型  但是如果想返回char float等类型  就错误了
/*int is_leap_year(int n)
{   
		if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
			return 1;
		else
	        return 0;
}*/ //上面那道题用到 for 是因为要创建一个被除以的数 j   而这道题不需要创建 因为直接除以4/100/400就行

//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}//这样也对

//is_leap_year如果判断是闰年 返回1  不是闰年 返回0
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)//判断 是不是闰年 的函数
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}


//3.写一个函数，实现一个整型有序数组的二分查找
//int binary_search(int a[],int k,int s)//数组来接收,k就是key，s就是sz
//{
//	int left = 0;
//	int right = s - 1;//元素有10个  最后一个下标是9
//	//根据左右下标求出中间下标
//	while (left<=right)//说明左下标和有下标中间是有元素的
//	{
//		int mid = (left + right) / 2;//0+9/2=4 也就是元素5
//		if (a[mid] > k)//那就是范围在5之前 1-4
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)//说明范围在5的右边
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//说明要找的数=中间值
//		}//这就是二分查找
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;//找 7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组的总大小40（4个字节，10个整型）/一个元素的大小 4个字节 =10个元素
//	
//	//binary_search();//查找二进制 帮助在arr中找到key
//	//找到了 就返回找到位置的下标
//	//找不到就返回-1
// 数组arr传参，实际传递的不是数组的本身
// 仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr,key,sz);// 找到下标返回到ret   ret 下标
//	//在数组arr 10个sz元素中 找到key
//	if (ret == -1)//说明找不到
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//这题是传址

//4.写一个函数，每调用一次这个函数，就会将num的值增加1

//void Add(int*p)
//{
//	(*p)++;//这增加  那么num也增加
//}
//
//int main()
//{
//
//	int num = 0;
//	Add(&num);//这个函数只要调用一次 num就增加1  说明add函数会改变num
//	           //函数内部想改变函数外部只能传地址
//	printf("%d\n", num); //打印1
//
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//
//	return 0;
//}
//这道题是传址


// 1/4--练习题讲解
// while(条件表达式)循环体   假设循环体里没break;continue go to语句等
//条件表达式的执行次数总是比循环体的执行次数多一次
//判断次数要比执行次数多一次
//int main()
//{
//	int i = 0;
//	//0-9 进循环判断 然后循环10次
//	//   当i++变成10以后 不满足跳进跳出  10也要判断一次
//	//总共判断了11次
//	for (i = 0; i < 10; i++)
//	{
//	//这里面判断了10次--
//	}
//	//不满足条件  又判断了一次   11次
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//		//首先a = 1, b = 1时初始数  进来
//		//a=2现在  //a=3
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)//b<20 所以进来
//			//1%3余1 所以b=4
//			//b=4 %3 又余1  
//			//b=7%3   余1  
//		{
//			b = b + 3; //所以b = 4   7  10  
//			continue;//跳过后面所有 又上去
//		}
//		b = b - 5;
//	}
//	//一直到a=8  b=22 b>20 跳出整个for循环 来到这
//	printf("%d\n", a);//打印出来a=8
//	return 0;
//}


//编程题        
//数9的个数
//编写程序数一下 1-100 的所有整数中出现了多少个数字9
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 ...99
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//个位为9  %10  余数为9 得到一位
//			count++;//统计个数
//		if (i / 10 == 9)//十位为9   用十位为9的/10 商9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//编程题
//分数求和
//计算1/1-1/2+1/3-1/4+1/5....+1/100的值，打印出结果
//想让结果出小数 就要/两边有一边是小数
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//sum就是全部相加起来
//	             //改成1.0/1 之后还是有问题是因为sum不对
//	             //把int改成double
//
//	for (i = 1; i <= 100; i++)//i就是分母
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / 1;
//		//就是每一项
//		//1/i是整数除法  所以1/1=1 
//		// 但是1/2！=0.5 商0余1 剩下的也都是0
//		// 最后sum加一块的结果就是1  
//		//所以代码有问题
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf\n", sum);//和double 一起 双精度浮点数
//	return 0;
//}

//另一种写法
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//sum就是全部相加起来
//				 //改成1.0/1 之后还是有问题是因为sum不对
//				 //把int改成double
//	int flag = 1;
//	for (i = 1; i <= 100; i++)//i就是分母
//	{	
//			sum += flag*1.0 / i;//先1.0 / i 算出一个数字 之后*flag 
//			                   //相当于*1 乘以一个正数  然后加上去
//			flag = -flag; //如果flag是1 到这就变成-1 
//			             //如果乘以-1 加上 相当于-了个正数 那么负数在负 就变成了负数
//			            //这样flag就能一直变1  -1 1  -1  加减交替
//	}
//	printf("%lf\n", sum);//和double 一起 双精度浮点数
//	return 0;
//}


//编程题
//求最大值
//求10个整数中最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];//十次比较之后，max里面就是最大值
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}//这个代码 如果数都是负数就不行了 不比max大了

//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//这里不能假设为零
//	int i = 0;//数组里的元素
//	for (i = 1; i < 10; i++)//剩下的九个元素和max进行比较
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];//十次比较之后，max里面就是最大值
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//编程题
//乘法口诀表
//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4    //开头的123 是第一行第二行  *1 *2 *3  是第一列第二列
//3*1=3  2*3=6 3*3=9
//...
//九九乘法表 打印九行
//#include<stdio.h>
//int main()
//{
//	int i = 0;//行
//	//行数 --控制打印几行 --打印九行
//	int j = 0;//列
//	for (i = 1; i <= 9; i++)
//	{
//	//打印一行--一行打印几项    行是几就打印几项
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j,i, i * j);
//		}//这个循环 循环几次就答应几项
//		//%2d 是 每个结果都打印两位 不够的话 用空格填充  右对齐
//		//%-2d  左对齐
//		printf("\n"); //上面是打印一行 的几项  打印完后要换行
//	}
//	return 0;
//}


//复合语句中 定义的变量在本函数范围内有效
//这个说法是错误的
//void test()
//{
//	{
//	//复合语句
//		int a = 10;
//		//a变量的使用只有这个括号内可以
//	}
//	printf("%d\n",a);//error
//	//上面的变量 这里使用不了
//}
//int main()
//{
//
//	return 0;
//}



//能把函数处理结果的两个数据返回给主函数
//1.return 不行--一次只能返回一个值
//2.形参用数组 是可以返回两个值
//3.形参用两个指针 也可以 如果形参用指针 那么外边应该把两个变量的地址传过去
//  通过形参的指针 可以把值带回来
// 4.用两个全局变量
// 
//void test(int arr[])//用数组来接收
//{
//	arr[0] = 1;
//	arr[1] = 2;
//	//return 1, 2;//不对
//}//return 只能一次返回一个数字
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);//把数组传过去
//
//	return 0;
//}


//用指针例子
//void test(int *p1 ,int*p2)//形参用指针   p1-a  p2--b
//{
//	*p1 = 1;
//	*p2 = 2;
//}//return 只能一次返回一个数字
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a,&b);//传地址
//
//	return 0;
//}

//用全局变量例子

//int a = 0;
//int b = 0;
// 声明的话 
//int a;
//int b;
//void test(int* p1, int* p2)//形参用指针   p1-a  p2--b
//{
//	a = 1;
//	b = 2;
//	
//}

//int a = 0;
//int b = 0;
//如果把变量写在这里  前面就得声明

//int main()
//{
//	
//	test();
//
//	return 0;
//}

//函数调用   这个函数实参个数有几个
//(v1, v2) 算一对 结果产生一个值
//逗号表达式-会从左到右依次计算，整个表达式的结果 是最后一个表达式的结果 --v2
//exec( (v1, v2), (v3, v4), v5, v6);
//         v2        v4    v5   v6   4个参数


//编程题
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如 输入9 输出9*9的口诀表   输出12 输出12*12的乘法口诀表
//1*1=1 
//2*1=2  2*2=4
//3*1=3  3*2=6  3*3=9
//第一行有一项  第二行有两项  第n行就有n项
//#include<stdio.h>
//
//void print_table(int n)
//{
//	int i = 0;
//	//行
//	for (i = 1; i <= n; i++)//1-n行
//	{
//		//一行有几项
//		int j = 0;
//		for (j=1;j<=i;j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);//i行 j列 
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//几行几列   输入9
//	//写个函数
//	print_table(n);//打印乘法口诀表
//	//把n传过去--打印几行几列
//
//	//函数的起名是非常关键的，名字最好跟它的功能关联起来（体现函数的功能）
//	return 0;
//}

//1/9 函数作业
//根据下面递归函数，调用函数Fun(2),返回值是多少

//int Fun(int n)//Fun(2)上来调用 2传给了n    n==2
//{
//	if (n == 5)//n=5 才 return 2
//		return 2;
//	else  //所以走了else
//		return 2 * Fun(n + 1);//Fun(n + 1) 得去算 之后*2 才能返回一个值
//	//调用Fun(n + 1)   刚才n是2 现在+1就是3 又走了else
//	//又得算  调用Fun(n + 1) 刚才n=3 现在+1 n=4
//	//n不等于5 又走了else 调用Fun(n + 1) 现在n=5
//	//现在n=5  走if return 2
//	//但是return 2 返回的是  n=4的Fun(n + 1)==2 2*2=4
//	//然后接着返回  n=3的Fun(n + 1)=4  2*4=8
//	//return 在返回  n=2的Fun(n + 1)=8  2*8=16
//	// 因为函数Fun(2) 是从n=2的函数中调的 所以Fun(2) 的返回结果就是16
//
//}
//
//int main()
//{
//	printf("%d\n",Fun(2));//16
//	return 0;
//}


//编程题
//字符串逆序
//编写一个函数 reverse_string(char*string)--递归实现
//实现: 将参数字符串中的字符反向排列，不是逆序打印
//要求：不能使用C函数库中的字符串操作函数。
// /例如 char arr[]="abcdef"
//逆序之后数组变成 fedcba

//
//int my_strlen(char * str)//传过来指针str
//{
//	int count = 0;
//	while (*str != '\0')//*str str指向的内容   !0 说明找到了不是\0的字符
//	{
//		count++;
//		str++;//向后找一个字符
//	}//循环这个动作就是判断字符串的长度究竟有多少
//	return count;// 当*str=0 那么就不++了  返回count --里面就是字符串的长度
//}
//void reverse_string(char* str)//接收a的地址
////把 f a交换   e b 交换  d c 交换
////找下标 fedcba中 给left下标 找到f  给right下标  找到 a
////找到以后 就要找 e  b   然后 left++  right--
//{
//	int left = 0;
//	int right = my_strlen(str)-1;//my_strlen(str)-1 字符串的长度-1=最后一个字符的下标
//
//	while(left<right)
//	{
//		char tmp = str[left];//=*(str+left) 用指针的写法 //临时变量=left
//		*(str + left) = *(str + right);//进行交换  left 改成right
//		*(str + right) = tmp;//也就是把right变left
//		left++;
//		right--;
//	}
//}

//void reverse_string(char* str)//接收a的地址
//{
//	char tmp = *str;//1. 首元素 也就是 a  放到临时变量
//	int len = my_strlen(str);//找到后面的f  求字符块的总长度
//	*str = *(str + len - 1);//2. f的内容 len - 1 是f的下标   str + len - 1 找到str的地址
//							//*(str + len - 1) 就找到f 元素了
//						   //*str 要把f放到最前面--首元素
//	*(str + len - 1) = '\0';//3. 要在bcde后面放上\0  这样从b开始往后看的时候 只能看到bcde
//	//判断条件
//	//加上限制条件
//	if (my_strlen(str + 1) >= 2)//当交换的时候 中间留下来的字符快长度如果是0 或者1 没有必要再逆序了
//							//跳过f 从d开始算字符快 如果>=两个字符快 才逆序
//	{
//		reverse_string(str + 1);//4. 逆序 中间的bcde  str指向的f  str+1 就是b的地址
//	}
//
//	*(str + len - 1) = tmp;//5. 把a(tmp)的值放到最后面
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr 是数组arr首元素的地址-也就是a的地址
//	//把arr传过去    reverse_string--把arr的内容逆序
//	printf("%s\n", arr);//打印出来 fedcba
//	return 0;
//}



//用递归方式
//大事化小
// a b c d e f \0
//可以看成 a 和 f 的交换 + bcde的逆序
//然后 bcde的逆序 又可以看成  b e的交换 + c d 的逆序

//void reverse_string(char* str)//接收a的地址
//{
//	char tmp = *str;//1. 首元素 也就是 a  放到临时变量
//	int len = my_strlen(str);//找到后面的f  求字符块的总长度
//	*str = *(str + len - 1);//2. f的内容 len - 1 是f的下标   str + len - 1 找到str的地址
//	                        //*(str + len - 1) 就找到f 元素了
//	                       //*str 要把f放到最前面--首元素
//	*(str + len - 1) = '\0';//3. 要在bcde后面放上\0  这样从b开始往后看的时候 只能看到bcde
//	//判断条件
//	//加上限制条件
//	if (my_strlen(str+1)>=2)//当交换的时候 中间留下来的字符快长度如果是0 或者1 没有必要再逆序了
//		                    //跳过f 从d开始算字符快 如果>=两个字符快 才逆序
//	{
//		reverse_string(str + 1);//4. 逆序 中间的bcde  str指向的f  str+1 就是b的地址
//	}
//	*(str + len - 1) = tmp;//5. 把a(tmp)的值放到最后面
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr 是数组arr首元素的地址-也就是a的地址
//	//把arr传过去    reverse_string--把arr的内容逆序
//	printf("%s\n", arr);//打印出来 fedcba
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d\n", &x);
//	if (x < 0 && -10000<x)
//	{
//		printf("1\n");
//	}
//	else if(x > 0 && x<10000)
//	{
//		printf("-1\n");
//	}
//	else if(x == 0)
//	{
//		printf("0\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//
//{
//
//	int x = 0;
//
//	scanf("%d", &x);
//
//	if (x<0 && x>-10000)
//
//	{
//
//		printf("1\n");
//
//	}
//
//	else if (x > 0 && x < 10000)
//
//	{
//
//		printf("-1\n");
//
//	}
//
//	else if (x == 0)
//
//	{
//
//		printf("0\n");
//
//	}
//
//	else
//
//	{
//
//		printf("错误\n");
//
//	}
//
//	return 0;
//
//}
//#include <stdio.h>
// int main()
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

//#include<stdio.h>
//int main()
//{
//	int a, i;
//	a = 6;
//	for (i = 1; i <= 3;i++)
//		printf("%d", a);
//	return 0;
//}

