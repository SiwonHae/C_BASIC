#include <stdio.h>

#define MAX_SIZE 100

void printfArray(int arr[][MAX_SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void snailArray(int arr[][MAX_SIZE], int size) {
	int num = 1;
	int index = 0;
	
	// 가로1 -> 세로1 -> 가로2 -> 세로2 반복
	while (index < size - 2) {
		
		// 가로1
		for (int i = index; i < size - index; i++) {
			arr[index][i] = num;
			num++;
		}
		
		// 세로1
		for (int i = index + 1; i < size - index; i++) {
			arr[i][size - index - 1] = num;
			num++;
		}
		
		// 가로2
		for (int i = size - index - 2; i >= index; i--) {
			arr[size - index - 1][i] = num;
			num++;
		}
		
		// 세로2
		for (int i = size - index - 2; i > index; i--) {
			arr[i][index] = num;
			num++;
		}
		
		index++;
	}
}

int main(void) {
	int arr[MAX_SIZE][MAX_SIZE];
	int n = 0;
	
	printf("100보다 작은 숫자를 입력하시오 : ");
	scanf("%d", &n);
	
	snailArray(arr, n);
	printfArray(arr, n);
	
	return 0;
}