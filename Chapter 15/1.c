#include <stdio.h>

void oddShow(int arr[], int len) {
	printf("홀수 출력: ");
	
	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}
}

void evenShow(int arr[], int len) {
	printf("짝수 출력: ");
	
	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
}

int main(void) {

	int arr[10];
	
	printf("총 10개의 정수 입력 \n");
	for (int i = 0; i < 10; i++) {
		printf("%d번째 입력: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	oddShow(arr, 10);
	printf("\n");
	evenShow(arr, 10);
	printf("\n");
	
	return 0;
}