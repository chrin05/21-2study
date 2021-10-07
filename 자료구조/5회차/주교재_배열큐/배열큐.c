#include <stdio.h>
#define MAX_QUEUE_SIZE 100

typedef struct {
	int key;
}element;
element queue[MAX_QUEUE_SIZE];

void insert(int* rear, element item) {
	if (*rear == MAX_QUEUE_SIZE - 1) {
		//queue_full();
		return;
	}
	queue[++ * rear] = item;
}

element delete(int* front, int rear) {
	if (*front == rear) return queue[*front];//queue_empty();
	return queue[++ * front];
}

//int queue_empty() {
//	if (front == rear)return 1;
//	else return 0;
//}

//int queue_full() {
//	if (rear == MAX_QUEUE_SIZE - 1) return 1;
//	else return 0;
//}

void main() {
	element item;
	int top = -1;
	int rear = -1;
	int front = -1;
	//1번문제
	item.key = 5;
	insert(&rear, item);

	//2번문제
	element e=delete(&front, rear);
	printf("delete : %d", e.key);


}