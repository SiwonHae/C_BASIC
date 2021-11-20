#include <stdio.h>
#include <string.h>

#define MAX_NUM 10

typedef struct info {
	char name[20];
	char phone[20];
} Info;

void showMenu(void) {
	printf("***** MENU ***** \n");
	printf("1. Insert \n");
	printf("2. Delete \n");
	printf("3. Search \n");
	printf("4. Print All \n");
	printf("5. Exit \n");
}

void insert(Info * person, int * personNum) {
	char tempName[20];
	char tempPhone[20];
	
	printf("[INSERT] \n");
	printf("Input Name : ");
	scanf("%s", tempName);
	strcpy(person[*personNum].name, tempName);
	
	printf("Input Tel Number : ");
	scanf("%s", tempPhone);
	strcpy(person[*personNum].phone, tempPhone);
	
	(*personNum)++;
	printf("Data Inserted \n");
}

void delete(Info * person, int * personNum) {
	char deleteName[20];
	
	printf("삭제할 사람의 이름을 입력하세요 : ");
	scanf("%s", deleteName);
	
	for (int i = 0; i < *personNum; i++) {
		if (strcmp(person[i].name, deleteName) == 0) {
			for (int j = i + 1; j < *personNum; j++) {
				strcpy(person[j - 1].name, person[j].name);
				strcpy(person[j - 1].phone, person[j].phone);
			}
			(*personNum)--;
			return;
		}
	}
	
	printf("Data Deleted \n");
}

void search(Info * person, int count) {
	char searchName[20];
	
	printf("검색할 사람의 이름을 입력하세요 : ");
	scanf("%s", searchName);
	
	for (int i = 0; i < count; i++) {
		if (strcmp(person[i].name, searchName) == 0) {
			printf("Name : %s \n", person[i].name);
			printf("Tel : %s \n", person[i].phone);
			return;
		}
	}
	
	printf("입력한 이름의 정보가 없습니다. \n");
}

void printAll(Info * person, int count) {
	printf("[Print All Data] \n");
	
	for (int i = 0; i < count; i++) {
		printf("Name : %s \n", person[i].name);
		printf("Tel : %s \n", person[i].phone);
	}
}

int main(void) {
	
	int select;
	int count = 0; // 등록된 사람 수
	
	Info person[MAX_NUM];
	
	while (1) {
		showMenu();
		printf("Choose the item: ");
		scanf("%d", &select);
		
		if (select == 5) {
			printf("프로그램을 종료합니다. \n");
			break;
		}
		
		switch (select) {
			case 1:
				insert(person, &count);
				break;
			case 2:
				delete(person, &count);
				break;
			case 3:
				search(person, count);
				break;
			case 4:
				printAll(person, count);
				break;
			default:
				printf("다시 입력하세요. \n");
				break;
		}
	}
	
	
	return 0;
}