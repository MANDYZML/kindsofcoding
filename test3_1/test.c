#define _CRT_SECURE_NO_WARNINGS 1

//������ҵ
//day 01
//�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
//1. �÷���һ�������б��������ӡ
//2. n Ϊ��������0 < n <= 5

//int* printNumbers(int n, int* returnSize) {
//    // write code here
//    *returnSize = pow(10, n) - 1;//����������
//    int* arr = (int*)malloc(sizeof(int) * (*returnSize));//malloc   �����ڴ��
//    int i;
//    for (i = 0; i < *returnSize; i++)
//    {
//        arr[i] = i + 1;//�����±��0��ʼ����ֵ��1 ����+1
//    }
//    return arr;
//}


//2��������������ڣ���������һ��ĵڼ��졣���뱣֤���Ϊ4λ�������ںϷ���
//��������������һ�У�ÿ�пո�ָ�ֱ����꣬�£��ա�
//����������������һ��ĵڼ���
#include <stdio.h>
int is_leap_year(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return 1;
	}
	return 0;
}

int main()
{
	int month_day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day;
	while (~scanf("%d %d %d", &year, &month, &day)) {
		int total_day = day;//�Ȱѵ�ǰ�·���������
		if (is_leap_year(year) && month > 2) { //�����꣬���·ݴ���2�£�����ƽ�������+1
			total_day += 1;
		}
		for (int i = month - 1; i > 0; i--) {
			total_day += month_day[i];//��ǰ�ۼ�ÿ�µ���������
		}
		printf("%d\n", total_day);
	}
	return 0;
}
