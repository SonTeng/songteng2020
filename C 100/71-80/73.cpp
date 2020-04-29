/**
    2020年4月28日  21点08分
    题目：反向输出一个链表
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct LNode   
{
    int data;   
    struct LNode *next;
}LNode,*LinkList;

LinkList CreateList(int n);
void printList(LinkList h);

int main(void)
{
	LinkList Head=NULL;
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
    LinkList L,p,q;
    int i;
    p=(LinkList)malloc(sizeof(LNode));
    if(!p)
        return 0;
    p->next=NULL;
    q=p;
    for(i=1;i<=n;i++)
    {
        printf("please input the No.%d data:",i);
        scanf("%d",&(q->data));
        L=(LinkList)malloc(sizeof(LNode));
        L->next=q;
        q=L;
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
please input your num: 7
please input the No.1 data:1
please input the No.2 data:2
please input the No.3 data:3
please input the No.4 data:4
please input the No.5 data:5
please input the No.6 data:6
please input the No.7 data:7

Reverse already created list values are: 7 6 5 4 3 2 1
*/