#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void TestList1()
{
	//LTNode* plist = NULL;
	//ListInit(&plist);//plist�βδ���pheadʵ��

	LTNode* plist = ListInit();//�����ڱ�λ��ͷ���ָ��
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);

}

//ͷ��
void TestList2()
{
	//LTNode* plist = NULL;
	//ListInit(&plist);//plist�βδ���pheadʵ��

	LTNode* plist = ListInit();//�����ڱ�λ��ͷ���ָ��
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);
	ListPrint(plist);

	//βɾ
	ListPopBack(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
}
int main()
{
	TestList2();

	return 0; 
}