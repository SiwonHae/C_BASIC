#include <stdio.h>

#define MAX(X, Y) (((X) > (Y) ? (X) : (Y)))

int main(void) {
	
	int x, y;
	
	printf("두 정수 입력 : ");
	scanf("%d %d", &x, &y);
	
	printf("최댓값 : %d \n", MAX(x, y));
	
	return 0;
}