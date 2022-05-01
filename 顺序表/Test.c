#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"


//β��
void TestSeqList1()
{
	SL sl;//sl��˳���
	SLInit(&sl);//ʵ�δ����β� ��ַ����
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);

	SLPushBack(&sl, 5);
	SLPrint(&sl);

	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPrint(&sl);
}

//ͷ��
void TestSeqList2()
{
	SL sl;//sl��˳���
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPushFront(&sl, 5);
	SLPushFront(&sl, 5);
	SLPushFront(&sl, 5);
	SLPushFront(&sl, 5);
	SLPrint(&sl);
}


//βɾ -- ��������
void TestSeqList3()
{
	//��ͷ���뼸������
	SL sl;//sl��˳���
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPrint(&sl);
	//54321-> 5432

	SLDestory(&sl);//ֻҪ���������� �а׿� �ʹ����Խ��
}

//ͷɾ
void TestSeqList4()
{
	SL sl;//sl��˳���
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPopFront(&sl);
	SLPrint(&sl);
}
//ĳ���������
void TestSeqList5()
{
	SL sl;//sl��˳���
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLInsert(&sl, 3, 40);//ͷ��  ����������λ�ò���һ��40
	SLPrint(&sl);
	SLInsert(&sl, 0, 40);
	SLPrint(&sl);

	SLDestory(&sl);
}

//ĳ������ɾ��
void TestSeqList6()
{
	SL sl;//sl��˳���
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLErase(&sl, 2);//ɾ���ڶ���λ��
	SLPrint(&sl);
	SLErase(&sl, 0);
	SLPrint(&sl);
	SLErase(&sl, 2);
	SLPrint(&sl);

	//ͷɾ
	SLPopFront(&sl);
	SLPrint(&sl);
	//βɾ
	SLPopBack(&sl);
	SLPrint(&sl);
}

//����
void TestSeqList7()
{
	SL sl;//sl��˳���
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	//ɾ��һ��
	//int x = 0;
	//printf("��������Ҫɾ����ֵ:");
	//scanf("%d", &x);
	//int pos = SLFind(&sl, x);//��3
	//if (pos != -1)//�����ҵ���
	//{
	//	SLErase(&sl, pos);//�ҵ�3 ��3ɾ��
	//}
	//else
	//{
	//	printf("û���ҵ�:%d\n", x);

	//}
	//SLPrint(&sl);

	//ɾ����������� ���������
	int x = 0;
	printf("��������Ҫɾ����ֵ:");
	scanf("%d", &x);
	int pos = SLFind(&sl, x);
	while (pos != -1)
	{
		SLErase(&sl, pos);//һֱɾ

		pos = SLFind(&sl, x);//���� ֱ���Ҳ���
	}
	SLPrint(&sl);

	int y, z;
	printf("��������Ҫ�޸ĵ�ֵ���޸ĺ��ֵ:");
	scanf("%d%d", &y, &z);
	pos = SLFind(&sl, y);//��3
	if (pos != -1)//�����ҵ���
	{
		SLModify(&sl, pos,z);//�ҵ�y �ĳ�z
	}
	else//��һ�޸ĵ�ֵ����
	{
		printf("û���ҵ�:%d\n", y);

	}
	SLPrint(&sl);
}
//int main()
//{
//	TestSeqList7();
//
//	return 0;
//}

void menu()
{
	printf("********************************\n");
	printf("*****  1.β��   2.ͷ��   *******\n");
	printf("*****  3.����   4.ɾ��   *******\n");
	printf("*****  5.�޸�   6.��ӡ   *******\n");
	printf("***** -1.�˳�            *******\n");
	printf("********************************\n");
}

int main()
{
	//����˳���
	SL sl;
	SLInit(&sl);//��ʼ��

	int option = -1;
	do
	{
		menu();
		if (scanf("%d", &option) == EOF)
		{
			//printf("�����������������\n");
			//continue;//����һ�»�����

			printf("scanf�������\n"); 
			break;
		}
		int val, pos;
		int y, z;

		switch (option)
		{
		case 1:
			printf("������������Ҫβ������ݣ���0����:>");
			scanf("%d", &val);
			while (val != 0)//����������ֵ
			{
				SLPushBack(&sl, val);
				scanf("%d", &val);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			printf("��������Ҫ�޸ĵ�ֵ���޸ĺ��ֵ:");
			scanf("%d%d", &y, &z);
			pos = SLFind(&sl, y);//��3
			if (pos != -1)//�����ҵ���
			{
				SLModify(&sl, pos, z);//�ҵ�y �ĳ�z
			}
			else//��һ�޸ĵ�ֵ����
			{
				printf("û���ҵ�:%d\n", y);

			}
			break;
		case 6:
			SLPrint(&sl);
			break;
		case 7:
			break;
		case 8:
			break;

		default: 
			//scanf  ������%d 
			//������û�����ͣ�����˵��������ĸ
			printf("�����������������\n");
			break;
		}

	} while (option != -1);
	
	SLDestory(&sl);

	return 0;
}

