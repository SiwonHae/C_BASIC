#include <stdio.h>

#define ADD(X, Y, Z) ((X) + (Y) + (Z))
#define MUL(X, Y, Z) ((X) * (Y) * (Z))

int main(void) {
	
	int x, y, z;
	
	printf("3개의 정수 입력 : ");
	scanf("%d %d %d", &x, &y, &z);
	
	printf("%d + %d + %d = %d \n", x, y, z, ADD(x, y, z));
	printf("%d * %d * %d = %d \n", x, y, z, MUL(x, y, z));
	
	return 0;
}