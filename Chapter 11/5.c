#include <stdio.h>

#define MAX_LEN 50

char maxASCII(char arr[], int len) {
	char max = arr[0];
	
	for (int i = 0; i < len; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	
	return max;
}

int main(void) {
	char str[MAX_LEN];
	int len;
	
	printf("영단어 하나를 입력하세요. : ");
	scanf("%s", str);
	
	while (str[len] != '\0') {
		len++;
	}
	
	printf("아스키 코드 값이 가장 큰 문자: %c \n", maxASCII(str, len));
	
	return 0;
}