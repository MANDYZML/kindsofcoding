#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void InitContact(Contact* pc)//pc指向con  con有两个成员 data sz
{
	assert(pc);
	pc->sz = 0;//找到指向的里面的对象 初始化
	memset(pc->data, 0, sizeof(pc->data));//data拿到的是数组名 首元素地址
	//sizeof(pc->data) sizeof(数组名) 能计算整个数组的大小 单位是多少字节
		//之后把整个数组都初始化成0
}


void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)//也就是已经放了最大了 1000个 放不了更多的了
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
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
	for (i = 0; i < pc->sz; i++)
	{
		printf("%s %d %s %s %s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}