#include <stdio.h>

int main(void) {
	
	
	for (int i = 1; i <= 9; i++) {
		if (i % 2 != 0) {
			continue;
		}
		
		for (int j = 1; j <= 9; j++) {
			if(i < j) {
				break;
			}
			printf("%d * %d = %d \n", i, j, i * j);
		}
		
		printf("\n\n");
	}
	
	return 0;
}