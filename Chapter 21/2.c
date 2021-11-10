#include <stdio.h>
#include <string.h>

int charToInt(char ch) {
	return ch += 1 - '1';
}

int main(void) {
	
	char str[30];
	
	printf("30자 미만의 문자열을 입력하세요. : ");
	scanf("%s", str);
	
	int len = strlen(str);
	int sum = 0;
	printf("아라비아 숫자 : ");
	for (int i = 0; i < len; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			printf("%c ", str[i]);
			sum += charToInt(str[i]);
		}
	}
	printf("\n");
	printf("총 합 : %d \n", sum);
	
	return 0;
}