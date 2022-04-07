#pragma once

#include <string.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//���͵�����
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

//ͨѶ¼��ʼ������С
#define DEFAULT_SZ 3;

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

//��̬�İ汾
//typedef struct Contact//ͨѶ¼�Ľṹ��
//{
//	PeoInfo data[MAX];//���Դ洢1000���˵���Ϣ 
//	int sz;//��¼ͨѶ¼�Ѿ�������˵���Ϣ����
//}Contact;

//��̬�汾
typedef struct Contact//ͨѶ¼�Ľṹ��
{
	PeoInfo* data;//data��ָ��Ŀռ䶯̬���� 
	int sz;//��¼ͨѶ¼�Ѿ�������˵���Ϣ����
	int capacity;//��¼ͨѶ¼��ǰ���������
}Contact;

//����������
//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//����ͨѶ¼--�ͷſռ�
void DestroyContact(Contact* pc);

//������ϵ�˵���Ϣ
void AddContact(Contact* pc);//&con������ ָ�����

//��ӡͨѶ¼�е���Ϣ
void PrintContact(const Contact* pc);//ֻ��ӡ���޸� ����+const

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(const Contact* pc);

//����ͨѶ¼����Ϣ���ļ�
void SaveContact(const Contact* pc);