#include <stdio.h>

int main(void) {
	
	int num1, num2;
	
	printf("두 개의 정수를 입력하세요 (ex: 1 2): ");
	scanf("%d %d", &num1, &num2);
	
	int result = 0;
	result = (num1 > num2) ? (num1 - num2) : (num2 - num1);
	
	printf("두 정수의 차: %d \n", result);
	
	return 0;
}