//9. ���� ����� ����ϴ� �ݺ� �Լ��� �ۼ��ϰ� �� ��ȯ �Լ��� ��ȯ�϶�.
//���ڿ��� ��� �ѱ���..
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef struct {
	//���ڿ� �迭(�Լ��̸�)�� �޴� fname������
	char* fname;
} name;

name stack[MAX_STACK_SIZE];
int top = -1;
 
void push(name fname) {
	if (top >= MAX_STACK_SIZE - 1)
		printf("STACK is FULL, cannot add the name\n");
	else stack[++top] = fname;
}

name pop() {
	if (top == -1) {
		printf("STACK is EMPTY\n");
		name noname;
		char* cnoname = "empty";
		noname.fname = &cnoname;
		return noname;
	}
	else return stack[top--];
}

int nCk(int n, int k) {
	char* name1 = itao(n)+"C"+itao(k);
	name givename;
	givename.fname = &name1;
	push(givename);
	printf("%s\n", *givename.fname);
	if (k == 0 || k == n) return 1;
	else if ((0 < k) && (k < n))
		return nCk(n - 1, k - 1) + nCk(n - 1, k);
	else {
		printf("%s\n", *pop().fname);
		return 0;
	}
}

int main(void) {

	int n, k, result;

	n = 7; k = 5;
	result = nCk(n, k);
	printf("%dC%d = %d\n", n, k, result);

	return 0;
}