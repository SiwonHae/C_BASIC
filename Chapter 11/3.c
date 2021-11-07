#include <stdio.h>

#define MAX_LEN 50

int main(void) {
	char str[MAX_LEN];
	int len;
	
	printf("영단어 하나를 입력하세요. : ");
	scanf("%s", str);
	
	while (str[len] != '\0') {
		len++;
	}
	
	printf("영단어의 길이: %d \n", len);
	
	
	return 0;
}