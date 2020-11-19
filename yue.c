#include <stdio.h>
#include <malloc.h>
typedef struct List
{
	int data;
	struct List *next;
	
}LinkList;

int main() 
{
	LinkList *L,*r,*s;
	L=(LinkList*)malloc(sizeof(LinkList));
	r=L;
	int n,i;
	int k;
	printf("请输入参赛的人数:\n");
	scanf("%d",&n);
	printf("每轮数的数为:\n");
		scanf("%d",&k);
	
	for(i=1;i<=n;i++)
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=i;
		r->next=s;
		r=s;
	}
	r->next=L->next;
	
	
	LinkList*p,*q;
	p=L->next;
	
	while(p->next!=p)
	{
		for(i=1;i<k-1;i++)
		{
			p=p->next;
		}
		q=p->next;
		p->next=p->next->next;
		free(q);
		p=p->next;
	}
	printf("最后的获胜者编号是:%d",p->data);
	return 0; 
}
