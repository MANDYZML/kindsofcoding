#define _CRT_SECURE_NO_WARNINGS 1

//���÷�������˼
#include <stdio.h>

//int main()
//{
//	printf("mandyz\n"); 
//
//	return 0;
//}


////'a' --�ַ�a
////�����ռ�
//
//int main()
//{
//	//char �ַ�����
//	char ch = 'a';
//	//����(��������  ����������)
//	int age = 20;
//	//������
//	short num = 10
//	// long
//	// long long
//	// folat �����ȸ����� (����С����)
//	float weight = 55.5
//	//˫���ȸ�����
//	double d = 0.0;
//	return 0;
//		 
//}



//int main()
//{
//	//printf("�Ǻ�\n");
//	//printf("����\n");
//	//printf("%d\n", 100);    //��ӡһ������--%d  �����Ǵ�ӡ100
//	//sizeof--�ؼ��� =c ���Ե� ������--�������ͻ��߱�����ռ�ռ��С  ��˼�ǡ������Ĵ�С�����������Ǹ����ʣ�
//	//��ӡchar���ʹ�С
//	printf("%d\n", sizeof(char)); 
//	printf("%d\n", sizeof(short)); 
//	printf("%d\n", sizeof(int)); 
//	printf("%d\n", sizeof(long)); 
//	printf("%d\n", sizeof(long long)); 
//	printf("%d\n", sizeof(float)); 
//	printf("%d\n", sizeof(double)); 
//	//�����ݼ��� ctrl��d
//
//	return 0;
//}


//int main()
//{
//	//������һ������
//	//int ������  age�Ǳ��������� ������ֵ��0��// �Ƽ�
//	//���� ���������֣� // �﷨����  ���Ƽ�
//	int age = 20;
//	double weight = 75.3; //���Ǳ����Ĵ��� ��ζ�����ݿɸ�
//
//		age = age+1;
//		weight = weight - 10;
//		printf("%d\n", age);       //%d ��  ����
//		printf("%lf\n", weight);   //%f ��  float   // %lf �� double
//		return 0;
//}

// �ڴ�������  ������ȫ�ֱ���
//int a = 100;
//
//int main()
//{
//	//�ڴ������ڲ��ı��� ���� �ֲ�����
//	//���� �����a �� �ֲ�����
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//�������ȫ�ֱ����;ֲ�����������д��һ����
//	int a = 10;
//		printf("%d\n", a); //�����a ָ���� ��ӡ��������a��
//	return 0;
//
//}

 //д������  �����������ĺ�
 //scanf������ ���뺯��
int main()
{
	int a = 0; //��ʼint ��0 �Ǹ�ֵ ����һ����ʼֵ// 0 Ҳ�൱��û��
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);  //a��b ������ get
	sum = a + b;
	printf("sum =%d\n", sum);  //%d ��ʾ ��ӡ����
	return 0;
}