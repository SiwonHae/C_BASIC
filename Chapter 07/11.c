#include <stdio.h>

int main(void) {
	
	int num1, num2;
	
	printf("두 개의 정수를 입력하세요. 단 첫 번째 입력되는 정수보다 두 번째 정수가 더 큽니다.(ex: 1 2) : ");
	scanf("%d %d", &num1, &num2);

	int sum = 0;
	for(int i = num1; i <= num2; i++) {
		sum += i;
	}
	
	printf("시작부터 끝까지의 합: %d \n", sum);
	
	return 0;
}