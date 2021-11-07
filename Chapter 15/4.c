#include <stdio.h>

#define MAX_LEN 100

void palindrome(char arr[], int len) {
	int front = 0, back = len - 1;
	
	for (int i = 0; i < len / 2; i++) {
		if (arr[front] != arr[back]) {
			printf("회문이 아닙니다. \n");
			return;
		}
		front++;
		back--;
	}
	printf("회문 입니다. \n");
}

int main(void) {
	char str[MAX_LEN];
	
	printf("문자열 입력: ");
	scanf("%s", str);
	
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	
	palindrome(str, len);
	
	return 0;
}