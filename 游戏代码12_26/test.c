#define _CRT_SECURE_NO_WARNINGS 1

//����ʵ��
// ������������Ϸ���߼�--test.c
// game.c ��Ϸ��ʵ��
// game.h �������������ŵĶ���

//������

#include "game.h"
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");

}
void game()
{
	char ret = 0;//��Ϊ����* # ���ַ� ������ char
	//������������
	char board[ROW][COL] = { 0 };//�Ź���
	//��ʼ������-û����֮ǰ������Ϊȫ�ո�
	InitBoard(board,ROW,COL);//��ʼ������  ������,���м��д�����
    //��ӡ����
	DisplayBoard(board,ROW,COL);//��ӡ����
	while(1)//Ϊ����Һ͵���һֱ��-����ѭ��
	{
		//�������
		player_move(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ-�ж���Ӯ����-��������״������һ��
		ret = is_win(board, ROW, COL);//�ж��������жԽ�����û���������������
		//ret ���շ���ֵ
		if (ret != 'C')//��������Ӯ�˻�ƽ��-��Ϸ����
		{
			break;
		}

		//��������
		computer_move(board, ROW, COL);//�����������
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);//�ж��������жԽ�����û���������������
		//ret ���շ���ֵ
		if (ret != 'C')//���ж�-�Ƿ�����Ӯ
		{
			break;
		}
	}
	//��Ϸ����-break��������
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);//����Ӯ�ˣ��������ڴ�ӡ�Դ�
}

//��Ϸ������״��
//���Ӯ--'*'
//����Ӯ--'#'
//ƽ��--'Q'
//û������������� --��Ϸ����--'C'
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//Ҫ����randǰ���
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)//--�жϽ��ĸ�case
		{
		case 1:
			game();//��Ϸ��game������
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//����һ������ȥ������


}
int main()
{
	test();
	return 0;
}
