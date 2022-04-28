#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	//创建4个数据的链表
	//struct SListNode*
	
	//malloc一个结点(结构体) -- n1 n2 n3 n4 是结构体指针 
	SLTNode* n1 = (SLTNode*)malloc(sizeof(SLTNode)); 
	assert(n1);

	SLTNode* n2 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n2);

	SLTNode* n3 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n3);

	SLTNode* n4 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n4);

	//一个结构体有两个成员 data next
	n1->data = 1;//n1结点 data里面存的1
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2; //n1的next里存n2的地址指向n2
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;//0x00000000

	//打印
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
	SListPushBack(&plist, 1);//要改变结构体指针 要传地址
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	//头插
	SListPushFront(&plist, 0);//创建个头
	SListPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;//链表为空
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
	SListPushBack(&plist, 1);//要改变结构体指针 要传地址
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
	SListPushBack(&plist, 1);//要改变结构体指针 要传地址
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	//修改
	SLTNode* ret = SListFind(plist, 3);
	if (ret)//不等于空
	{
		printf("找到了\n");
		ret->data = 30;
	}
	SListPrint(plist);

	//在4的前面插入40
	SLTNode* pos = SListFind(plist, 4);

	//找第n个位置
	//*cur=plist
	//while (n--)
	//{


	//}*/
	if (pos)//不等于空
	{
		SListInsert(&plist, pos, 40);
	}
	SListPrint(plist);

	//删除
	pos = SListFind(plist, 4);

	if (pos)//不等于空
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