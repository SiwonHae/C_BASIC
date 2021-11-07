#include <stdio.h>

int main(void) {
	char arr[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	int len = sizeof(arr) / sizeof(char);
	
	for (int i = 0; i < len; i++) {
		printf("%c", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}