#include <stdio.h>

int biggestNum(int arr[], int len) {
	int max = arr[0];
	
	for (int i = 0; i < len; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	
	return max;
}

int smallestNum(int arr[], int len) {
	int min = arr[0];
	
	for (int i = 0; i < len; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	
	return min;
}

int sumNum(int arr[], int len) {
	int sum = 0;
	
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}
	
	return sum;
}

int main(void) {
	int arr[5];
	
	for (int i = 0; i < 5; i++) {
		printf("%d번째 정수를 입력합니다. : ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("입력된 정수 중에서 최댓값: %d \n", biggestNum(arr, 5));
	printf("입력된 정수 중에서 최솟값: %d \n", smallestNum(arr, 5));
	printf("입력된 정수들의 총 합: %d \n", sumNum(arr, 5));
	
	return 0;
}