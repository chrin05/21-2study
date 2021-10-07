
/* DBLAB stacktest.c */
#include <stdio.h>
#define MAX_STACK_SIZE 100
int top = -1;

//구조체 이름 : StackE , 원소 num(번호), player(이름)
typedef struct stackelement {
	int num;
	char player;
}StackE;

StackE stack[MAX_STACK_SIZE];

void push(int number, char name)
{
	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack[++top].num = number;
	stack[top].player = name; //top은 이미 증가되었으니 여기서는 top 변화 없이 이름 대입
}

StackE pop() {
	if (top == -1)
	{
		printf("stack_empty()\n"); exit();
	}
	return stack[(top)--];
}

int isempty()
{
	if (top == -1) return(1); else return(0);
}

int isfull()
{
	if (top >= MAX_STACK_SIZE - 1) return(1); else return(0);
}

int main()
{
	StackE e;
	push(20,'A');
	push(40,'B');
	push(60,'C');
	printf(" Begin Stack Test ...\n");
	while (!isempty())
	{
		e = pop();
		//출력시 번호와 알파벳 둘다 출력
		printf("value = ( %d, %c )\n", e.num, e.player);
	}
}