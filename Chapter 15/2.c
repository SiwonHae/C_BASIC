#include <stdio.h>

#define MAX_LEN 100

int main(void) {

	int num;
	int arr[MAX_LEN];
	
	printf("10진수 정수 입력: ");
	scanf("%d", &num);
	
	int index = 0;
	while (num > 0) {
		arr[index] = num % 2;
		num /= 2;
		index++;
	}
	
	for (int i = index - 1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}