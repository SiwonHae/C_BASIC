#include <stdio.h>

void MaxAndMin(int * arr, int len, int ** dMaxPtr, int ** dMinPtr) {
	int * max;
	int * min;
	
	max = min = &arr[0];
	for (int i = 0; i < len; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}
	
	*dMaxPtr = max;
	*dMinPtr = min;
	
}

int main(void) {
	int * maxPtr;
	int * minPtr;
	int arr[5];
	
	for (int i = 0; i < 5; i++) {
		printf("%d번째 입력: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	MaxAndMin(arr, 5, &maxPtr, &minPtr);
	printf("최댓값: %d \t 최솟값: %d \n", *maxPtr, *minPtr);
	
	return 0;
}