#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//ʵ��
void init_board(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;//��ʼ����'0' ����'*'
		}

	}
}

//��ӡ11*11�ĸ�  �������д�1��ʼ  ����9*9
void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------ɨ��-----------\n");
	for (i = 0; i <= col; i++)//��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		//��һ��
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-----------ɨ��-----------\n");
}


//ʵ��  ������-10��
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;//��������
	int y = 0;
	//��������������׵�����
	while (count)
	{
		//����1-9��ֵ
		x = rand() % row+1;//���row=9  %row ��������0-8��ֵ +1 ��������1-9��ֵ
		y = rand() % col+1;//һ��
		if (mine[x][y] == '0')//==0 ˵��������껹û����
		{
			mine[x][y] = '1';//������
			count--;//������һ���ף��׵�������--һ��
		}
		//���if ������1 ˵���������֮ǰ�Ѿ����ù�����
		//��ô�Ͳ������if��� countû�仯����ȥ��������������
		//ѭ�����Ĵ��� >= �����׵Ĵ���
	}
}

get_mine_count(char mine[ROWS][COLS],int x,int y)//��mine�������� �����������Χ��8������
{
	return mine[x - 1][y] + 
		mine[x - 1][y - 1] + 
		mine[x][y - 1] + 
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] + 
		mine[x - 1][y + 1]-8*'0';
}

//�Ų���ʵ��
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-EASY_COUNT)//9*9= 81-10 = 71
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);
		//�ж�����ϲ��Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')//˵��9*9�������� �����������
			{
			//���ף���ը����
				printf("���ź�����ը����\n");
				show_board(mine, ROW, COL);//��ӡ�׵��������������ô����
				break;
			}
			else//���λ�ò����ף���¼����Χ�˸������м�����
			{
				int count = get_mine_count(mine,x,y);
				show[x][y] = count + '0';//������Χ��1���ף����Ų鵽���׷ŵ�show������
				//count = '0'  Ҳ���Ǹ�����1
				//�Ų���֮����ȥ�����Ų�
				show_board(show, ROW, COL);//���������Ų����ʾһ�¸�����Ϣ
				win++;
			}
		}
		else
		{
			printf("����Ƿ�����������\n");
		}
	}
	if (win == row * col - EASY_COUNT)//win==71  ˵�����׳ɹ���
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		show_board(mine, ROW, COL);
	}
}