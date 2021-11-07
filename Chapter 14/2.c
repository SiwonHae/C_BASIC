#include <stdio.h>

void Swap3(int * pnum1, int * pnum2, int * pnum3) {
	int tmp;
	tmp = *pnum1;
	*pnum1 = *pnum3;
	*pnum3 = *pnum2;
	*pnum2 = tmp;
}


int main(void) {

	int num1, num2, num3;
	
	printf("정수를 3개 입력하세요. : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	Swap3(&num1, &num2, &num3);
	printf("num1 : %d \t num2 : %d \t num3 : %d \n", num1, num2, num3);
	
	return 0;
}