#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
#include<time.h>
#include"Queue.h"

//���ݴ���һ���ڵ���  һ���ڵ����һ���ṹ��
//struct TreeNode 
//{
//	int data;//�ڵ�λ������ֵ
//	struct TreeNode* 
//};

//�������ű�ʾ��
//�������ֵ�
//typedef int DataType;
//struct TreeNode  //���е�һ���ڵ�
//{
//	struct TreeNode* firstChild1;//��һ��ָ��ָ���һ������
//	struct TreeNode* pNextBrother;//Ȼ���һ���������ֵ�ָ��ָ�� ���ֵ�--Ҳ����A�ĵڶ�������
//	//���û���ֵ� ��ָ���
//	DataType data; //�����������Ǹ��ڵ�A
//};

void TestHeap()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)//�������������β��� ����һ����
	{
		HeapPush(&hp, a[i]);//�����鵱�е�ֵ���β����������
	}
	HeapPrint(&hp);

	HeapPush(&hp, 10);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
}

//�����鵱�е�ֵ����
//���� -- �����
//���� -- ��С��
void HeapSort(int* a, int n)
{
	//���ѷ�ʽ1 -- ���ϵ���
	//for (int i = 1; i < n; ++i)
	//{
	//	AdjustUp(a, i);//i��1��ʼ ÿpushһ���� �����ϵ���һ��
	//}
	
	//���ѷ�ʽ2�� -- ���µ���  ǰ���� �������������Ǵ�/С��
	 for (int i = (n-1-1)/2; i >= 0; --i)
		 //�ҵ�������һ����Ҷ�ӽ�� 28
		 //n-1�����һ�������±�  ��-1/2���ҵ����һ�����ĸ���
		 //Ҳ���� ������һ����Ҷ�ӽ�� 28
	{
		AdjustDown(a, n, i);//i��1��ʼ ÿpushһ���� �����ϵ���һ��
	}
	 int end = n - 1;
	 while (end > 0)
	 {
		 Swap(&a[0], &a[end]);//����� ���������������ȥ
		 AdjustDown(a, end, 0);//���µ��� �Ҵδ����
		 --end;
	 }
}

//�� ����
void TestHeapSort()
{
	//�����ӡ--С��
	//�����ӡ--���
	//HP hp;
	//HeapInit(&hp);
	//int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	//for (int i = 0; i < sizeof(a) / sizeof(int); ++i)//�������������β��� ����һ����
	//{
	//	HeapPush(&hp, a[i]);//�����鵱�е�ֵ���ΰ�С�Ѳ����������
	//}

	//while (!HeapEmpty(&hp))
	//{
	//	//С�� ˳���ñ�
	//	printf("%d ", HeapTop(&hp));//ȡ�Ѷ�
	//	HeapPop(&hp);
	//}
	//printf("\n");//�����ӡ--С��

	//�������ų�����
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	HeapSort(a, sizeof(a) / sizeof(int));
}

void PrintTopK(int* a, int n, int k)
{
	// 1. ����--��a��ǰk��Ԫ�ؽ���
	int* kMinHeap = malloc(sizeof(int) * k);//malloc  k������
	assert(kMinHeap);
	for (int i = 0; i < k; ++i)
	{
		//�����ֵ�Ž�����
		kMinHeap[i] = a[i];//��a��ǰk���Ž�ȥ 
	}
	for (int i = (k - 1 - 1) / 2; i >= 0; --i)
		//�����һ����Ҷ�ӽڵ㿪ʼ����--Ҳ�������һ�����ĸ���
		//���һ�������±���k-1  (k - 1 - 1) / 2 ��������ĸ���
	{
		AdjustDown(kMinHeap, k, i);//i�ǿ�ʼ����λ��
	} //��С�ѽ�����

	// 2. ��ʣ��n-k��Ԫ��������Ѷ�Ԫ�ؽ��������������滻
	for (int j = k; j < n; ++j)//0- k-1 �Ѿ����� n-k�������Ǵ�k��ʼ <n
	{
		if (a[j] > kMinHeap[0])//ʣ�µ�������ȶѶ��� �ͽ����滻
		{
			kMinHeap[0] = a[j]; 
			AdjustDown(kMinHeap, k, 0);//�Ӹ���λ�����µ���
		}
	}

	for (int i = 0; i < k; ++i)
	{
		printf("%d ", kMinHeap[i]);//����õĶ� ��ӡ
	}
	printf("\n");
}

void TestTopk()
{
	//10000����������ǰ10��
	int n = 10000;
	int* a = (int*)malloc(sizeof(int) * n);
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;//�����������%1000000
	}
	//��10��λ�ø���1000000���ֵ
	a[5] = 1000000 + 1;
	a[1231] = 1000000 + 2;
	a[531] = 1000000 + 3;
	a[5121] = 1000000 + 4;
	a[115] = 1000000 + 5;
	a[2335] = 1000000 + 6;
	a[9999] = 1000000 + 7;
	a[76] = 1000000 + 8;
	a[423] = 1000000 + 9;
	a[3144] = 1000000 + 10;
	PrintTopK(a, n, 10); //�ܴ�ӡ������10����1000000�������û����
}

//int main()
//{
//	//TestHeap();
//	//TestHeapSort();
//	TestTopk();
//	return 0;
//}


//������ʽ������
typedef int BTDataType;
typedef struct BinaryTreeNode //���
{
	struct BinaryTreeNode* left;//����
	struct BinaryTreeNode* right; //�Һ���
	BTDataType data;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = malloc(sizeof(BTNode));
	assert(node);

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}

BTNode* CreatBinaryTree() //Ūһ��������
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	return node1;
}
//ǰ����� �� ������ ������
void PreOrder(BTNode* root)
{
	if (root == NULL)//����ǿ���
	{
		printf("# ");
		return;
	}
	printf("%d ", root->data);//��
	PreOrder(root->left);//������
	PreOrder(root->right);//������
}

//������� ������ �� ������
void InOrder(BTNode* root)
{
	if (root == NULL)//����ǿ���
	{
		printf("# ");
		return;
	}
	
	InOrder(root->left);//������
	printf("%d ", root->data);//��
	InOrder(root->right);//������
}

//�������
void PostOrder(BTNode* root)
{
	if (root == NULL)//����ǿ���
	{
		printf("# ");
		return;
	}

	PostOrder(root->left);//������
	PostOrder(root->right);//������
	printf("%d ", root->data);//��
}

//�������ֵ�Ľ������
int count = 0;
void  TreeSize1(BTNode* root)//������һ����
{
	if (root == NULL)//�����ͷ���
	{
		return;
	}

	++count;
	TreeSize1(root->left);
	TreeSize1(root->right);
}

int TreeSize2(BTNode* root)
{
	return root == NULL ? 0 : //����ǿ� ������0
		TreeSize2(root->left) + TreeSize2(root->right) + 1;//Ҫ���ǿ� ����������+������+��
}

//��Ҷ�ӽڵ�����
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)//�����ͷ���
		return 0;

	if (root->left == NULL && root->right == NULL)
		return 1;


	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

//���k����ĸ���
//ת���������⣺
//��������k-1��+������k-1��
int TreeKLevel(BTNode* root, int k)
{
	assert(k >= 1);
	if (root == NULL)//�����ͷ���
		return 0;

	if (k == 1) //ֻ��һ��
	{
		return 1;
	}

	//root���ǿ�  kҲ����1
	return TreeKLevel(root->left, k - 1)
		+ TreeKLevel(root->right, k - 1);
}

//���������
int TreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;//�����ĸ߶���0
	}
	//���������ĸ߶Ⱥ��������ĸ߶�
	int leftDepth = TreeDepth(root->left);//�������߶�
	int rightDepth = TreeDepth(root->right);//����

	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
	//�������������������˭������� ֮��Ӹ�
}

//����������ֵΪx�Ľ��
BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->data == x)//˵��root����Ҫ�ҵĽ��
	{
		return root;
	}

	//�����Լ� ȥ������
	BTNode* ret1 = TreeFind(root->left, x);
	
	if (ret1)
	{
		return ret1;//����ҵ��� �ѽ�����س�ȥ
	}

	//���ұ���
	BTNode* ret2 = TreeFind(root->right, x);

	if (ret2)
	{
		return ret2;//����ҵ��� �ѽ�����س�ȥ 
		 //�Ƿ��ص���һ��
	}

	//���ұ߶�û���ҵ�
	return NULL;
}

//��������
void TreeDestroy(BTNode* root)
{
	if (root == NULL)
	{
		return; 
	}
	TreeDestroy(root->left);
	TreeDestroy(root->right);
	printf("%p:%d\n", root, root->data);
	free(root);
}

//�������
void LevelOrder(BTNode* root)
{
	//����һ������
	Queue q;
	QueueInit(&q);//��ʼ��
	if (root)
	{
		QueuePush(&q, root);//�Ѹ��ڵ�ָ���ȷŽ�ȥ
	}
	while (!QueueEmpty(&q))//���в����ڿվͼ���
	{
		BTNode* front = QueueFront(&q);//����ͷ������
		printf("%d ", front->data);
		QueuePop(&q);//ɾ�˶�ͷ������

		if (front->left)//����ͷ ���Ӳ����ڿ�
		{
			QueuePush(&q, front->left);//���ӽ������
		}
		if (front->right)//����ͷ �Һ��Ӳ����ڿ�
		{
			QueuePush(&q, front->right);//�Һ��ӽ������
		}
	}
	//����Ϊ�վͽ�����
	printf("\n");
	QueueDestroy(&q);
}

// �ж϶������Ƿ�����ȫ������
int TreeComplete(BTNode* root)
{
	//�������
	Queue q;
	QueueInit(&q);//��ʼ��
	if (root)
	{
		QueuePush(&q, root);//�Ѹ��ڵ�ָ���ȷŽ�ȥ
	}
	while (!QueueEmpty(&q))//���в����ڿվͼ���
	{
		BTNode* front = QueueFront(&q);//����ͷ������
		QueuePop(&q);//ɾ�˶�ͷ������

		if (front)//������в����ڿ�
		{
			QueuePush(&q, front->left);//���ӽ������
			QueuePush(&q, front->right);//�Һ��ӽ������
		}
		else //���������գ������������
		{
			break;
		}
	}

	//��������
	
	//������к���ȫ�ǿգ�������ȫ������
	//������к��滹�зǿգ�������ȫ������
	while (!QueueEmpty(&q))//���в����ڿվͼ���
	{
		BTNode* front = QueueFront(&q);//ȡ��ͷ������
		QueuePop(&q);//ɾ�˶�ͷ������
		if (front)//��ͷ�Ƿǿ�
		{
			return false;
		}
	}

	//����Ϊ�վͽ�����
	QueueDestroy(&q);
	return true;//���ж������� ��û��false ��˵������ȫ������

}

int main()
{ 
	BTNode* root = CreatBinaryTree();//���ڵ�
	PreOrder(root);
	printf("\n");

	InOrder(root);
	printf("\n");

	PostOrder(root);
	printf("\n");

	count = 0;
	TreeSize1(root);
	printf("TreeSize:%d\n", count);

	printf("TreeSize:%d\n", TreeSize2(root));

	printf("LeafSize:%d\n", TreeLeafSize(root));
	printf("KLevelSize:%d\n", TreeKLevel(root,2));

	printf("TreeKDepth:%d\n", TreeDepth(root));


	TreeDestroy(root);
	root = NULL;

	LevelOrder(root); 
	printf("TreeComplete:%d\n", TreeComplete(root));
	return 0;
}
