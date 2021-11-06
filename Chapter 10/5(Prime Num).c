#include <stdio.h>

int main(void) {
	
	int num = 0;
	int count = 0;
	
	for (int i = 1; num < 10; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (count == 2) {
			printf("%d ", i);
			num++;
		}
		count = 0;
	}
	
	return 0;
}