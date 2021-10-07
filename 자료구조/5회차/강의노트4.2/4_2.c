/* DBLAB queue.c */
#include <stdio.h>
#define MAX_QUEUE_SIZE 100
typedef struct {
	int key;
	char player;
} element;

element queue[MAX_QUEUE_SIZE];

void insertq(int* rear, int front, element item) {
	if (*rear == MAX_QUEUE_SIZE - 1) {
		printf(" => Queue Full\n");
		exit();
	}
	queue[++ * rear].key = item.key;
	queue[*rear].player = item.player;
}

element deleteq(int* front, int rear) {
	//element e;
	if (*front == rear)
	{
		printf(" => Queue Empty\n");
		exit(); /* return an error key */
	}
	return queue[++ * front];
}

//??이 부분이 뭐지..수업 안들어서 기억이 안나...요...오...
element first()
{
	element e = { 0 };
	// ... 코드 작성 필요.
	return e;
}

int isempty(int front, int rear)
{
	if (front == rear) return(1); else return(0);
}

int isfull(int front, int rear)
{
	if (rear == (MAX_QUEUE_SIZE - 1)) return(1);
	else return(0);
}


void main(void) /* 큐를 테스트하는 프로그램 */
{
	int rear = -1; 	int front = -1;
	element e1, e2;
	e1.key = 100; e1.player = 'A'; insertq(&rear, front, e1);
	e1.key = 200; e1.player = 'B'; insertq(&rear, front, e1);
	e1.key = 300; e1.player = 'C'; insertq(&rear, front, e1);

	e2 = deleteq(&front, rear);
	printf(" => Return Value is ( %d, %c )\n", e2.key, e2.player);
	e2 = deleteq(&front, rear);
	printf(" => Return Value is ( %d, %c )\n", e2.key, e2.player);
	e2 = deleteq(&front, rear);
	printf(" => Return Value is ( %d, %c )\n", e2.key, e2.player);
}