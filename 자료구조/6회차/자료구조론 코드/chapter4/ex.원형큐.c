#include <stdio.h>
#define MAX_SIZE 3 //큐에 들어갈 수 있는 원소의 개수는? = 

int queue[MAX_SIZE];
int front = 0; //; 
int rear = 0; //;

void insert(int item);
int delete(void);
void print_queue(void);

int main(void)
{
	int item;

	printf("Delete %d\n", delete());
	item = 5; printf("Insert %d\n", item); insert(item);
	item = 6; printf("Insert %d\n", item); insert(item);
	item = 7; printf("Insert %d\n", item); insert(item);
	print_queue();

	printf("Delete %d\n", delete());
	printf("Delete %d\n", delete());
	printf("Delete %d\n", delete());
	print_queue();

	return 0;
}
void insert(int item)
{
	//알고리즘 작성
	if (++rear == front) printf("Queue is Full\n");
	else queue[rear] = item;

}

int delete(void)
{
	//알고리즘 작성
	if (rear == front) {
		printf("Queue is empty\n");
		return -1;
	}
	return queue[--front];
}

void print_queue(void)
{
	//알고리즘 작성
	printf("Queue element : ");
	for (int i = (front + 1); i < (rear + 1); i++) {
		printf("%d ", queue[i]);
	}
}