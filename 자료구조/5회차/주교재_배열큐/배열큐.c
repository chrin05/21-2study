#include <stdio.h>
#define MAX_QUEUE_SIZE 5

typedef struct {
	int key;
}element;

element queue[MAX_QUEUE_SIZE];

void queue_full(int** rear, int** front) {
	if (**front == -1) {
		printf("QUEUE가 다 찬 상태입니다.\n");
	}
	else {
		for (int i = 0; i < (MAX_QUEUE_SIZE - 1 - **front); i++) {
			queue[i] = queue[**front + 1 + i];
		}
		**rear = MAX_QUEUE_SIZE - **front - 2;
		**front = -1;
	}
}

void insert(int* rear,int* front, element item) {
	if (*rear == MAX_QUEUE_SIZE - 1) {
		/*3번 문제*/
		/*if문이 true 일때 rear가 큐의 맨 끝에 있다는 뜻으로 무조건 full인 상태는 아님,
		  이때의 원소의 개수는 (MAX_QUEUE_SIZE-)-front */

		queue_full(&rear,&front);
		/*4번 문제*/
		//원소를 왼쪽으로 다시 정렬하거나 원형 큐로 만들어서 해결한다
		return;
	}
	queue[++ * rear] = item;
}

element delete(int* front, int rear) {
	if (*front == rear) return queue[*front]; //queue_empty();
	return queue[++ * front];
}

//int isempty() {
//	if (front == rear)return 1;
//	else return 0;
//}
//
//int isfull() {
//	if (rear == MAX_QUEUE_SIZE - 1) return 1;
//	else return 0;
//}

void main() {
	element item, e;
	int top = -1; //얘는 왜 있는거지...
	int rear = -1;
	int front = -1;
	printf("insert 1,2,3,4,5\n");
	//1번문제
	item.key = 1;
	insert(&rear, &front, item);
	item.key = 2;
	insert(&rear, &front, item);
	item.key = 3;
	insert(&rear, &front, item);
	item.key = 4;
	insert(&rear, &front, item);	
	item.key = 5;
	insert(&rear, &front, item);

	for (int i = 0; i < 5; i++) {
		printf("[%d] : %d\n", i, queue[i].key);
	}
	e = delete(&front, rear);
	printf("DELETE => [%d] : %d\n", front, e.key);


	printf("insert 6,7\n");
	item.key = 6;
	insert(&rear, &front, item);
	for (int i = 0; i < 5; i++) {
		printf("[%d] : %d\n", i, queue[i].key);
	}

	item.key = 7;
	insert(&rear, &front, item);

	for (int i = 0; i < 5; i++) {
		printf("[%d] : %d\n", i, queue[i].key);
	}

	

}