/**
    2020年4月27日  20点24分
    题目：创建一个链表
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct LNode   //typedef类型定义符，此处定义结构体LNode，并将struct LNode定义为LNode,struct LNode*定义为LinkList
{
    int data;   //LinkList Head相当于struct LNode* Head，即定义Head为指向struct LNode结构体的指针
    struct LNode *next;
}LNode,*LinkList;

LinkList CreateList(int n);//该函数创建链表并返回首地址，并用来赋值给头指针。
void printList(LinkList h);

int main(void)
{
	LinkList Head=NULL;//定义指向LNode结构的空指针Head
    int n;
    printf("please input your num: ");
    scanf("%d",&n);
    Head=CreateList(n);
    printf("\nReverse already created list values are: ");
    printList(Head);
    printf("\n");

	return 0;
}

LinkList CreateList(int n)
{
    LinkList L,p,q;//定义指向LNode结构的指针L,p,q
    int i;
    L=(LinkList)malloc(sizeof(LNode));//malloc函数开辟LNode结构大小的空间，返回首地址赋值给L
    if(!L)//相当于if(L==0)即开辟空间失败，上一步返回的是空指针NULL，不进行后续操作
        return 0;
    L->next=NULL;//头结点中指向下一个节点的next指针赋值为NULL
    q=L;//使q指向头结点
    for(i=1;i<=n;i++)
    {
        p=(LinkList)malloc(sizeof(LNode));
        printf("please input the No.%d data:",i);
        scanf("%d",&(p->data));
        p->next=NULL;
        q->next=p;
        q=p;
    }
    return L;
}

void printList(LinkList h)
{
    LinkList p=h->next;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

/*
结果：
please input your num: 5
please input the No.1 data:2
please input the No.2 data:3
please input the No.3 data:6
please input the No.4 data:5
please input the No.5 data:4

already created list values are: 2 3 6 5 4
*/