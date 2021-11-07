#include <stdio.h>

int main(void) {

	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int * front = arr;
	int * back = &arr[5];
	
	int tmp;
	for (int i = 0; i < 3; i++) {
		tmp = *front;
		*front = *back;
		*back = tmp;
		
		front++;
		back--;
	}
	
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}