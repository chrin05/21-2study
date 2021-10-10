#include <stdio.h>
#define MAX_QUEUE_SIZE 6

int queue[MAX_QUEUE_SIZE];
int front = 0;
int rear = 0;

void clear_queue(void) {
	front = rear = 0;
}

int queueFull() {
	if (rear == MAX_QUEUE_SIZE - 1) {
		printf("QUEUE is FULL\n");
		return -1;
	}
	return 0;
}

int queueEmpty() {
	int a = queueFull();
	if (a == 0) {
		printf("QUEUE is EMPTY");
	}
}

void add(int front, int rear, int item) {
	rear = (rear + 1) % MAX_QUEUE_SIZE;
	if (front == rear ) {
		queueFull(rear);
	}
	queue[rear] = item;
}

int delete(int front, int rear) {
	if (front == rear) {
		return queueEmpty();
		front = (front + 1) % MAX_QUEUE_SIZE;
	}
	else return queue[front];
}

void main(void) {
	int i;
	printf("front=%d, rear=%d, 원소수=%d\n", front, rear, (rear - front) % MAX_QUEUE_SIZE);
	//큐 삽입
	printf("Insert 4 => \n"); add(front, rear, 4);
	printf("Insert 5 => \n"); add(front, rear, 5);

	printf("Delete => ");
	i = delete(front, rear);
	printf("  Deleted value is %d\n", i);

}