#include <stdio.h>

int main(void) {
	int num;
	
	printf("하나의 정수 입력하세요: ");
	
	scanf("%d", &num);
	
	printf("제곱수: %d \n", num * num);
	
	return 0;
}