#include <stdio.h>

int main(void) {
	int num;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	
	int i = 9;
	while (i >= 1) {
		printf("%d * %d = %d \n", num, i, num * i);
		i--;
	}
	
	return 0;
}