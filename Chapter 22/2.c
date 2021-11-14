#include <stdio.h>

struct employee {
	char name[20];
	char id[20];
	int salary;
};

int main(void) {
	struct employee user[3];
	
	for (int i = 0; i < 3; i++) {
		printf("종업원 이름 : ");
		scanf("%s", user[i].name);
		printf("종업원 주민등록번호 : ");
		scanf("%s", user[i].id);
		printf("급여 정보 : ");
		scanf("%d", &user[i].salary);
	}
	printf("\n\n");
	
	for (int i = 0; i < 3; i++) {
		printf("종업원 이름 : %s \n", user[i].name);
		printf("종업원 주민등록번호 : %s \n", user[i].id);
		printf("급여 정보 : %d원 \n", user[i].salary);
		printf("\n");
	}

	
	return 0;
}