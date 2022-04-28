#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	//����4�����ݵ�����
	//struct SListNode*
	
	//mallocһ�����(�ṹ��) -- n1 n2 n3 n4 �ǽṹ��ָ�� 
	SLTNode* n1 = (SLTNode*)malloc(sizeof(SLTNode)); 
	assert(n1);

	SLTNode* n2 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n2);

	SLTNode* n3 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n3);

	SLTNode* n4 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n4);

	//һ���ṹ����������Ա data next
	n1->data = 1;//n1��� data������1
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2; //n1��next���n2�ĵ�ַָ��n2
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;//0x00000000

	//��ӡ
	SListPrint(n1);

	SLTNode* plist = n1;
	SListPrint(plist);

	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);
	SListPushBack(&plist, 7);
	SListPushBack(&plist, 8);
	SListPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);//Ҫ�ı�ṹ��ָ�� Ҫ����ַ
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	//ͷ��
	SListPushFront(&plist, 0);//������ͷ
	SListPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;//����Ϊ��
	SListPushFront(&plist, 0);
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
}

void TestSList4()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);//Ҫ�ı�ṹ��ָ�� Ҫ����ַ
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);  
	SListPrint(plist);

}

void TestSList5()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);//Ҫ�ı�ṹ��ָ�� Ҫ����ַ
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	//�޸�
	SLTNode* ret = SListFind(plist, 3);
	if (ret)//�����ڿ�
	{
		printf("�ҵ���\n");
		ret->data = 30;
	}
	SListPrint(plist);

	//��4��ǰ�����40
	SLTNode* pos = SListFind(plist, 4);

	//�ҵ�n��λ��
	//*cur=plist
	//while (n--)
	//{


	//}*/
	if (pos)//�����ڿ�
	{
		SListInsert(&plist, pos, 40);
	}
	SListPrint(plist);

	//ɾ��
	pos = SListFind(plist, 4);

	if (pos)//�����ڿ�
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);
}

int main()
{
	TestSList5(); 
	return 0;
}