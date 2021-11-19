#include <stdio.h>

typedef struct complex {
	double real;
	double image;
} Complex;

int main(void) {
	
	Complex c1;
	Complex c2;
	
	printf("복소수 입력1[실수 허수] : ");
	scanf("%lf %lf", &c1.real, &c1.image);

	printf("복소수 입력2[실수 허수] : ");
	scanf("%lf %lf", &c2.real, &c2.image);
	
	printf("합의 결과] 실수: %f, 허수: %f \n", c1.real + c2. real, c1.image + c2.image);
	printf("곱의 결과] 실수: %f, 허수: %f \n", c1.real * c2. real - c1.image * c2.image, c1.image * c2.real + c1.real * c2.image);
	
	return 0;
}