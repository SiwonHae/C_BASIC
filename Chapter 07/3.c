#include <stdio.h>

int main(void) {
	int num;
	
	printf("정수를 계속 입력하세요. 0을 입력하면 멈춥니다. \n");
	
	int result = 0;
	
	while (num != 0) {
		scanf("%d", &num);
		result += num;
	}
	
	printf("입력한 정수의 합: %d \n", result);
	
	return 0;
}