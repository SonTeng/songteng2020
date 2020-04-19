/**
    2020年4月18日  18点45分
*/

#include<stdio.h>

//定义一个链表节点的数据类型
struct Node
{
    int data;
    struct Node *pNext;
};

struct Node *CreateList(void);
bool EmptyList(struct Node * pHead)
{
    if(pHead->pNext == null)
       return true;
    else
       return false;  
}

void TraverseList(struct Node *pHead);
{
    struct Node *p = pHead->pNext;

    while(p != NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }

    return;
}

//非循环单向链表
int main(void)
{
	struct Node *pHead = NULL;  //pHead用来存放链表头结点的地址

    pHead = CreateList();  //所以在函数内部一定是动态建表的

    TraverseList(pHead); 

	return 0;
}
