#include <stdio.h>

int SquareByValue (int num) {
	return num * num;
}

void SquareByReference(int * pnum) {
	int num = *pnum;
	*pnum = num * num;
}


int main(void) {

	int num;
	
	printf("정수를 입력하세요. : ");
	scanf("%d", &num);
	
	printf("제곱 : %d \n", SquareByValue(num));
	
	SquareByReference(&num);
	printf("제곱 : %d \n", num);
	
	return 0;
}