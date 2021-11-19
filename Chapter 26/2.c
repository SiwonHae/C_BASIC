#include <stdio.h>

#define PI 3.14
#define AREA(R) ((R) * (R) * PI)

int main(void) {
	
	double radius;
	
	printf("원 반지름 입력 : ");
	scanf("%lf", &radius);
	
	printf("원의 넓이 : %f \n", AREA(radius));
	
	return 0;
}