#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��������
//����--��ը���ˣ���Ϸ����
//������-�������������Χ8���������ܹ����ٸ���
//ֱ�������з��׵�λ��ȫ���ҳ�������Ϸ������ɨ�׳ɹ���

void menu()
{
	printf("*************************\n");
	printf("******  0.exit  *********\n");
	printf("******  1.play  *********\n");
	printf("*************************\n");

}

void game()
{
	//ɨ����Ϸ��ʵ��
	char mine[ROWS][COLS] = { 0 };//���úõ��׵���Ϣ�ĸ� ������ǰ����Ӧ�ö���'0'
	//mine ���� ������Ų��úõ��׵���Ϣ��
	char show[ROWS][COLS] = { 0 };//����Ϸ9*9�ĸ� ���涼��'*' ���涼��δ֪
	//show ��������������Ų���׵���Ϣ��
	 //��ʼ������
	init_board(mine,ROWS,COLS,'0');
	init_board(show,ROWS,COLS,'*');
	//��ӡ����
	//show_board(mine,ROW,COL);//�����ٿص���9*9������  //û���׵�����
	// ������
	set_mine(mine,ROW,COL);//�ŵ�9*9
	show_board(show, ROW, COL);//����*������
	//�Ų���
	find_mine(mine,show,ROW,COL);

}
int main()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
		printf("������:>");
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
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}