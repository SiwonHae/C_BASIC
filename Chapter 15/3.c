#include <stdio.h>

int main(void) {
	int arr[10];
	int result[10];
	
	printf("총 10개의 정수 입력 \n");
	for(int i = 0; i < 10; i++) {
		printf("%d번째 입력: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	int oddCount = 0;
	int evenCount = 9;
	
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			result[evenCount] = arr[i];
			evenCount--;
		} else {
			result[oddCount] = arr[i];
			oddCount++;
		}
	}
	
	printf("배열 요소의 출력 : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", result[i]);
	}
	
	printf("\n");
	
	return 0;
}