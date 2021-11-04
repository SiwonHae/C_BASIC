#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	
	printf("세 개의 정수를 입력하세요. (ex: 1 2 3) \n");
	
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("(%d - %d) x (%d + %d) x (%d % %d)", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
	
	return 0;
}