#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
#include<time.h>
#include"Queue.h"

//数据存在一个节点里  一个节点就是一个结构体
//struct TreeNode 
//{
//	int data;//节点位置里存的值
//	struct TreeNode* 
//};

//树的最优表示法
//左孩子右兄弟
//typedef int DataType;
//struct TreeNode  //树中的一个节点
//{
//	struct TreeNode* firstChild1;//第一个指针指向第一个孩子
//	struct TreeNode* pNextBrother;//然后第一个孩子用兄弟指针指向 亲兄弟--也就是A的第二个孩子
//	//如果没有兄弟 就指向空
//	DataType data; //假设里面存的是根节点A
//};

void TestHeap()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)//把所有数据依次插入 构成一个堆
	{
		HeapPush(&hp, a[i]);//把数组当中的值依次插入进堆里面
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

//让数组当中的值有序
//升序 -- 建大堆
//降序 -- 建小堆
void HeapSort(int* a, int n)
{
	//建堆方式1 -- 向上调整
	//for (int i = 1; i < n; ++i)
	//{
	//	AdjustUp(a, i);//i从1开始 每push一个数 就向上调整一次
	//}
	
	//建堆方式2： -- 向下调整  前提是 左右字数必须是大/小堆
	 for (int i = (n-1-1)/2; i >= 0; --i)
		 //找到倒数第一个非叶子结点 28
		 //n-1是最后一个数的下标  再-1/2是找到最后一个数的父亲
		 //也就是 倒数第一个非叶子结点 28
	{
		AdjustDown(a, n, i);//i从1开始 每push一个数 就向上调整一次
	}
	 int end = n - 1;
	 while (end > 0)
	 {
		 Swap(&a[0], &a[end]);//建大堆 把最大的数换到最后去
		 AdjustDown(a, end, 0);//向下调整 找次大的数
		 --end;
	 }
}

//堆 排序
void TestHeapSort()
{
	//升序打印--小堆
	//降序打印--大堆
	//HP hp;
	//HeapInit(&hp);
	//int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	//for (int i = 0; i < sizeof(a) / sizeof(int); ++i)//把所有数据依次插入 构成一个堆
	//{
	//	HeapPush(&hp, a[i]);//把数组当中的值依次按小堆插入进堆里面
	//}

	//while (!HeapEmpty(&hp))
	//{
	//	//小堆 顺序不用变
	//	printf("%d ", HeapTop(&hp));//取堆顶
	//	HeapPop(&hp);
	//}
	//printf("\n");//升序打印--小堆

	//让数组排成有序
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	HeapSort(a, sizeof(a) / sizeof(int));
}

void PrintTopK(int* a, int n, int k)
{
	// 1. 建堆--用a中前k个元素建堆
	int* kMinHeap = malloc(sizeof(int) * k);//malloc  k个数组
	assert(kMinHeap);
	for (int i = 0; i < k; ++i)
	{
		//把随机值放进堆里
		kMinHeap[i] = a[i];//把a的前k个放进去 
	}
	for (int i = (k - 1 - 1) / 2; i >= 0; --i)
		//从最后一个非叶子节点开始建堆--也就是最后一个结点的父亲
		//最后一个结点的下标是k-1  (k - 1 - 1) / 2 算的是他的父亲
	{
		AdjustDown(kMinHeap, k, i);//i是开始调的位置
	} //把小堆建好了

	// 2. 将剩余n-k个元素依次与堆顶元素交换，不满则则替换
	for (int j = k; j < n; ++j)//0- k-1 已经建堆 n-k个数就是从k开始 <n
	{
		if (a[j] > kMinHeap[0])//剩下的数如果比堆顶大 就进堆替换
		{
			kMinHeap[0] = a[j]; 
			AdjustDown(kMinHeap, k, 0);//从根的位置向下调整
		}
	}

	for (int i = 0; i < k; ++i)
	{
		printf("%d ", kMinHeap[i]);//整理好的堆 打印
	}
	printf("\n");
}

void TestTopk()
{
	//10000个数据中找前10个
	int n = 10000;
	int* a = (int*)malloc(sizeof(int) * n);
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;//产生的随机数%1000000
	}
	//搞10个位置给比1000000大的值
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
	PrintTopK(a, n, 10); //能打印出来这10个比1000000大的数就没问题
}

//int main()
//{
//	//TestHeap();
//	//TestHeapSort();
//	TestTopk();
//	return 0;
//}


//定义链式二叉树
typedef int BTDataType;
typedef struct BinaryTreeNode //结点
{
	struct BinaryTreeNode* left;//左孩子
	struct BinaryTreeNode* right; //右孩子
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

BTNode* CreatBinaryTree() //弄一个二叉树
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
//前序遍历 根 左子树 右子树
void PreOrder(BTNode* root)
{
	if (root == NULL)//如果是空树
	{
		printf("# ");
		return;
	}
	printf("%d ", root->data);//根
	PreOrder(root->left);//左子树
	PreOrder(root->right);//右子树
}

//中序遍历 左子树 根 右子树
void InOrder(BTNode* root)
{
	if (root == NULL)//如果是空树
	{
		printf("# ");
		return;
	}
	
	InOrder(root->left);//左子树
	printf("%d ", root->data);//根
	InOrder(root->right);//右子树
}

//后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)//如果是空树
	{
		printf("# ");
		return;
	}

	PostOrder(root->left);//左子树
	PostOrder(root->right);//右子树
	printf("%d ", root->data);//根
}

//求二叉树值的结点数量
int count = 0;
void  TreeSize1(BTNode* root)//遍历器一棵树
{
	if (root == NULL)//空树就返回
	{
		return;
	}

	++count;
	TreeSize1(root->left);
	TreeSize1(root->right);
}

int TreeSize2(BTNode* root)
{
	return root == NULL ? 0 : //如果是空 结点就是0
		TreeSize2(root->left) + TreeSize2(root->right) + 1;//要不是空 就是左子树+右子树+根
}

//求叶子节点数量
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)//空树就返回
		return 0;

	if (root->left == NULL && root->right == NULL)
		return 1;


	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

//求第k层结点的个数
//转换成子问题：
//求左子树k-1层+右子树k-1层
int TreeKLevel(BTNode* root, int k)
{
	assert(k >= 1);
	if (root == NULL)//空树就返回
		return 0;

	if (k == 1) //只有一层
	{
		return 1;
	}

	//root不是空  k也不是1
	return TreeKLevel(root->left, k - 1)
		+ TreeKLevel(root->right, k - 1);
}

//求树的深度
int TreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;//空树的高度是0
	}
	//求左子树的高度和右子树的高度
	int leftDepth = TreeDepth(root->left);//求左树高度
	int rightDepth = TreeDepth(root->right);//右树

	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
	//算出左子树或者右子树谁是最深的 之后加根
}

//二叉树查找值为x的结点
BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->data == x)//说明root就是要找的结点
	{
		return root;
	}

	//不是自己 去左树找
	BTNode* ret1 = TreeFind(root->left, x);
	
	if (ret1)
	{
		return ret1;//如果找到了 把结果返回出去
	}

	//到右边找
	BTNode* ret2 = TreeFind(root->right, x);

	if (ret2)
	{
		return ret2;//如果找到了 把结果返回出去 
		 //是返回到上一层
	}

	//左右边都没有找到
	return NULL;
}

//后序销毁
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

//层序遍历
void LevelOrder(BTNode* root)
{
	//定义一个队列
	Queue q;
	QueueInit(&q);//初始化
	if (root)
	{
		QueuePush(&q, root);//把根节点指针先放进去
	}
	while (!QueueEmpty(&q))//队列不等于空就继续
	{
		BTNode* front = QueueFront(&q);//出队头的数据
		printf("%d ", front->data);
		QueuePop(&q);//删了队头的数据

		if (front->left)//队列头 左孩子不等于空
		{
			QueuePush(&q, front->left);//左孩子进入队列
		}
		if (front->right)//队列头 右孩子不等于空
		{
			QueuePush(&q, front->right);//右孩子进入队列
		}
	}
	//队列为空就结束了
	printf("\n");
	QueueDestroy(&q);
}

// 判断二叉树是否是完全二叉树
int TreeComplete(BTNode* root)
{
	//层序遍历
	Queue q;
	QueueInit(&q);//初始化
	if (root)
	{
		QueuePush(&q, root);//把根节点指针先放进去
	}
	while (!QueueEmpty(&q))//队列不等于空就继续
	{
		BTNode* front = QueueFront(&q);//出队头的数据
		QueuePop(&q);//删了队头的数据

		if (front)//如果队列不等于空
		{
			QueuePush(&q, front->left);//左孩子进入队列
			QueuePush(&q, front->right);//右孩子进入队列
		}
		else //队列遇到空，跳出层序遍历
		{
			break;
		}
	}

	//遍历队列
	
	//如果队列后面全是空，则是完全二叉树
	//如果队列后面还有非空，则不是完全二叉树
	while (!QueueEmpty(&q))//队列不等于空就继续
	{
		BTNode* front = QueueFront(&q);//取队头的数据
		QueuePop(&q);//删了队头的数据
		if (front)//队头是非空
		{
			return false;
		}
	}

	//队列为空就结束了
	QueueDestroy(&q);
	return true;//队列都出完了 还没有false 就说明是完全二叉树

}

int main()
{ 
	BTNode* root = CreatBinaryTree();//根节点
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
