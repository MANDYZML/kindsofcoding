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
int main()
{
	TestList1();

	return 0; 
}