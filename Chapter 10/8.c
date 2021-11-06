#include <stdio.h>

int twoPower(int n) {
	if (n == 0)
		return 1;
	return twoPower(n -1) * 2;
}

int main(void) {
	
	int num = 0;
	
	printf("정수 입력: ");
	scanf("%d", &num);
	
	printf("2의 %d승은 %d \n", num, twoPower(num));
	
	return 0;
}