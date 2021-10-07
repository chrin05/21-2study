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

void init_car(void) //프로그램 시작시 명함 목록을 읽어 배열에 저장
{
	FILE* fp;
	card t;
	card u;
	//fp = fopen("namecard.txt", "rb"파일을 rb 모드로 열기
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
	printf("\n 명함입력 : ");
	printf("\n 이름 => ");
	gets(t.name);
	printf("\n 회사 => ");
	gets(t.corp);
	printf("\n 전화 => ");
	gets(t.tel);
	cards[10] = t;
}



int main() {
	printf("NAMECARD Manager(명함관리)\n");
	printf("-------------------------\n");
	printf("1. 입력(명함)\n2. 삭제(명함)\n3. 검색(명함)\n4. 전체검색\n5. 종료\n\n");

	int choice;
	printf("명령선택 => ");
	scanf("%d\n", &choice);

	while ((choice = selction_menu()) != 5) {
		switch (choice)
		{
		case 1: input_car();
			break;
		case 2: printf("\n 이름 : "); gets(name);
			if (!delete_card(name)) printf("\n 찾지 못함");
			break;
		case 3: printf("\n 이름 : "); gets(name);
			t = search_card(name);
			if (!search_card(name)) {
				printf("\n찾지 못함");
				break;
			}
			print_card(t, stdout);
			break;
		case 4:
			printf("\n/이름/     /회사/    /전화번호/\n");
			while () {
				printf("%c");
			}
			break;
		default:
			printf("1~5 중 선택");
			break;
		}
	}

	printf("\n\nProgram 종료 ...");

	return 0;
}