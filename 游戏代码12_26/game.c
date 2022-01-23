#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//��ʼ������ ȫ��ո�
void InitBoard(char board[ROW][COL], int row, int col)//char ��������  ��  ��
{
    int i = 0;
   for (i = 0; i < row; i++)
   {
	int j = 0;
	  for (j = 0; j < col; j++)
	  {
		board[i][j] = ' ';//�Ź����� ��ʼ���ɿո�

	  }
   }
}

//��ӡ����
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%c", board[i][j]);//��ӡһ��
//		}
//		printf("\n");//����
//	}
//}

//���д����  �����10*10 �Ͳ�����
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)//��ӡ����
//	{
//		//һ�����ݴ�ӡ--���ݺͷָ���
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//��ӡ�ָ���
//		if(i<row-1)
//			printf("---|---|---\n");
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//��ӡ����
	{
		//һ�����ݴ�ӡ      --���ݺͷָ���
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j < col - 1)
			printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
			
	}
}

//������� --ʵ��
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������\n");
	printf("����������:>");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			//�ж������������û�б�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

//��������--ʵ��
void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������:>\n");
	while (1)//��������µ����� ����������  ��������������
		//������ѭ��
	{
		//���������--��������
		x = rand() % row;//0-2��Χ
		y = rand() % col;//0-2

		//�ж����������û���¹���
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//��������
			break;
		}
	
	}
}


//�ж���Ӯ����--ʵ��   ���Ƕ������ϵ�λ�ý����ж�
static int if_full(char board[ROW][COL], int row, int col)//ֻ��Ϊ�ˣ�is_win �������ж���Ӯ ���÷ŵ�ͷ�ļ�����
//ֻ�ڱ��ļ���ʹ�þ���
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//�жϵȲ����� �ո�
			{
			//���������пո�--��˵����û����
				return 0;//˵��û��
			}
		}
	}
	return 1;//˵������
}
//�У��У�--���� �Խ��� --����
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		//һ������ ����Ԫ��
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			//һ������Ԫ����� ��һ�������ڿո� ʣ������Ҳ�����ڿո�
			//�Ǿ�������Ӯ�� �ж���ʲô�ַ�
		{
			return board[i][1];//�����ַ�һ�����жϲ�����һ������
		}
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		//һ������ ����Ԫ��
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			//һ������Ԫ����� ��һ�������ڿո� ʣ������Ҳ�����ڿո�
			//�Ǿ�������Ӯ�� �ж���ʲô�ַ�
		{
			return board[1][i];//�����ַ�һ�����жϲ�����һ������
		}
	}
	//�Խ���-- �����ϵ����µĶԽ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
	//�������Ӯ��
		return board[1][1];
	}
	//�Խ���--���ϵ�����
	if (board[0][2] == board[1][1] && board[2][0] == board[2][2] && board[1][1] != ' ')
	{
		//�������Ӯ��
		return board[1][1];
	}

	//������������û���� --û��Ӯ������£��������Ѿ�û�п���λ����
	//�ж�ƽ��--�ж�������û�пո�
	if (if_full(board, row, col) == 1)//�������1���Ƕ�����
	{
		return 'Q';  
	}

	//��Ϸ����-��������������
	return 'C';

}