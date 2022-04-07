#pragma once

#include <string.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//类型的声明
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

//通讯录初始容量大小
#define DEFAULT_SZ 3;

enum Option
{
	EXIT,//0  枚举依次往下+1
	ADD,//结合底下的菜单选项  1
	DEL,//2
	SEARCH,
	MODIFY,
	SORT,
	PRINT

};

typedef struct PeoInfo//一个人的信息
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//静态的版本
//typedef struct Contact//通讯录的结构体
//{
//	PeoInfo data[MAX];//可以存储1000个人的信息 
//	int sz;//记录通讯录已经保存的人的信息个数
//}Contact;

//动态版本
typedef struct Contact//通讯录的结构体
{
	PeoInfo* data;//data所指向的空间动态开辟 
	int sz;//记录通讯录已经保存的人的信息个数
	int capacity;//记录通讯录当前的最大容量
}Contact;

//函数的声明
//初始化通讯录
void InitContact(Contact* pc);

//销毁通讯录--释放空间
void DestroyContact(Contact* pc);

//增加联系人的信息
void AddContact(Contact* pc);//&con传过来 指针接收

//打印通讯录中的信息
void PrintContact(const Contact* pc);//只打印不修改 所以+const

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(const Contact* pc);

//保存通讯录的信息到文件
void SaveContact(const Contact* pc);