#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"//�Լ�д��ͷ�ļ���˫����



void menu()
{
	printf("**************************\n");
	printf("***1.add     2.del    ****\n");
	printf("***3.search  4.modify ****\n");
	printf("***5.sort    6.print  ****\n");
	printf("***0.exit             ****\n");
	printf("**************************\n");

}

void test()
{
	int input = 0;
	//����ͨѶ¼  ������ܽ�����ɾ���
	Contact con;//ͨѶ¼ con�����������data  ����sz

	//��ʼ��ͨѶ¼
	InitContact(&con);//��Ϊ��ʼ��Ҫ�ı�con��ֵ

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD: //��дcase 1�ɶ���������
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			SaveContact(&con);//�ȱ������ͨѶ¼
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

}
int main()
{


	test();
	return 0;
}