#include <stdio.h>

int GCD(int num1, int num2) {
	
	while (num2 > 0) {
		int num3;
		
		num3 = num1;
		num1 = num2;
		num2 = num3 % num2; 
	}
	
	return num1;
}

int main(void) {
	int num1, num2;
	
	printf("두 개의 정수를 입력: ");
	scanf("%d %d", &num1, &num2);
	
	printf("최대 공약수: %d \n", GCD(num1, num2));
	
	return 0;
}