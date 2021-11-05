#include <stdio.h>

int main(void) {
	int num = 0;
	int sum = 0;
	int count = 0;
	
	printf("총 5개의 정수를 입력합니다. 반드시 1이상인 정수를 입력하세요. \n");
	while (count < 5) {
		
		while (num < 1) {
			printf("%d번째 정수 입력입니다: ", count + 1);
			scanf("%d", &num);
		}
		count++;
		sum += num;
		num = 0;
	}
	
	printf("합: %d \n", sum);
	
	return 0;
}