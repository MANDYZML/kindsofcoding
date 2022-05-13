#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void TestList1()
{
	//LTNode* plist = NULL;
	//ListInit(&plist);//plist形参传给phead实参

	LTNode* plist = ListInit();//返回哨兵位的头结点指针
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);

}

//头插
void TestList2()
{
	//LTNode* plist = NULL;
	//ListInit(&plist);//plist形参传给phead实参

	LTNode* plist = ListInit();//返回哨兵位的头结点指针
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);
	ListPrint(plist);

	//尾删
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