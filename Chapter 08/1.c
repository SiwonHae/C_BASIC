#include <stdio.h>

int main(void) {
	
	printf("7의 배수와 9의 배수 \n");
	for (int i = 1; i < 100; i++) {
		if (i % 7 == 0 || i % 9 == 0) {
			printf("%d \n", i);
		}
	}
	
	return 0;
}