#include <stdio.h>

int main(void) {
	int num;
	
	printf("양의 정수를 입력하세요: ");
	scanf("%d", &num);
	
	int i = 0;
	while (i < num) {
		i++;
		printf("Hello world! %d번! \n", i);
	}
	
	return 0;
}