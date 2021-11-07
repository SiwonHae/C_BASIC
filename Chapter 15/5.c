#include <stdio.h>

void desBubbleSort(int arr[], int len) {
	int tmp;
	
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < (len -i) - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(void) {
	int arr[7];
	
	for (int i = 0; i < 7; i++) {
		printf("%d번째 입력: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	DesSort(arr, 7);
	
	printf("내림차순으로 정렬 : ");
	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}