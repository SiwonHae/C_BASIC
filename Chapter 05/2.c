#include <stdio.h>

int main(void) {
	double d1, d2;
	
	printf("두 실수를 입력: ");
	scanf("%lf %lf", &d1, &d2);
	
	printf("%f + %f = %f \n", d1, d2, d1 + d2);
	printf("%f - %f = %f \n", d1, d2, d1 - d2);
	printf("%f * %f = %f \n", d1, d2, d1 * d2);
	printf("%f / %f = %f \n", d1, d2, d1 / d2);
	
	return 0;
}