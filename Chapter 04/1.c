#include <stdio.h>

int main(void) {
	int num;
	
	printf("정수를 하나 입력하세요: ");
	
	scanf("%d", &num);
	
	// 2의 보수
	num = ~num;
	num += 1;
	
	printf("부호를 바꾼 값: %d \n", num);
	
	return 0;
}