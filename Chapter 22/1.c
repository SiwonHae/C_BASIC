#include <stdio.h>

struct employee {
	char name[20];
	char id[20];
	int salary;
};

int main(void) {
	struct employee user;
	
	printf("종업원 이름 : ");
	scanf("%s", user.name);
	printf("종업원 주민등록번호 : ");
	scanf("%s", user.id);
	printf("급여 정보 : ");
	scanf("%d", &user.salary);
	
	printf("종업원 이름 : %s \n", user.name);
	printf("종업원 주민등록번호 : %s \n", user.id);
	printf("급여 정보 : %d원 \n", user.salary);
	
	return 0;
}