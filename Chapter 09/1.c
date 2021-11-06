#include <stdio.h>

int biggestValue(int num1, int num2, int num3) {
	int result = 0;
	
	if (num1 > num2) {
		if (num1 > num3) {
			result = num1;
		} else {
			result = num3;
		}
	} else {
		if (num2 > num3) {
			result = num2;
		} else {
			result = num3;
		}
	}
	
	return result;
}

int smallestValue(int num1, int num2, int num3) {
	int result = 0;
	
	if (num1 < num2) {
		if (num1 < num3) {
			result = num1;
		} else {
			result = num3;
		}
	} else {
		if (num2 < num3) {
			result = num2;
		} else {
			result = num3;
		}
	}
	
	return result;
}

int main(void) {
	int n1, n2, n3;
	
	printf("세 개의 정수를 입력하세요. (ex : 1 2 3): ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf("가장 큰 수: %d \n", biggestValue(n1, n2, n3));
	printf("가장 작은 수: %d \n", smallestValue(n1, n2, n3));
	
	return 0;
}