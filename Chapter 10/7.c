#include <stdio.h>

int twoPower(int n) {
	int result = 1;
	
	for(int i = 0; i < n; i++) {
		result *= 2;
	}
	
	return result;
}

int main(void) {
	
	int num = 0;
	
	printf("상수 n 입력: ");
	scanf("%d", &num);
	
	int k = 0;
	
	for (int i = 0; i < num; i++) {
		if (twoPower(i) == num) {
			k = i;
		}
	}
	
	printf("공식을 만족하는 k의 최댓값은 %d \n", k);
	
	return 0;
}