// �Լ� stackEmpty ���� 
#include <stdio.h>
#define MAX_STACK_SIZE 3

typedef struct {
	int key;
} element;

element stack[MAX_STACK_SIZE];
int top = -1;

element stackEmpty() {
	//������ empty �϶� -1�� ��ȯ.
	printf("Stack is emtpy\n");
	element emtpy;
	emtpy.key = -1;
	return emtpy;
}

void stackFull() {
	printf("Stack is full, cannot add element\n");
	//exit(EXIT_FAILURE);
}

void push(element item) {
	if (top >= MAX_STACK_SIZE - 1) stackFull();
	else stack[++top] = item;
}

element pop() {
	if (top == -1) return stackEmpty();
	return stack[top--];
}

int main() {
	element e;
	e.key = 20;
	push(e);
	e.key = 30;
	push(e);
	e.key = 40;
	push(e);
	//4��° ��� ����
	e.key = 50;
	push(e);
	printf(" Begin Stack Test...\n");
	printf(" POP = > %d\n", pop().key);
	printf(" POP = > %d\n", pop().key);
	printf(" POP = > %d\n", pop().key);
	//���� 4��°
	printf(" POP = > %d\n", pop().key);

	return 0;
}