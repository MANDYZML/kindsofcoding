#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//静态的版本
//void InitContact(Contact* pc)//pc指向con  con有两个成员 data sz
//{
//	assert(pc);
//	pc->sz = 0;//找到指向的里面的对象 初始化
//	memset(pc->data, 0, sizeof(pc->data));//data拿到的是数组名 首元素地址
//	//sizeof(pc->data) sizeof(数组名) 能计算整个数组的大小 单位是多少字节
//		//之后把整个数组都初始化成0
//}

//动态的版本
//void InitContact(Contact* pc)//pc指向con  con有两个成员 data sz
//{
//	assert(pc);
//	pc->sz = 0;//找到指向的里面的对象 初始化
//	pc->capacity = DEFAULT_SZ;
//	pc->data = (PeoInfo*)malloc(pc->capacity * sizeof(PeoInfo));
//	//3* 一个人的信息=等于第一次开辟3个人的信息字节个数
//
//	if (pc->data == NULL)//说明空间开辟失败了
//	{
//		perror("InitContact::malloc");
//		return;
//	}
//	memset(pc->data, 0, pc->capacity * sizeof(PeoInfo));
//	//从data开始向后pc->capacity * sizeof(PeoInfo) 这么多个字节都初始化成0
//}
void CheckCapacity(Contact* pc)
{
	//增容代码
	if (pc->sz == pc->capacity)//需要考虑增容
	{
		PeoInfo* tmp = (PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo));
		//(pc->capacity + 2) * sizeof(PeoInfo) 元素个数+2 * 每个元素大小=总大小
		if (tmp != NULL)//说明容量调整成功
		{
			pc->data = tmp;
		}
		else//增容失败
		{
			perror("CheckCapacity::realloc");
			return;
		}
		pc->capacity += 2;//容量也增加2
		printf("增容成功\n");
	}

}
//初始化通讯录--文件的版本
void LoadContact(Contact* pc)
{
	//打开文件
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//读文件
	PeoInfo tmp = { 0 };
	while (fread(&tmp,sizeof(PeoInfo),1,pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;//读一个信息就放到tmp
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}
void InitContact(Contact* pc)//pc指向con  con有两个成员 data sz
{
	assert(pc);
	pc->sz = 0;//找到指向的里面的对象 初始化
	pc->capacity = DEFAULT_SZ;
	pc->data = (PeoInfo*)malloc(pc->capacity * sizeof(PeoInfo));
	//3* 一个人的信息=等于第一次开辟3个人的信息字节个数

	if (pc->data == NULL)//说明空间开辟失败了
	{
		perror("InitContact::malloc");
		return;
	}
	memset(pc->data, 0, pc->capacity * sizeof(PeoInfo));
	//从data开始向后pc->capacity * sizeof(PeoInfo) 这么多个字节都初始化成0

	//加载文件信息到通讯录中
	LoadContact(pc);
}

//销毁通讯录
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	printf("销毁成功\n");
}

void AddContact(Contact* pc)
{
	assert(pc);
	//静态的版本
	//if (pc->sz == MAX)//也就是已经放了最大了 1000个 放不了更多的了
	//{
	//	printf("通讯录已满，无法添加\n");
	//	return;
	//}
	
	//动态的版本
	CheckCapacity(pc);
	
	//录入信息
	printf("请输入名字:>");//name是数组 数组名本来就是地址  不需要取地址
	scanf("%s", pc->data[pc->sz].name);//把名字放到通讯录的sz作为下标的data数组元素上 
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话号码:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;//输完一个人的信息 sz就要记录一次
	printf("添加成功\n");
}

void PrintContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s %-5s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");//打印标题
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-5d %-5s %-12s %-30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

//找到返回下标  找不到返回-1
int FindByName(const Contact* pc,char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))//两个字符串 进行比较
		{
			return i;
		}
	}
	//找不到下标
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)//通讯录里没有元素了
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	//删除
	//1.找到要删除的人
	char name[NAME_MAX] = { 0 };
	printf("请输入要删除人的名字;>");
	scanf("%s", name);
	int pos = FindByName(pc, name);//在pc所指向的通讯录里通过名字来找
	//找到了返回下标 --pos
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除
	int j = 0;
	for (j = pos; j < pc->sz-1; j++)//pos是要被删除的位置
	{
		pc->data[j] = pc->data[j + 1];//因为删除j的位置 所以后面的覆盖到这个位置
	}
	pc->sz--;//删除以后 元素个数也在减少
	printf("删除成功\n");
}

void SearchContact(const Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找人的名字;>");
	scanf("%s", name);
	int pos = FindByName(pc, name);//在pc所指向的通讯录里通过名字来找
	//找到了返回下标 --pos
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	printf("%-20s %-5s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");//打印标题
	printf("%-20s %-5d %-5s %-12s %-30s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);

}

void SaveContact(const Contact* pc)
{
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}
	//写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data+i,sizeof(PeoInfo),1,pf);//写到pf
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}