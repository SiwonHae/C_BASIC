#include <stdio.h>

int main(void) {
	int count;
	
	printf("몇 개의 정수를 입력하실건가요? ");
	scanf("%d", &count);
	
	int i = 0;
	int num;
	int sum = 0;
	double avg = 0;
	
	while (i < count) {
		printf("%d번째 정수를 입력합니다: ", i + 1);
		scanf("%d", &num);
		i++;
		sum += num;
	}
	
	avg = (double)sum / count;
	printf("평균값: %.2f \n", avg);
	
	return 0;
}