#include <stdio.h>
#define MAX 100

typedef struct {
	int key;
}element;

element stack[MAX];
void push(int* top, element item);
element pop(int* top);

void push(int* top, element item) {
	if (*top == MAX - 1) {
		printf("stack is full..");
		exit();
	}
	stack[++ * top] = item; //1������
}

element pop(int* top) { //2�� ����
	if (*top == -1) {
		printf("stack is empty..");
		exit();
	}
	return stack[ * top--]; //�ݵ�� ���� ������ ���� ����ϰ� --�� �� �ְ� 
}

element Top(int *top) { //3�� ����
	element item;
	if (*top == -1) {
		item.key = 0;
		return item;
	}
	return stack[*top];
}

void main() {
	element item;
	int top = -1;
	item.key = 5;
	push(&top, item);
	printf("Stack's Top => %d\n", Top(&top).key);
	printf("POP => %d\n", pop(&top).key);
}