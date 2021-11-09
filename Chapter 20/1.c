#include <stdio.h>

void printfArray(int arr[][4], int column) {
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void turnAngle(int arr[][4], int column) {
	int arr2[4][4];
	
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < 4; j++) {
			arr2[j][4 - i - 1] = arr[i][j];
		}
	}
	
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = arr2[i][j];
		}
	}
}

int main(void) {
	int arr[4][4];
	int num = 1;
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = num;
			num++;
		}
	}
	printfArray(arr, sizeof(arr) / sizeof(arr[0]));
	
	turnAngle(arr, sizeof(arr) / sizeof(arr[0]));
	printfArray(arr, sizeof(arr) / sizeof(arr[0]));
	turnAngle(arr, sizeof(arr) / sizeof(arr[0]));
	printfArray(arr, sizeof(arr) / sizeof(arr[0]));
	turnAngle(arr, sizeof(arr) / sizeof(arr[0]));
	printfArray(arr, sizeof(arr) / sizeof(arr[0]));
	
	
	return 0;
}