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
	printf("%-20s %-5s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");//��ӡ����
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-5d %-5s %-12s %-30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

//�ҵ������±�  �Ҳ�������-1
int FindByName(const Contact* pc,char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))//�����ַ��� ���бȽ�
		{
			return i;
		}
	}
	//�Ҳ����±�
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)//ͨѶ¼��û��Ԫ����
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	//ɾ��
	//1.�ҵ�Ҫɾ������
	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ���˵�����;>");
	scanf("%s", name);
	int pos = FindByName(pc, name);//��pc��ָ���ͨѶ¼��ͨ����������
	//�ҵ��˷����±� --pos
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2.ɾ��
	int j = 0;
	for (j = pos; j < pc->sz-1; j++)//pos��Ҫ��ɾ����λ��
	{
		pc->data[j] = pc->data[j + 1];//��Ϊɾ��j��λ�� ���Ժ���ĸ��ǵ����λ��
	}
	pc->sz--;//ɾ���Ժ� Ԫ�ظ���Ҳ�ڼ���
	printf("ɾ���ɹ�\n");
}

void SearchContact(const Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�����˵�����;>");
	scanf("%s", name);
	int pos = FindByName(pc, name);//��pc��ָ���ͨѶ¼��ͨ����������
	//�ҵ��˷����±� --pos
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("%-20s %-5s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");//��ӡ����
	printf("%-20s %-5d %-5s %-12s %-30s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);

}