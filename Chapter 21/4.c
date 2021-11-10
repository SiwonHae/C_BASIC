#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int whereSpace(char user[]) {
	int len = strlen(user);
	int index;
	
	for (int i = 0; i < len; i++) {
		if (user[i] == ' ') {
			index = i;
			return index;
		}
	}
	
	return -1;
}

int isSameName(char user1[], char user2[]) {
	int index1 = whereSpace(user1);
	int index2 = whereSpace(user2);
	
	if (index1 != index2) {
		return -1;
	} else {
		return strncmp(user1, user2, index1);
	}
}

int isSameAge(char user1[], char user2[]) {
	int index1 = whereSpace(user1);
	int index2 = whereSpace(user2);
	int age1, age2;
	
	age1 = atoi(&user1[index1 + 1]);
	age2 = atoi(&user2[index2 + 1]);
	
	if (age1 == age2) {
		return 0;
	} else {
		return -1;
	}
	
}

int main(void) {
	
	char user1[256];
	char user2[256];
	
	printf("첫 번째 사람 정보 : ");
	fgets(user1, sizeof(user1), stdin);
	user1[strlen(user1) - 1] = '\0';
	
	printf("두 번째 사람 정보 : ");
	fgets(user2, sizeof(user2), stdin);
	user1[strlen(user2) - 1] = '\0';
	
	if (isSameName(user1, user2) == 0) {
		printf("이름이 동일합니다. \n");
	} else {
		printf("이름이 동일하지 않습니다. \n");
	}
	
	if (isSameAge(user1, user2) == 0) {
		printf("나이가 동일합니다. \n");
	} else {
		printf("나이가 동일하지 않습니다. \n");
	}
	
	return 0;
}