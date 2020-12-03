#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef int dataType;
typedef struct node{ 
	dataType data;
	struct node *next;
}LinkStack;

//初始化连栈
LinkStack *InitStack(){
	LinkStack *t = (LinkStack*)malloc(sizeof(LinkStack));
	t->next = NULL;
	return t;
} 

//判断栈是否为空
int Empty(LinkStack *s){
	return s->next == NULL;
}
//元素X进栈
void Push(LinkStack *s,dataType x){
	node *t = (node*)malloc(sizeof(node));
	t->data = x;
	t->next = s->next;
	s->next = t;
} 

//出栈
void Pop(LinkStack *s){
	if (Empty(s)) exit(1);
	node *p = s->next;
	s->next = p->next;
	free(p); 
} 

//取栈顶元素值
dataType GetTop(LinkStack *s){
	return s->next->data;
} 

int main(){
	LinkStack *s = InitStack();
	Push(s,80);
	Push(s,90);
	Pop(s);
	Push(s,70);
	printf("%d", GetTop(s));
}

