#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	
	printf("세 개의 정수를 입력하세요. (ex: 1 2 3) \n");
	
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d x %d + %d = %d \n", num1, num2, num3, num1 * num2 + num3);
	
	return 0;
}