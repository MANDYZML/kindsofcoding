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
		gap = gap / 3 + 1;//+1�ܱ�֤���һ��gap��1

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
		//��ӡ����
		printf("gap:%d->", gap);
		PrintArray(a, n);
	}
	
}

//ѡ������
void SelectSort(int* a, int n)
{
	assert(a);
	int begin = 0, end = n - 1;//end�����һ�����±�
	while (begin < end)
	{
		int mini = begin, maxi = begin;//��С���������������±�
		for (int i = begin + 1; i <= end; ++i)
		{
			if (a[i] < a[mini])//˵�� a[i]��С
			{
				mini = i;//��mini��λ�û���iλ�õ���
			}
			if (a[i] > a[maxi])//˵�� a[i]����
			{
				maxi = i;//��maxi��λ�û���iλ�õ���
			}
		}
		Swap(&a[begin], &a[mini]);//����С��ֵ�������

		//���begin��maxi�ص�,Ҫ����һ��maxi��λ��
		if (begin == maxi)
		{
			maxi = mini;
		}

		Swap(&a[end], &a[maxi]);//����ֵ�����ұ�
		++begin;
		--end;
	}
	
}

//ð������
void BubbleSort(int* a, int n)
{
	assert(a);
	for (int j = 0; j < n; ++j)
	{
		int exchange = 0;
		for (int i = 1; i < n-j; ++i)//��һ��ð�ݵ�n ֮��n-1 ֮��n-2 n-3

		{
			if (a[i - 1] > a[i])//ǰһ��λ�ô��ں�һ��
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;//�����˽�������1
			}
		}
		if (exchange == 0)//û�з�������
		{
			break;
		}
	}
	
}

//��������
void QuickSort(int* a, int begin,int end)
{
	//�����䲻���ڣ�����ֻ��һ��ֵ����Ҫ�ڴ���
	if (begin >= end)
	{
		return;
	}

	int left = begin, right = end;
	int keyi = left;//�������Ϊkey
	while (left<right)
	{
		//�ұ����ߣ���С
		while (left < right && a[right] >= a[keyi])//���ֵ����
		{
			--right;//������ǰһ��
		}
		//������ߣ��Ҵ�
		while (left < right && a[left] <= a[keyi])//���ֵ����
		{
			++left;//��������һ��
		}

		Swap(&a[left], &a[right]);//�������ҵ�ֵ
	}
	Swap(&a[keyi], &a[left]);
	keyi = left;

	QuickSort(a, begin, keyi - 1);//�ݹ�������
	QuickSort(a, keyi + 1, end);//�ݹ�������
}