#include <stdio.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1;

void push(int item);
int pop(void);
int isEmpty(void);
int isFull(void);
void printStack(void);

int main(void)
{
	printf("pop => %d\n", pop());
	printf("push => 1\n");  push(1);
	printf("push => 2\n");  push(2);
	printf("push => 3\n");  push(3);
	printf("push => 4\n");  push(4);
	printf("push => 5\n");  push(5);
	printf("push => 6\n");  push(6);
	printf("pop => %d\n", pop());
	printf("pop => %d\n", pop());
	printf("pop => %d\n", pop());
	printf("pop => %d\n", pop());
	printf("pop => %d\n", pop());
	printf("pop => %d\n", pop());
	printStack();
	return 0;
}
void push(int item)
{
	//알고리즘 작성
	if (top >= MAX_SIZE - 1) {
		printf("Stack is Full\n");
	}
	else stack[++top] = item;

}

//뺄 값이 없으면 -1 반환
int pop(void)
{
	//알고리즘 작성
	if (top == -1) {
		printf("Stack is Empty\m");
		return -1;
	}
	return stack[top--];
}

//비었으면 1, 안 비었으면 0 반환
int isEmpty(void)
{
	//알고리즘 작성
	if (top == -1) return 1; return 0;
}

//꽉 찼으면 1, 꽉 안 찼으면 0 반환
int isFull(void)
{
	//알고리즘 작성
	if (top >= MAX_SIZE - 1) return 1; return 0;
}
void printStack(void)
{
	printf("스택 원소 : ");
	for (int i = 0; i <= top; i++) {
		printf("%d ", stack[i]);
	}
	printf("\n\n");
}