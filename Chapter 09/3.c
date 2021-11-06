#include <stdio.h>

void fibo(int count) {
	int n1, n2, n3;
	int currentCount = 0;
	
	n1 = 0; // 피보나치 수열의 첫 번째 항
	n2 = 1; // 피보나치 수열의 두 번째 항
	
	if (count == 1) {
		printf("%d \n", n1);
	} else if (count == 2) {
		printf("%d %d \n", n1, n2);
	} else {
		printf("%d %d ", n1, n2);
		
		for(int i = 0; i < count - 2; i++) {
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
			printf("%d ", n3);
		}
		printf("\n");
	}
}

int main(void) {
	int count;
	
	printf("몇 번째까지 피보나치 수열을 볼까요? (단, 1 이상을 입력!) : ");
	scanf("%d", &count);
	
	fibo(count);
	
	return 0;
}