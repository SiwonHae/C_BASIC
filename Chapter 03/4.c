#include <stdio.h>

int main(void) {
	int num1, num2;
	
	printf("두 개의 정수를 입력하세요. (ex: 1 2) \n");
	
	scanf("%d %d", &num1, &num2);
	
	printf("몫: %d \t 나머지: %d \n", num1 / num2, num1 % num2);
	
	return 0;
}