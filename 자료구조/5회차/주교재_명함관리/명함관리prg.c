#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME_SIZE 100
#define TEL_SIZE 100

typedef struct acard {
	char name[NAME_SIZE];
	char company[NAME_SIZE];
	char telephone[TEL_SIZE];
} card;

card cards[100];

void init_car(void) //���α׷� ���۽� ���� ����� �о� �迭�� ����
{
	FILE* fp;
	card t;
	card u;
	//fp = fopen("namecard.txt", "rb"������ rb ���� ����
	if ((fp = fopen("namecard.txt", "rb")) == NULL) { 
		printf("\n  ERROR : namecard.txt is not exist.");
		return;
	}
	t = head->next;
	while (t != tail) {
		u = t;
		t = t->next;
		free(u);
	}
	head->next = tail;
	while (1) {
		t = (card*)malloc(sizeof(card));
		if (!fread(t, REC_SIZE, 1, fp)) //if file end
		{
			free(t);
			break;
		}
		t->next = head->next;
		head->next = t;
	}
	fclose(fp);

}

void input_card(void) {
	card t;
	printf("\n �����Է� : ");
	printf("\n �̸� => ");
	gets(t.name);
	printf("\n ȸ�� => ");
	gets(t.corp);
	printf("\n ��ȭ => ");
	gets(t.tel);
	cards[10] = t;
}



int main() {
	printf("NAMECARD Manager(���԰���)\n");
	printf("-------------------------\n");
	printf("1. �Է�(����)\n2. ����(����)\n3. �˻�(����)\n4. ��ü�˻�\n5. ����\n\n");

	int choice;
	printf("��ɼ��� => ");
	scanf("%d\n", &choice);

	while ((choice = selction_menu()) != 5) {
		switch (choice)
		{
		case 1: input_car();
			break;
		case 2: printf("\n �̸� : "); gets(name);
			if (!delete_card(name)) printf("\n ã�� ����");
			break;
		case 3: printf("\n �̸� : "); gets(name);
			t = search_card(name);
			if (!search_card(name)) {
				printf("\nã�� ����");
				break;
			}
			print_card(t, stdout);
			break;
		case 4:
			printf("\n/�̸�/     /ȸ��/    /��ȭ��ȣ/\n");
			while () {
				printf("%c");
			}
			break;
		default:
			printf("1~5 �� ����");
			break;
		}
	}

	printf("\n\nProgram ���� ...");

	return 0;
}