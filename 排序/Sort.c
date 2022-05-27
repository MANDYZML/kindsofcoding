#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//��������
void InsertSort(int* a, int n)
{
	//[0-end]���򣬰�end+1λ�õ�ֵ���룬��������
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;//n-1�����һ�������±�
		int tmp = a[end + 1];//��һ�����뵽ǰ��ȥ
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;//end ��ǰ��
			}
			else  //tmp>end
			{
				break;
			}
		}
		//�����Ժ� ���� tmp������ֵ��С һֱŲ end���� -1
		a[end + 1] = tmp;//tmpֱ�ӷŵ�endָ���ֵ�ĺ���
	}
	
}

//ϣ������
//void ShelltSort(int* a, int n)
//{
//	int gap = 3;//���Ϊgap����һ������
//
//	for (int j = 0; j < gap; ++j) //��gap��
//	{
//		//��һ��
//		for (int i = j; i < n - gap; i += gap)
//		{
//			int end;
//			int tmp = a[end + gap];//ͬ������ ��һ��λ�õ�ֵ��ǰ����
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];//ԭ��endλ�õ�ֵŲ��end+gap
//					end -= gap;//end��ǰָ�� ͬ������ ԭ��end��ǰһ��ֵ
//				}
//				else // tmp > a[end]
//				{
//					break;
//				}
//			}
//			//Ҫô endһֱŲ�� -1 Ҫô tmp> a[end]
//			a[end + gap] = tmp; // ��tmp��ֵ �ŵ� end+gap��
//		}
//	}
//}

//��  gap�����ݽ���������� 
void ShellSort(int* a, int n)
{
	int gap = n;//���Ϊgap����һ������

	while (gap > 1)//Ԥ���� ���=1��ֱ�Ӳ�������
	{
		gap = gap / 3 + 1;
		//��һ��
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];//ͬ������ ��һ��λ�õ�ֵ��ǰ����
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];//ԭ��endλ�õ�ֵŲ��end+gap
					end -= gap;//end��ǰָ�� ͬ������ ԭ��end��ǰһ��ֵ
				}
				else // tmp > a[end]
				{
					break;
				}
			}
			//Ҫô endһֱŲ�� -1 Ҫô tmp> a[end]
			a[end + gap] = tmp; // ��tmp��ֵ �ŵ� end+gap��
		}
	}
	
}