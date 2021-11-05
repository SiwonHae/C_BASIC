#include <stdio.h>

int main(void) {
	
	int sum = 0;
	int num = 0;
	
	do {
		sum += num;
		num += 2;
	} while (num <= 100);
	
	printf("0이상 100이하 짝수 덧셈의 결과: %d \n", sum);

	return 0;
}