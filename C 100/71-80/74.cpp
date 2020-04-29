/**
    2020年4月28日  21点21分
    题目：连接两个链表
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
	LinkList Head=NULL,Head2=NULL,f=NULL;
    int n,m;
    printf("\40:Line1 input the 1st list nums: ");
    scanf("%d",&n);
    Head=CreateList(n);
    printf("\40:Line2 input the 2nd list nums: ");
    scanf("%d",&m);
    Head2=CreateList(m);

    f=Head;
    while(f->next!=NULL)
        f=f->next;
    f->next=Head2->next;

    printf("\40:Line3 the connected list is: ");
    printList(Head);
    printf("\n");

	return 0;
}

LinkList CreateList(int n)
{
    LinkList L,p,q;
    int i;
    L=(LinkList)malloc(sizeof(LNode));
    if(!L)
        return 0;
    L->next=NULL;
    q=L;
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
 :Line1 input the 1st list nums: 4
please input the No.1 data:4
please input the No.2 data:3
please input the No.3 data:2
please input the No.4 data:1
 :Line2 input the 2nd list nums: 5
please input the No.1 data:6
please input the No.2 data:7
please input the No.3 data:8
please input the No.4 data:9
please input the No.5 data:5
 :Line3 the connected list is: 4 3 2 1 6 7 8 9 5
*/
