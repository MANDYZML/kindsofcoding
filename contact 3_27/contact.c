#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void InitContact(Contact* pc)//pcָ��con  con��������Ա data sz
{
	assert(pc);
	pc->sz = 0;//�ҵ�ָ�������Ķ��� ��ʼ��
	memset(pc->data, 0, sizeof(pc->data));//data�õ����������� ��Ԫ�ص�ַ
	//sizeof(pc->data) sizeof(������) �ܼ�����������Ĵ�С ��λ�Ƕ����ֽ�
		//֮����������鶼��ʼ����0
}


void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)//Ҳ�����Ѿ���������� 1000�� �Ų��˸������
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	//¼����Ϣ
	printf("����������:>");//name������ �������������ǵ�ַ  ����Ҫȡ��ַ
	scanf("%s", pc->data[pc->sz].name);//�����ַŵ�ͨѶ¼��sz��Ϊ�±��data����Ԫ���� 
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰����:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;//����һ���˵���Ϣ sz��Ҫ��¼һ��
	printf("��ӳɹ�\n");
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