#include <stdio.h>

int main(void) {
	int num;
	
	// 비트의 열을 왼쪽으로(<<) 1칸씩 이동시킬 때마다 정수의 값은 두 배
	// 비트의 열을 오른쪽으로(>>) 1칸씩 이동시킬 때마다 정수의 값은 2로 나뉘어짐
	
	num = 3;
	num = num << 3;
	num = num >> 2;
	
	printf("3 x 8 / 4 = %d \n", num);
	
	return 0;
}