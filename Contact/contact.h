#pragma once

#include <string.h>
#include<stdio.h>
#include<assert.h>

//���͵�����
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

enum Option
{
	EXIT,//0  ö����������+1
	ADD,//��ϵ��µĲ˵�ѡ��  1
	DEL,//2
	SEARCH,
	MODIFY,
	SORT,
	PRINT

};

typedef struct PeoInfo//һ���˵���Ϣ
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

typedef struct Contact//ͨѶ¼�Ľṹ��
{
	PeoInfo data[MAX];//���Դ洢1000���˵���Ϣ 
	int sz;//��¼ͨѶ¼�Ѿ�������˵���Ϣ����
}Contact;

//����������
//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ�˵���Ϣ
void AddContact(Contact* pc);//&con������ ָ�����

//��ӡͨѶ¼�е���Ϣ
void PrintContact(const Contact* pc);//ֻ��ӡ���޸� ����+const