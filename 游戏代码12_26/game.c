#define _CRT_SECURE_NO_WARNINGS 1

//��������Ϸʵ��
// �����߼�
//1.���Զ�����1-100�������
//2.Ȼ�������
//  ����ڲµĹ����в¶���--�� ��ϲ�㣬��Ϸ����
//  ����´�--����� �´��˻��ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸ����һֱ��  �����˳���Ϸ


//#include <stdlib.h>
//#include <time.h>
////����ѡ��  һ����ʼ��Ϸ  һ���˳���Ϸ
//void menu()
//{
//	printf("******************************\n");
//	printf("********  1.play   ***********\n");
//	printf("********  0.exit   ***********\n");
//	printf("******************************\n");
//}
//
////time_t
//void game()
//{
//	//��������Ϸ��ʵ��
//	//1.���������
//	 //rand ����������0-32767֮�������
//	 //���Ե�   ʱ�䣨�����仯��---ʱ���
//
//
//	 //srand((unsigned int)time(NULL)); д������Ļ�  ������������
//	 //������������� ֻ��Ҫ����һ�ξͿ�����
//
//	int ret = rand()%100 + 1;//rand֮ǰ��Ҫ����srand  game�ڵ��� ����ȷʵ����rand֮ǰ
//						 //%100��������0-99  Ȼ��+1 ��Χ����1-100
//	//printf("%d\n", ret); //�����־Ͳ��ܴ�ӡ����
//
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);//�µ�����Ҫ������  guess ���ǲµ�ֵ
//		//���µ�ֵ�ŵ�guess�����  ���бȽ�
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//������Ҫһ�������
//	 //time �⺯�� �᷵��һ��ʱ���  ���ú�����ʱ���ͼ��������ʼʱ���ʱ���
//	//NULL--����ֵ
//	//srand  ��Ҫ����unsigned int ���͵�ֵ  ���԰�timeǿ��ת����unsigned int����
//	//�ŵ��������� �κ���һ���� �����������
//
//	do
//	{
//		menu();//��ӡ�˵�---menu����
//		printf("��ѡ��:>");
//		scanf("%d", &input);//inputѡֵ ������1 0 ����������
//		switch (input)//���������ֵ�����ж�
//		{
//		case 1:
//			game();//game����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default://����Ĳ���1����0
//			printf("ѡ�����,����ѡ��\n");
//			break;
//		}
//	} while (input);//�����switch��������� ����������ж�
//	return 0;
//}

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************************\n");
	printf("********  1.play   ***********\n");
	printf("********  0.exit   ***********\n");
	printf("******************************\n");
}

void game()
{
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret); 
//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}