
/* 프로그램 6-3, 6-4 연결리스트를 이용한 스택 : linkedlist-stack.c */
#include <stdio.h>
#include <malloc.h>
#define MAX_STACK_SIZE 100

struct node {
	int item;
	struct node* link;
};
typedef struct node stack;
typedef stack* stack_ptr;

stack_ptr top = NULL;

void push(int data) {
	//알고리즘 작성
}

int pop() {
	//알고리즘 작성
}

int isempty()
{
	//알고리즘 작성
}

int topelement(stack_ptr top) //가장 위에 있는 원소를 출력하는 함수
{
	//알고리즘 작성
}
int main()
{
	int e;
	push(20);
	push(40);
	push(60);

	printf("가장 위에 있는 원소 : %d\n", topelement(top));
	printf(" Begin Stack Test ...\n");

	while (!isempty())
	{
		e = pop();
		printf("value = %d\n", e);
	}


}