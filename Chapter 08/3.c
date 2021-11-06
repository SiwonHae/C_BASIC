#include <stdio.h>

int main(void) {
	
	int kor, eng, mth;
	
	printf("국어, 영어, 수학 점수를 입력하세요. (ex: 70 80 90): ");
	scanf("%d %d %d", &kor, &eng, &mth);
	
	double avg;
	avg = (kor + eng + mth) / 3.0;
	
	if (avg > 90) {
		printf("평균: %f, A! \n", avg);
	} else if (avg > 80) {
		printf("평균: %f, B! \n", avg);
	} else if (avg > 70) {
		printf("평균: %f, C! \n", avg);
	} else if (avg > 50) {
		printf("평균: %f, D! \n", avg);
	} else {
		printf("평균: %f, F! \n", avg);
	}
	
	return 0;
}