#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

list_ptr creat(int n);
void print(list_ptr ptr);
void delete(list_ptr ptr, int item);//item를 찾아서 삭제
void delete2(list_ptr* ptr, list_ptr node, list_ptr trail); //node 앞의 데이터를 삭제
void insert(list_ptr ptr, int item); //정렬되어 있는 연결리스트에 데이터가 들어갈 자리를 찾아서 삽입
void insert2(list_ptr* ptr, list_ptr aptr, int x);//aptr이 가리키는 node 다음에 x를 삽입

int main(void)
{
	printf("***연결리스트***\n"); 
	list_ptr p = creat(4); print(p);
	printf("delete 30\n"); delete(p, 30); print(p);
	printf("insert 5\n"); insert2(&p, p->link->link, 5); print(p);
	printf("insert 35\n"); insert(p, 35); print(p);
	printf("delete 20\n");  delete2(&p, p->link->link, p->link); print(p);

	return 0;
}

list_ptr creat(int n)
{
	//알고리즘 작성
	list_ptr temp, first=NULL;
	for (int i = 0; i < n; i++) {
		temp = (list_ptr)malloc(sizeof(list_node));
		temp->datadata = i;
		temp->link = first;
		first = temp;
	}
}

void print(list_ptr ptr)
{
	//알고리즘 작성
	for (; ptr != NULL; ptr = ptr->link) {

	}
}

void delete(list_ptr ptr, int item)
{
	//알고리즘 작성
}

void delete2(list_ptr* ptr, list_ptr node, list_ptr trail)
{
	//알고리즘 작성
}

void insert(list_ptr ptr, int item)
{
	//알고리즘 작성
}

void insert2(list_ptr* ptr, list_ptr aptr, int x)
{
	//알고리즘 작성
}