#include <stdio.h>

int main(void) {

	int arr[5] = { 1, 2, 3, 4, 5 };
	int * ptr = &arr[4];
	int sum = 0;
	
	for (int i = 0; i < 5; i++) {
		sum += *ptr;
		ptr--;
	}
	
	printf("배열에 저장된 정수의 합 : %d \n", sum);
	
	return 0;
}