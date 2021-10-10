#include <stdio.h>
#define MAX_QUEUE_SIZE 100

typedef struct {
	int key;
}element;

element queue[MAX_QUEUE_SIZE];
int rear = -1;
int front = -1;

void queue_full() {
	//queue원소수가 max크기와 같을 때 full
	if ((rear - front) == MAX_QUEUE_SIZE) {
		printf("QUEUE is FULL\n");
	}
}

element queue_empty() {
	printf("QUEUE is EMPTY\n");
	//큐가 empty 일때 key값이 -1인 element 반환
	element e;
	e.key = -1;
	return e;
}

void insert(int* rear, element item) {
	if (*rear == MAX_QUEUE_SIZE - 1) {
		queue_full();
		return;
	}
	queue[++ * rear] = item;
}


element delete(int* front, int rear) {
	if (*front == rear) return queue_empty();
	return queue[++ * front];
}

int main() {
	element e1, e2;
	e1.key = 100;
	insert(rear, e1);

	e2 = delete(front, rear);
	printf("=> RETURN value is %d\n", e2.key);
	return 0;
}
