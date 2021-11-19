#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int len = 5;
	int index = 0;
	int * arr = (int *)malloc(sizeof(int) * len);
	
	while (1) {
		printf("정수 입력(-1 입력시 종료) : ");
		scanf("%d", &arr[index]);
		
		if (arr[index] == -1) {
			break;
		}
		
		if (len == index + 1) {
			len += 3;
			arr = (int *) realloc(arr, sizeof(int) * len);
		}
		index++;
	}
	
	for (int i = 0; i < index; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	free(arr);
	
	return 0;
}