#include <stdio.h>

int main(void) {
	int num1, num2;
	
	printf("구구단을 위한 두 개의 정수를 입력: ");
	scanf("%d %d", &num1, &num2);
	
	if (num1 > num2) {
		int tmp = 0;
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	
	for (int i = num1; i <= num2; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d \n", i, j, i * j);
		}
		printf("\n\n");
	}
	
	return 0;
}