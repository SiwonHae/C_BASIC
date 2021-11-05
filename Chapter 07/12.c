#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("팩토리얼 할 수 입력: ");
	scanf("%d", &num);

	int result = 1;
	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	
	printf("%d! = %d \n", num, result);
	
	return 0;
}